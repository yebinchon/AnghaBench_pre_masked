
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct qla_hw_data {int curr_window; int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,char*,int ,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static inline unsigned long
FUNC_3(struct qla_hw_data *VAR_8, u64 VAR_9)
{
 scsi_qla_host_t *VAR_10 = FUNC_1(VAR_8->pdev);

 if ((VAR_9 >= VAR_3) && (VAR_9 < VAR_1)) {



  return VAR_9;
 }

 if ((VAR_9 >= VAR_3) && (VAR_9 < VAR_4)) {

  if (VAR_8->curr_window != 0)
   FUNC_0(1);
  return VAR_9;
 }

 if ((VAR_9 > VAR_4) && (VAR_9 < VAR_2)) {

  VAR_9 = VAR_9 - VAR_4 + VAR_3;

  if (VAR_8->curr_window != 1)
   return VAR_9;




  if ((VAR_9 >= VAR_6) &&
   (VAR_9 < VAR_5))
   return VAR_9;
 }

 FUNC_2(VAR_7, VAR_10, 0xb001,
     "%s: Warning: unm_nic_pci_set_crbwindow "
     "called with an unknown address(%llx).\n",
     VAR_0, VAR_9);
 return VAR_9;
}
