
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MPT3SAS_ADAPTER {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct MPT3SAS_ADAPTER *VAR_2, u32 VAR_3, int VAR_4,
 int VAR_5)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8;

 VAR_6 = 0;
 VAR_7 = (VAR_5 == VAR_0) ? 1000*VAR_4 : 2000*VAR_4;
 do {
  VAR_8 = FUNC_0(VAR_2, 1);
  if (VAR_8 == VAR_3)
   return 0;
  if (VAR_6 && VAR_8 == VAR_1)
   break;
  if (VAR_5 == VAR_0)
   FUNC_2(1000, 1500);
  else
   FUNC_1(500);
  VAR_6++;
 } while (--VAR_7);

 return VAR_8;
}
