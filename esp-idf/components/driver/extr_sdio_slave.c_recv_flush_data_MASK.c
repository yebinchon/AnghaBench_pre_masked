
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ portBASE_TYPE ;
typedef int buf_stailq_t ;
struct TYPE_5__ {int owner; } ;
typedef TYPE_1__ buf_desc_t ;
struct TYPE_6__ {int recv_event; int recv_link_list; } ;


 TYPE_1__* FUNC_0 (int * const) ;
 int FUNC_1 (int * const,TYPE_1__*,int ) ;
 int FUNC_2 (int * const,int ) ;
 int FUNC_3 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    buf_stailq_t *const VAR_3 = &VAR_0.recv_link_list;

    FUNC_4();
    while(1) {
        portBASE_TYPE VAR_4 = FUNC_7(VAR_0.recv_event, 0);
        if (VAR_4 == VAR_1) break;

        buf_desc_t *VAR_5 = FUNC_0(VAR_3);
        FUNC_3 (VAR_5 != ((void*)0) && VAR_5->owner == 0);
        FUNC_2(VAR_3, VAR_2);
        VAR_5->owner = 1;
        FUNC_1(VAR_3, VAR_5, VAR_2);
        FUNC_6();

    }
    FUNC_5();
}
