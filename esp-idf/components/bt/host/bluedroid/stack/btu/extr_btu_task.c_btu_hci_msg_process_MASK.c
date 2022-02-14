
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int uint16_t ;
struct TYPE_15__ {int (* callback ) (TYPE_3__*) ;} ;
typedef TYPE_2__ post_to_task_hack_t ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_16__ {int event; int * data; } ;
struct TYPE_14__ {int (* event_cb ) (TYPE_3__*) ;int event_range; } ;
struct TYPE_13__ {TYPE_1__* event_reg; } ;
typedef TYPE_3__ BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;

 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_11__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_9(void *VAR_6)
{

    BT_HDR *VAR_7 = (BT_HDR *)VAR_6;

    switch (VAR_7->event & VAR_1) {
    case 133:
      {
        post_to_task_hack_t *VAR_8 = (post_to_task_hack_t *) &VAR_7->data[0];
        VAR_8->callback(VAR_7);
        break;
      }
    case 132:

        FUNC_5 (VAR_7);
        break;

    case 128:

        FUNC_4 (VAR_7);
        break;

    case 129:

        FUNC_0 (VAR_7);
        FUNC_6(VAR_7);
        break;


    case 130:
        FUNC_2 ((UINT8)(VAR_7->event & VAR_2), VAR_7);
        FUNC_6(VAR_7);






        break;

    case 131:
        FUNC_3 ((UINT8)(VAR_7->event & VAR_2), VAR_7);
        break;

    default:;
        int VAR_9 = 0;
        uint16_t VAR_10 = (UINT16) (VAR_7->event & VAR_1);
        BOOLEAN VAR_11 = VAR_3;

        for (; !VAR_11 && VAR_9 < VAR_0; VAR_9++) {
            if (VAR_5.event_reg[VAR_9].event_cb == ((void*)0)) {
                continue;
            }

            if (VAR_10 == VAR_5.event_reg[VAR_9].event_range) {
                if (VAR_5.event_reg[VAR_9].event_cb) {
                    VAR_5.event_reg[VAR_9].event_cb(VAR_7);
                    VAR_11 = VAR_4;
                }
            }
        }

        if (VAR_11 == VAR_3) {
            FUNC_6 (VAR_7);
        }

        break;
    }

}
