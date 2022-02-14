
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u16_t ;
struct agg_tid_rx {size_t aid; size_t ac; } ;
struct TYPE_2__ {struct agg_tid_rx** tid_rx; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;

struct agg_tid_rx *FUNC_3(zdev_t* VAR_2, zbuf_t* VAR_3)
{
    u16_t VAR_4[3];
    u16_t VAR_5, VAR_6, VAR_7;
    u16_t VAR_8 = 0;
    struct agg_tid_rx *VAR_9 = ((void*)0);

    FUNC_1(VAR_2);



    VAR_4[0] = FUNC_2(VAR_2, VAR_3, VAR_8+10);
    VAR_4[1] = FUNC_2(VAR_2, VAR_3, VAR_8+12);
    VAR_4[2] = FUNC_2(VAR_2, VAR_3, VAR_8+14);
    VAR_5 = FUNC_0(VAR_2, VAR_4);

    VAR_6 = (FUNC_2(VAR_2, VAR_3, 24) & 0xF);




    for (VAR_7=0; VAR_7<VAR_0 ; VAR_7++)
    {
        if((VAR_1->tid_rx[VAR_7]->aid == VAR_5) && (VAR_1->tid_rx[VAR_7]->ac == VAR_6))
        {
            VAR_9 = VAR_1->tid_rx[VAR_7];
            break;
        }
    }



    return VAR_9;
}
