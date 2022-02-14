
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ quiesce_req; scalar_t__ collect_dump; int status; scalar_t__ (* state_entry ) (struct qlcnic_adapter*) ;} ;
struct qlcnic_hardware_context {scalar_t__ temp; TYPE_2__ idc; scalar_t__ reset_context; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; int state; int flags; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,int) ;
 int FUNC_7 (struct qlcnic_adapter*,int) ;
 int FUNC_8 (struct qlcnic_adapter*,int) ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct qlcnic_adapter*,int ,int) ;
 scalar_t__ FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_14(struct qlcnic_adapter *VAR_8)
{
 u32 VAR_9;
 struct qlcnic_hardware_context *VAR_10 = VAR_8->ahw;
 int VAR_11 = 0;


 if (VAR_10->idc.state_entry(VAR_8))
  return -VAR_0;

 if (FUNC_11(VAR_8)) {
  if (VAR_10->temp == VAR_2) {
   FUNC_4(VAR_8);
   FUNC_2(&VAR_8->pdev->dev,
    "Error: device temperature %d above limits\n",
    VAR_8->ahw->temp);
   FUNC_1(VAR_6, &VAR_10->idc.status);
   FUNC_12(VAR_7, &VAR_8->state);
   FUNC_5(VAR_8);
   FUNC_6(VAR_8, 1);
   return -VAR_0;
  }
 }

 VAR_9 = FUNC_0(VAR_8->ahw, VAR_3);
 VAR_11 = FUNC_3(VAR_8);
 if (VAR_11) {
  VAR_8->flags |= VAR_1;
  if (!(VAR_9 & VAR_4)) {
   FUNC_1(VAR_6, &VAR_10->idc.status);
   FUNC_12(VAR_7, &VAR_8->state);
   FUNC_8(VAR_8, 1);
  }
  return -VAR_0;
 }

 if ((VAR_9 & VAR_5) || VAR_10->idc.collect_dump) {

  FUNC_8(VAR_8, 1);
  return VAR_11;
 }


 if (VAR_10->reset_context &&
     !(VAR_9 & VAR_4)) {
  VAR_8->ahw->reset_context = 0;
  FUNC_9(VAR_8);
  return VAR_11;
 }


 if (VAR_8->ahw->idc.quiesce_req) {
  FUNC_7(VAR_8, 1);
  FUNC_10(VAR_8, 0, 1);
  return VAR_11;
 }

 return VAR_11;
}
