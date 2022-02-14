
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ctlr_info {int dummy; } ;
struct ReportLUNdata {int ** LUN; } ;


 int FUNC_0 () ;
 int * VAR_0 ;

u8 *FUNC_1(struct ctlr_info *VAR_1, int VAR_2, int VAR_3,
 int VAR_4, int VAR_5, struct ReportLUNdata *VAR_6,
 struct ReportLUNdata *VAR_7)
{





 int VAR_8 = VAR_4 + (VAR_2 == 0);
 int VAR_9 = VAR_4 + VAR_5 + (VAR_2 == 0);

 if (VAR_3 == VAR_2)
  return VAR_0;

 if (VAR_3 < VAR_8)
  return &VAR_6->LUN[VAR_3 - (VAR_2 == 0)][0];

 if (VAR_3 < VAR_9)
  return &VAR_7->LUN[VAR_3 - VAR_4 -
   (VAR_2 == 0)][0];
 FUNC_0();
 return ((void*)0);
}
