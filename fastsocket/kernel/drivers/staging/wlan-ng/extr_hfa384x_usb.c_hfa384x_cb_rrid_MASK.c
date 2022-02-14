
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int rridresult ;
struct TYPE_10__ {int rridresp; } ;
struct TYPE_11__ {int rid; } ;
struct TYPE_12__ {TYPE_2__ rridreq; } ;
struct TYPE_13__ {scalar_t__ state; int usercb_data; int (* usercb ) (int *,TYPE_5__*,int ) ;TYPE_1__ inbuf; TYPE_3__ outbuf; } ;
typedef TYPE_4__ hfa384x_usbctlx_t ;
typedef int hfa384x_t ;
struct TYPE_14__ {int rid; } ;
typedef TYPE_5__ hfa384x_rridresult_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (int *,TYPE_5__*,int ) ;
 int FUNC_3 (int *,TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(hfa384x_t *VAR_1, const hfa384x_usbctlx_t *VAR_2)
{
 if (VAR_2->usercb != ((void*)0)) {
  hfa384x_rridresult_t VAR_3;

  if (VAR_2->state != VAR_0) {
   FUNC_1(&VAR_3, 0, sizeof(VAR_3));
   VAR_3.rid = FUNC_0(VAR_2->outbuf.rridreq.rid);
  } else {
   FUNC_3(&VAR_2->inbuf.rridresp,
            &VAR_3);
  }

  VAR_2->usercb(VAR_1, &VAR_3, VAR_2->usercb_data);
 }
}
