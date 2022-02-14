
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cmdresp; } ;
struct TYPE_9__ {scalar_t__ state; int usercb_data; int (* usercb ) (int *,TYPE_3__*,int ) ;TYPE_1__ inbuf; } ;
typedef TYPE_2__ hfa384x_usbctlx_t ;
typedef int hfa384x_t ;
struct TYPE_10__ {int status; } ;
typedef TYPE_3__ hfa384x_cmdresult_t ;
typedef int cmdresult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(hfa384x_t *VAR_2, const hfa384x_usbctlx_t *VAR_3)
{
 if (VAR_3->usercb != ((void*)0)) {
  hfa384x_cmdresult_t VAR_4;

  if (VAR_3->state != VAR_0) {
   FUNC_1(&VAR_4, 0, sizeof(VAR_4));
   VAR_4.status =
       FUNC_0(VAR_1);
  } else {
   FUNC_3(&VAR_3->inbuf.cmdresp, &VAR_4);
  }

  VAR_3->usercb(VAR_2, &VAR_4, VAR_3->usercb_data);
 }
}
