
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ chip_type; TYPE_1__* icq_sp; int carr_pending_cnt; TYPE_1__* carr_freelist; int iop_base; } ;
struct TYPE_8__ {scalar_t__ target_id; int scsiq_rptr; int areq_vpa; void* carr_pa; void* next_vpa; void* carr_va; void* scsiq_ptr; int a_flag; int done_status; int host_status; } ;
typedef int AdvPortAddr ;
typedef TYPE_1__ ADV_SCSI_REQ_Q ;
typedef int ADV_PADDR ;
typedef TYPE_2__ ADV_DVC_VAR ;
typedef TYPE_1__ ADV_CARR_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(ADV_DVC_VAR *VAR_15, ADV_SCSI_REQ_Q *VAR_16)
{
 AdvPortAddr VAR_17;
 ADV_PADDR VAR_18;
 ADV_CARR_T *VAR_19;




 if (VAR_16->target_id > VAR_5) {
  VAR_16->host_status = VAR_14;
  VAR_16->done_status = VAR_13;
  return VAR_4;
 }

 VAR_17 = VAR_15->iop_base;





 if ((VAR_19 = VAR_15->carr_freelist) == ((void*)0)) {
  return VAR_0;
 }
 VAR_15->carr_freelist = (ADV_CARR_T *)
     FUNC_0(FUNC_6(VAR_19->next_vpa));
 VAR_15->carr_pending_cnt++;






 VAR_19->next_vpa = FUNC_5(VAR_10);




 VAR_16->a_flag &= ~VAR_6;

 VAR_18 = FUNC_7(VAR_16);
 FUNC_4(VAR_18 & 31);

 VAR_18 = FUNC_5(VAR_18);


 VAR_16->scsiq_ptr = FUNC_5(FUNC_1(VAR_16));
 VAR_16->scsiq_rptr = VAR_18;

 VAR_16->carr_va = FUNC_5(FUNC_1(VAR_15->icq_sp));




 VAR_16->carr_pa = VAR_15->icq_sp->carr_pa;






 VAR_15->icq_sp->areq_vpa = VAR_18;






 VAR_15->icq_sp->next_vpa = VAR_19->carr_pa;




 VAR_15->icq_sp = VAR_19;

 if (VAR_15->chip_type == VAR_1 ||
     VAR_15->chip_type == VAR_2) {



  FUNC_2(VAR_17, VAR_11, VAR_8);
  if (VAR_15->chip_type == VAR_1) {





   FUNC_2(VAR_17, VAR_11,
          VAR_9);
  }
 } else if (VAR_15->chip_type == VAR_3) {




  FUNC_3(VAR_17, VAR_12,
          FUNC_6(VAR_19->carr_pa));
 }

 return VAR_7;
}
