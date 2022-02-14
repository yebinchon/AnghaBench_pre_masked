
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int reply ;
struct TYPE_12__ {int requestor; int time; int target; int selection; int display; } ;
typedef TYPE_3__ XSelectionRequestEvent ;
struct TYPE_10__ {int time; int target; int selection; int requestor; int display; int type; int property; } ;
struct TYPE_13__ {TYPE_1__ xselection; TYPE_3__ xselectionrequest; } ;
typedef TYPE_4__ XEvent ;
struct TYPE_11__ {int display; } ;
struct TYPE_14__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_4__*) ;
 TYPE_8__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_3__ const*) ;

__attribute__((used)) static void FUNC_3(XEvent* VAR_3)
{
    const XSelectionRequestEvent* VAR_4 = &VAR_3->xselectionrequest;

    XEvent VAR_5;
    FUNC_1(&VAR_5, 0, sizeof(VAR_5));

    VAR_5.xselection.property = FUNC_2(VAR_4);
    VAR_5.xselection.type = VAR_1;
    VAR_5.xselection.display = VAR_4->display;
    VAR_5.xselection.requestor = VAR_4->requestor;
    VAR_5.xselection.selection = VAR_4->selection;
    VAR_5.xselection.target = VAR_4->target;
    VAR_5.xselection.time = VAR_4->time;

    FUNC_0(VAR_2.x11.display, VAR_4->requestor, VAR_0, 0, &VAR_5);
}
