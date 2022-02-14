
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ushort ;
typedef int uchar ;
struct TYPE_11__ {int next_vpa; int areq_vpa; } ;
struct TYPE_10__ {scalar_t__ chip_type; scalar_t__ carr_pending_cnt; TYPE_3__* carr_freelist; TYPE_3__* irq_sp; int iop_base; } ;
struct TYPE_9__ {long data_cnt; int a_flag; scalar_t__ cntl; int target_id; scalar_t__ scsi_status; scalar_t__ host_status; int done_status; } ;
typedef int AdvPortAddr ;
typedef int ADV_VADDR ;
typedef TYPE_1__ ADV_SCSI_REQ_Q ;
typedef TYPE_2__ ADV_DVC_VAR ;
typedef TYPE_3__ ADV_CARR_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(ADV_DVC_VAR *VAR_17)
{
 AdvPortAddr VAR_18;
 uchar VAR_19;
 ushort VAR_20;
 ADV_CARR_T *VAR_21;
 ADV_VADDR VAR_22;
 ADV_SCSI_REQ_Q *VAR_23;

 VAR_18 = VAR_17->iop_base;


 VAR_19 = FUNC_5(VAR_18, VAR_14);

 if ((VAR_19 & (VAR_4 | VAR_5 |
    VAR_6)) == 0) {
  return VAR_3;
 }






 if (VAR_19 & VAR_5) {
  uchar VAR_24;

  FUNC_4(VAR_18, VAR_11, VAR_24);

  if (VAR_17->chip_type == VAR_1 ||
      VAR_17->chip_type == VAR_2) {
   if (VAR_24 == VAR_0 &&
       VAR_17->carr_pending_cnt != 0) {
    FUNC_6(VAR_18, VAR_15,
           VAR_8);
    if (VAR_17->chip_type == VAR_1) {
     FUNC_6(VAR_18,
            VAR_15,
            VAR_9);
    }
   }
  }

  FUNC_7(VAR_17, VAR_24);
 }




 while (((VAR_22 =
   FUNC_10(VAR_17->irq_sp->next_vpa)) & VAR_12) != 0) {
  VAR_23 = (ADV_SCSI_REQ_Q *)
      FUNC_1(FUNC_10(VAR_17->irq_sp->areq_vpa));






  if ((VAR_22 & VAR_13) != 0) {
   VAR_23->done_status = VAR_16;
   VAR_23->host_status = VAR_23->scsi_status = 0;
   VAR_23->data_cnt = 0L;
  }






  VAR_21 = VAR_17->irq_sp;
  VAR_17->irq_sp = (ADV_CARR_T *)
      FUNC_1(FUNC_3(VAR_22));

  VAR_21->next_vpa =
      FUNC_9(FUNC_2(VAR_17->carr_freelist));
  VAR_17->carr_freelist = VAR_21;
  VAR_17->carr_pending_cnt--;

  VAR_20 = FUNC_0(VAR_23->target_id);




  VAR_23->cntl = 0;





  VAR_23->a_flag |= VAR_7;
  FUNC_8(VAR_17, VAR_23);







 }
 return VAR_10;
}
