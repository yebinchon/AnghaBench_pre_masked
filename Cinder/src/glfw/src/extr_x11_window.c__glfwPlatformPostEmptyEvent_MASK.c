
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int event ;
struct TYPE_9__ {int handle; } ;
struct TYPE_12__ {TYPE_1__ x11; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_11__ {int format; int message_type; int window; } ;
struct TYPE_13__ {TYPE_3__ xclient; int type; } ;
typedef TYPE_5__ XEvent ;
struct TYPE_10__ {int display; int NULL_; } ;
struct TYPE_14__ {TYPE_2__ x11; TYPE_4__* windowListHead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_5__*) ;
 TYPE_7__ VAR_2 ;
 int FUNC_2 (TYPE_5__*,int ,int) ;

void FUNC_3(void)
{
    XEvent VAR_3;
    _GLFWwindow* VAR_4 = VAR_2.windowListHead;

    FUNC_2(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.type = VAR_0;
    VAR_3.xclient.window = VAR_4->x11.handle;
    VAR_3.xclient.format = 32;
    VAR_3.xclient.message_type = VAR_2.x11.NULL_;

    FUNC_1(VAR_2.x11.display, VAR_4->x11.handle, VAR_1, 0, &VAR_3);
    FUNC_0(VAR_2.x11.display);
}
