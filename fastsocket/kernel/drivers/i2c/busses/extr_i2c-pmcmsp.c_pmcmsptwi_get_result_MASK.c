
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum pmcmsptwi_xfer_result { ____Placeholder_pmcmsptwi_xfer_result } pmcmsptwi_xfer_result ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static enum pmcmsptwi_xfer_result FUNC_1(u32 VAR_10)
{
 if (VAR_10 & VAR_2) {
  FUNC_0(&VAR_9.dev,
   "Result: Lost arbitration\n");
  return VAR_6;
 } else if (VAR_10 & VAR_3) {
  FUNC_0(&VAR_9.dev,
   "Result: No response\n");
  return VAR_7;
 } else if (VAR_10 & VAR_1) {
  FUNC_0(&VAR_9.dev,
   "Result: Data collision\n");
  return VAR_5;
 } else if (VAR_10 & VAR_0) {
  FUNC_0(&VAR_9.dev,
   "Result: Bus busy\n");
  return VAR_4;
 }

 FUNC_0(&VAR_9.dev, "Result: Operation succeeded\n");
 return VAR_8;
}
