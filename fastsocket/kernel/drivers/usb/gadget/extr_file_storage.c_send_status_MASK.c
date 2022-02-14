
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u32 ;
struct lun {scalar_t__ sense_data; scalar_t__ sense_data_info; } ;
struct interrupt_data {void* bValue; scalar_t__ bType; void* Status; void* Residue; int Tag; void* Signature; } ;
struct fsg_dev {struct fsg_buffhd* next_buffhd_to_fill; int intreq_busy; TYPE_1__* intreq; int intr_in; struct fsg_buffhd* intr_buffhd; int bulk_in; int residue; int tag; scalar_t__ phase_error; scalar_t__ bad_lun_okay; struct lun* curlun; } ;
struct fsg_buffhd {scalar_t__ state; struct fsg_buffhd* next; TYPE_1__* inreq; struct interrupt_data* buf; int inreq_busy; } ;
struct bulk_cs_wrap {void* bValue; scalar_t__ bType; void* Status; void* Residue; int Tag; void* Signature; } ;
struct TYPE_4__ {scalar_t__ transport_type; scalar_t__ protocol_type; } ;
struct TYPE_3__ {struct fsg_buffhd* context; int buf; int length; scalar_t__ zero; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct fsg_dev*,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_4 (struct fsg_dev*,char*,int ,scalar_t__,void*,scalar_t__) ;
 void* FUNC_5 (int ) ;
 TYPE_2__ VAR_12 ;
 int FUNC_6 (struct fsg_dev*) ;
 int FUNC_7 (struct fsg_dev*,int ,TYPE_1__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct fsg_dev *VAR_13)
{
 struct lun *VAR_14 = VAR_13->curlun;
 struct fsg_buffhd *VAR_15;
 int VAR_16;
 u8 VAR_17 = VAR_10;
 u32 VAR_18, VAR_19 = 0;


 VAR_15 = VAR_13->next_buffhd_to_fill;
 while (VAR_15->state != VAR_0) {
  VAR_16 = FUNC_6(VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_14) {
  VAR_18 = VAR_14->sense_data;
  VAR_19 = VAR_14->sense_data_info;
 } else if (VAR_13->bad_lun_okay)
  VAR_18 = VAR_4;
 else
  VAR_18 = VAR_3;

 if (VAR_13->phase_error) {
  FUNC_2(VAR_13, "sending phase-error status\n");
  VAR_17 = VAR_11;
  VAR_18 = VAR_2;
 } else if (VAR_18 != VAR_4) {
  FUNC_2(VAR_13, "sending command-failure status\n");
  VAR_17 = VAR_9;
  FUNC_4(VAR_13, "  sense data: SK x%02x, ASC x%02x, ASCQ x%02x;"
    "  info x%x\n",
    FUNC_3(VAR_18), FUNC_0(VAR_18), FUNC_1(VAR_18), VAR_19);
 }

 if (FUNC_8()) {
  struct bulk_cs_wrap *VAR_20 = VAR_15->buf;


  VAR_20->Signature = FUNC_5(VAR_5);
  VAR_20->Tag = VAR_13->tag;
  VAR_20->Residue = FUNC_5(VAR_13->residue);
  VAR_20->Status = VAR_17;

  VAR_15->inreq->length = VAR_6;
  VAR_15->inreq->zero = 0;
  FUNC_7(VAR_13, VAR_13->bulk_in, VAR_15->inreq,
    &VAR_15->inreq_busy, &VAR_15->state);

 } else if (VAR_12.transport_type == VAR_7) {


  return 0;

 } else {
  struct interrupt_data *VAR_21 = VAR_15->buf;




  if (VAR_12.protocol_type == VAR_8) {
   VAR_21->bType = FUNC_0(VAR_18);
   VAR_21->bValue = FUNC_1(VAR_18);
  } else {
   VAR_21->bType = 0;
   VAR_21->bValue = VAR_17;
  }
  VAR_13->intreq->length = VAR_1;

  VAR_13->intr_buffhd = VAR_15;
  VAR_13->intreq->buf = VAR_15->inreq->buf;
  VAR_13->intreq->context = VAR_15;
  FUNC_7(VAR_13, VAR_13->intr_in, VAR_13->intreq,
    &VAR_13->intreq_busy, &VAR_15->state);
 }

 VAR_13->next_buffhd_to_fill = VAR_15->next;
 return 0;
}
