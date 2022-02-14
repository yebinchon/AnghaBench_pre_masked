
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* l; } ;
struct TYPE_6__ {int format; TYPE_1__ data; int window; int message_type; int send_event; int type; } ;
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ,int ,int,TYPE_3__*) ;

void FUNC_3(Display *VAR_8, Window VAR_9, int VAR_10, int VAR_11,
      unsigned VAR_12, unsigned VAR_13)
{
   XEvent VAR_14 = {0};

   VAR_7 = FUNC_1(VAR_8,
     "_NET_MOVERESIZE_WINDOW", VAR_1);

   VAR_14.xclient.type = VAR_0;
   VAR_14.xclient.send_event = VAR_6;
   VAR_14.xclient.message_type = VAR_7;
   VAR_14.xclient.window = VAR_9;
   VAR_14.xclient.format = 32;
   VAR_14.xclient.data.l[0] = (1 << VAR_2)
      | (1 << VAR_3);
   VAR_14.xclient.data.l[1] = VAR_10;
   VAR_14.xclient.data.l[2] = VAR_11;

   FUNC_2(VAR_8, FUNC_0(VAR_8), VAR_1,
         VAR_5 | VAR_4,
         &VAR_14);
}
