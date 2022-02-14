
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _usb_p {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int pbcallback ;
struct TYPE_3__ {int openstate; int fd; int vid; int pid; int acl_out; int acl_in; int hci_evt; int hci_ctrl; int unregcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static s32 FUNC_5(pbcallback VAR_11)
{
 s32 VAR_12 = 0;

 FUNC_4(&VAR_7,0,sizeof(struct _usb_p));
 VAR_7.openstate = 5;

 VAR_12 = FUNC_1();
 if(VAR_12<0) return VAR_12;

 VAR_12 = FUNC_0();
 if(VAR_12<0) return VAR_12;

 VAR_7.fd = -1;
 VAR_7.unregcb = VAR_11;
 if(VAR_6) {
  VAR_7.vid = VAR_5;
  VAR_7.pid = VAR_4;
 } else {
  VAR_7.vid = 0x057E;
  VAR_7.pid = 0x0305;
 }

 VAR_12 = FUNC_2(VAR_7.vid,VAR_7.pid);
 if(VAR_12<0) return VAR_12;

 VAR_7.acl_out = 0x02;
 VAR_7.acl_in = 0x82;
 VAR_7.hci_evt = 0x81;
 VAR_7.hci_ctrl = 0x00;

 FUNC_3(&VAR_10,VAR_1,VAR_3);
 FUNC_3(&VAR_9,VAR_0,VAR_2);

 VAR_7.openstate = 4;
 VAR_8 = 1;

 return VAR_12;
}
