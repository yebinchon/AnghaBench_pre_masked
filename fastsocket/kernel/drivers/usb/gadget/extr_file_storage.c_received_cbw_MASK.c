
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {scalar_t__ actual; scalar_t__ status; struct bulk_cb_wrap* buf; } ;
struct fsg_dev {scalar_t__ cmnd_size; scalar_t__ lun; int tag; int data_dir; int data_size; int cmnd; int bulk_out; int atomic_bitflags; } ;
struct fsg_buffhd {struct usb_request* outreq; } ;
struct bulk_cb_wrap {scalar_t__ Signature; scalar_t__ Lun; int Flags; scalar_t__ Length; scalar_t__ DataTransferLength; int Tag; int CDB; } ;
struct TYPE_2__ {scalar_t__ can_stall; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsg_dev*,char*,scalar_t__,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct fsg_dev*,int ) ;
 int FUNC_3 (struct fsg_dev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 TYPE_1__ VAR_10 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct fsg_dev*) ;

__attribute__((used)) static int FUNC_9(struct fsg_dev *VAR_11, struct fsg_buffhd *VAR_12)
{
 struct usb_request *VAR_13 = VAR_12->outreq;
 struct bulk_cb_wrap *VAR_14 = VAR_13->buf;


 if (VAR_13->status || FUNC_7(VAR_4, &VAR_11->atomic_bitflags))
  return -VAR_3;


 if (VAR_13->actual != VAR_8 ||
   VAR_14->Signature != FUNC_1(
    VAR_7)) {
  FUNC_0(VAR_11, "invalid CBW: len %u sig 0x%x\n",
    VAR_13->actual,
    FUNC_4(VAR_14->Signature));
  FUNC_8(VAR_11);
  FUNC_6(VAR_4, &VAR_11->atomic_bitflags);
  return -VAR_3;
 }


 if (VAR_14->Lun >= VAR_6 || VAR_14->Flags & ~VAR_9 ||
   VAR_14->Length <= 0 || VAR_14->Length > VAR_5) {
  FUNC_0(VAR_11, "non-meaningful CBW: lun = %u, flags = 0x%x, "
    "cmdlen %u\n",
    VAR_14->Lun, VAR_14->Flags, VAR_14->Length);



  if (VAR_10.can_stall) {
   FUNC_2(VAR_11, VAR_11->bulk_out);
   FUNC_3(VAR_11);
  }
  return -VAR_3;
 }


 VAR_11->cmnd_size = VAR_14->Length;
 FUNC_5(VAR_11->cmnd, VAR_14->CDB, VAR_11->cmnd_size);
 if (VAR_14->Flags & VAR_9)
  VAR_11->data_dir = VAR_2;
 else
  VAR_11->data_dir = VAR_0;
 VAR_11->data_size = FUNC_4(VAR_14->DataTransferLength);
 if (VAR_11->data_size == 0)
  VAR_11->data_dir = VAR_1;
 VAR_11->lun = VAR_14->Lun;
 VAR_11->tag = VAR_14->Tag;
 return 0;
}
