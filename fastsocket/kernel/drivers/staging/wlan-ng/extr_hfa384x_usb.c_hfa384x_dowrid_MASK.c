
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int usbctlx_wrid_completor_t ;
typedef int u16 ;
struct TYPE_11__ {int wridresp; } ;
struct TYPE_9__ {int data; void* rid; void* frmlen; void* type; } ;
struct TYPE_10__ {TYPE_1__ wridreq; } ;
struct TYPE_12__ {int outbufsize; TYPE_3__ inbuf; void* usercb_data; int usercb; int cmdcb; scalar_t__ reapable; TYPE_2__ outbuf; } ;
typedef TYPE_4__ hfa384x_usbctlx_t ;
typedef int hfa384x_t ;
typedef int hfa384x_cmdresult_t ;
typedef int ctlx_usercb_t ;
typedef int ctlx_cmdcb_t ;
typedef scalar_t__ CMD_MODE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,void*,unsigned int) ;
 TYPE_4__* FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(hfa384x_t *VAR_3,
        CMD_MODE VAR_4,
        u16 VAR_5,
        void *VAR_6,
        unsigned int VAR_7,
        ctlx_cmdcb_t VAR_8, ctlx_usercb_t VAR_9, void *VAR_10)
{
 int VAR_11;
 hfa384x_usbctlx_t *VAR_12;

 VAR_12 = FUNC_6();
 if (VAR_12 == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto done;
 }


 VAR_12->outbuf.wridreq.type = FUNC_0(VAR_2);
 VAR_12->outbuf.wridreq.frmlen = FUNC_0((sizeof
         (VAR_12->outbuf.wridreq.rid) +
         VAR_7 + 1) / 2);
 VAR_12->outbuf.wridreq.rid = FUNC_0(VAR_5);
 FUNC_5(VAR_12->outbuf.wridreq.data, VAR_6, VAR_7);

 VAR_12->outbufsize = sizeof(VAR_12->outbuf.wridreq.type) +
     sizeof(VAR_12->outbuf.wridreq.frmlen) +
     sizeof(VAR_12->outbuf.wridreq.rid) + VAR_7;

 VAR_12->reapable = VAR_4;
 VAR_12->cmdcb = VAR_8;
 VAR_12->usercb = VAR_9;
 VAR_12->usercb_data = VAR_10;


 VAR_11 = FUNC_2(VAR_3, VAR_12);
 if (VAR_11 != 0) {
  FUNC_4(VAR_12);
 } else if (VAR_4 == VAR_0) {
  usbctlx_wrid_completor_t VAR_13;
  hfa384x_cmdresult_t VAR_14;

  VAR_11 = FUNC_1(VAR_3,
             VAR_12,
             FUNC_3
             (&VAR_13,
       &VAR_12->inbuf.wridresp,
       &VAR_14));
 }

done:
 return VAR_11;
}
