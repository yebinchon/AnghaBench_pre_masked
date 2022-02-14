
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resolv_entries {size_t addrs_len; int * addrs; } ;
typedef int port_t ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {int sin_port; TYPE_1__ sin_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 () ;
 int FUNC_2 (struct resolv_entries*) ;
 struct resolv_entries* FUNC_3 (scalar_t__) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    struct resolv_entries *VAR_3;

    FUNC_6(VAR_0);
    VAR_3 = FUNC_3(FUNC_5(VAR_0, ((void*)0)));
    FUNC_4(VAR_0);
    if (VAR_3 == ((void*)0))
    {



        return;
    }
    VAR_2.sin_addr.s_addr = VAR_3->addrs[FUNC_1() % VAR_3->addrs_len];
    FUNC_2(VAR_3);

    FUNC_6(VAR_1);
    VAR_2.sin_port = *((port_t *)FUNC_5(VAR_1, ((void*)0)));
    FUNC_4(VAR_1);




}
