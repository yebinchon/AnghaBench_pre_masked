
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int event ;
struct TYPE_11__ {int handle; } ;
struct TYPE_15__ {TYPE_1__ x11; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_12__ {long* l; } ;
struct TYPE_13__ {int format; TYPE_2__ data; int message_type; int window; } ;
struct TYPE_16__ {TYPE_3__ xclient; int type; } ;
typedef TYPE_6__ XEvent ;
struct TYPE_14__ {int root; int display; } ;
struct TYPE_17__ {TYPE_4__ x11; } ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,TYPE_6__*) ;
 TYPE_9__ VAR_4 ;
 int FUNC_1 (TYPE_6__*,int ,int) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_5, Atom VAR_6,
                          long VAR_7, long VAR_8, long VAR_9, long VAR_10, long VAR_11)
{
    XEvent VAR_12;
    FUNC_1(&VAR_12, 0, sizeof(VAR_12));

    VAR_12.type = VAR_0;
    VAR_12.xclient.window = VAR_5->x11.handle;
    VAR_12.xclient.format = 32;
    VAR_12.xclient.message_type = VAR_6;
    VAR_12.xclient.data.l[0] = VAR_7;
    VAR_12.xclient.data.l[1] = VAR_8;
    VAR_12.xclient.data.l[2] = VAR_9;
    VAR_12.xclient.data.l[3] = VAR_10;
    VAR_12.xclient.data.l[4] = VAR_11;

    FUNC_0(VAR_4.x11.display, VAR_4.x11.root,
               VAR_1,
               VAR_2 | VAR_3,
               &VAR_12);
}
