
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** l; } ;
struct TYPE_6__ {int format; TYPE_1__ data; int window; void* message_type; int send_event; int type; } ;
struct TYPE_7__ {TYPE_2__ xclient; int member_0; } ;
typedef TYPE_3__ XEvent ;
typedef int Window ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ,int ,int,TYPE_3__*) ;
 void* VAR_7 ;

void FUNC_3(Display *VAR_8, Window VAR_9)
{
   XEvent VAR_10 = {0};

   VAR_5 = FUNC_1(VAR_8, "_NET_WM_STATE", VAR_1);
   VAR_6 = FUNC_1(VAR_8, "_NET_WM_STATE_FULLSCREEN", VAR_1);

   VAR_10.xclient.type = VAR_0;
   VAR_10.xclient.send_event = VAR_4;
   VAR_10.xclient.message_type = VAR_5;
   VAR_10.xclient.window = VAR_9;
   VAR_10.xclient.format = 32;
   VAR_10.xclient.data.l[0] = VAR_7;
   VAR_10.xclient.data.l[1] = VAR_6;

   FUNC_2(VAR_8, FUNC_0(VAR_8), VAR_1,
         VAR_3 | VAR_2,
         &VAR_10);
}
