
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* object_list; } ;
struct TYPE_12__ {struct TYPE_12__* region_list_next; struct TYPE_12__* next; struct TYPE_12__* display_list; struct TYPE_12__* object_list_next; int object_id; } ;
struct TYPE_11__ {TYPE_2__* display_list; } ;
typedef TYPE_1__ DVBSubRegion ;
typedef TYPE_2__ DVBSubObjectDisplay ;
typedef TYPE_2__ DVBSubObject ;
typedef TYPE_4__ DVBSubContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__* FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_3(DVBSubContext *VAR_0, DVBSubRegion *VAR_1)
{
    DVBSubObject *VAR_2, *VAR_3, **VAR_4;
    DVBSubObjectDisplay *VAR_5, *VAR_6, **VAR_7;

    while (VAR_1->display_list) {
        VAR_5 = VAR_1->display_list;

        VAR_2 = FUNC_2(VAR_0, VAR_5->object_id);

        if (VAR_2) {
            VAR_7 = &VAR_2->display_list;
            VAR_6 = *VAR_7;

            while (VAR_6 && VAR_6 != VAR_5) {
                VAR_7 = &VAR_6->object_list_next;
                VAR_6 = *VAR_7;
            }

            if (VAR_6) {
                *VAR_7 = VAR_6->object_list_next;

                if (!VAR_2->display_list) {
                    VAR_4 = &VAR_0->object_list;
                    VAR_3 = *VAR_4;

                    while (VAR_3 != VAR_2) {
                        FUNC_0(VAR_3);
                        VAR_4 = &VAR_3->next;
                        VAR_3 = *VAR_4;
                    }

                    *VAR_4 = VAR_3->next;

                    FUNC_1(&VAR_3);
                }
            }
        }

        VAR_1->display_list = VAR_5->region_list_next;

        FUNC_1(&VAR_5);
    }

}
