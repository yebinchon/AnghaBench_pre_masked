
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int usbctlx_wmem_completor_t ;
typedef int u16 ;
struct TYPE_11__ {int wmemresp; } ;
struct TYPE_9__ {int data; void* page; void* offset; void* frmlen; void* type; } ;
struct TYPE_10__ {TYPE_1__ wmemreq; } ;
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
 int FUNC_6 (char*,int,int,unsigned int) ;
 TYPE_4__* FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(hfa384x_t *VAR_3,
        CMD_MODE VAR_4,
        u16 VAR_5,
        u16 VAR_6,
        void *VAR_7,
        unsigned int VAR_8,
        ctlx_cmdcb_t VAR_9, ctlx_usercb_t VAR_10, void *VAR_11)
{
 int VAR_12;
 hfa384x_usbctlx_t *VAR_13;

 FUNC_6("page=0x%04x offset=0x%04x len=%d\n", VAR_5, VAR_6, VAR_8);

 VAR_13 = FUNC_7();
 if (VAR_13 == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto done;
 }


 VAR_13->outbuf.wmemreq.type = FUNC_0(VAR_2);
 VAR_13->outbuf.wmemreq.frmlen =
     FUNC_0(sizeof(VAR_13->outbuf.wmemreq.offset) +
   sizeof(VAR_13->outbuf.wmemreq.page) + VAR_8);
 VAR_13->outbuf.wmemreq.offset = FUNC_0(VAR_6);
 VAR_13->outbuf.wmemreq.page = FUNC_0(VAR_5);
 FUNC_5(VAR_13->outbuf.wmemreq.data, VAR_7, VAR_8);

 VAR_13->outbufsize = sizeof(VAR_13->outbuf.wmemreq.type) +
     sizeof(VAR_13->outbuf.wmemreq.frmlen) +
     sizeof(VAR_13->outbuf.wmemreq.offset) +
     sizeof(VAR_13->outbuf.wmemreq.page) + VAR_8;

 VAR_13->reapable = VAR_4;
 VAR_13->cmdcb = VAR_9;
 VAR_13->usercb = VAR_10;
 VAR_13->usercb_data = VAR_11;

 VAR_12 = FUNC_2(VAR_3, VAR_13);
 if (VAR_12 != 0) {
  FUNC_4(VAR_13);
 } else if (VAR_4 == VAR_0) {
  usbctlx_wmem_completor_t VAR_14;
  hfa384x_cmdresult_t VAR_15;

  VAR_12 = FUNC_1(VAR_3,
             VAR_13,
             FUNC_3
             (&VAR_14,
       &VAR_13->inbuf.wmemresp,
       &VAR_15));
 }

done:
 return VAR_12;
}
