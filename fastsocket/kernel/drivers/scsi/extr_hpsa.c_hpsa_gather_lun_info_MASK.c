
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ctlr_info {TYPE_1__* pdev; } ;
struct ReportLUNdata {scalar_t__ LUNListLength; } ;
typedef int __be32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int,int) ;
 scalar_t__ FUNC_3 (struct ctlr_info*,struct ReportLUNdata*,int) ;
 scalar_t__ FUNC_4 (struct ctlr_info*,struct ReportLUNdata*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct ctlr_info *VAR_2,
 int VAR_3,
 struct ReportLUNdata *VAR_4, u32 *VAR_5,
 struct ReportLUNdata *VAR_6, u32 *VAR_7)
{
 if (FUNC_4(VAR_2, VAR_4, VAR_3, 0)) {
  FUNC_1(&VAR_2->pdev->dev, "report physical LUNs failed.\n");
  return -1;
 }
 *VAR_5 = FUNC_0(*((__be32 *)VAR_4->LUNListLength)) / 8;
 if (*VAR_5 > VAR_1) {
  FUNC_2(&VAR_2->pdev->dev, "maximum physical LUNs (%d) exceeded."
   "  %d LUNs ignored.\n", VAR_1,
   *VAR_5 - VAR_1);
  *VAR_5 = VAR_1;
 }
 if (FUNC_3(VAR_2, VAR_6, VAR_3)) {
  FUNC_1(&VAR_2->pdev->dev, "report logical LUNs failed.\n");
  return -1;
 }
 *VAR_7 = FUNC_0(*((__be32 *) VAR_6->LUNListLength)) / 8;

 if (*VAR_7 > VAR_0) {
  FUNC_2(&VAR_2->pdev->dev,
   "maximum logical LUNs (%d) exceeded.  "
   "%d LUNs ignored.\n", VAR_0,
   *VAR_7 - VAR_0);
   *VAR_7 = VAR_0;
 }
 if (*VAR_7 + *VAR_5 > VAR_1) {
  FUNC_2(&VAR_2->pdev->dev,
   "maximum logical + physical LUNs (%d) exceeded. "
   "%d LUNs ignored.\n", VAR_1,
   *VAR_5 + *VAR_7 - VAR_1);
  *VAR_7 = VAR_1 - *VAR_5;
 }
 return 0;
}
