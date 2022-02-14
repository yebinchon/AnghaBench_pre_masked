
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeh_early_enable_info {int buid_lo; int buid_hi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int,int,unsigned int*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_1 (int VAR_3,
                        struct eeh_early_enable_info *VAR_4)
{
 unsigned int VAR_5[3];
 int VAR_6;


 if (VAR_2 != VAR_0) {

  VAR_6 = FUNC_0 (VAR_2, 4, 2, VAR_5,
   VAR_3, VAR_4->buid_hi, VAR_4->buid_lo, 1);
  if (VAR_6 || (VAR_5[0]==0))
   return 0;

  VAR_6 = FUNC_0 (VAR_2, 4, 2, VAR_5,
   VAR_3, VAR_4->buid_hi, VAR_4->buid_lo, 0);
  if (VAR_6)
   return 0;
  return VAR_5[0];
 }


 if (VAR_1 != VAR_0) {
  VAR_6 = FUNC_0 (VAR_1, 4, 2, VAR_5,
   VAR_3, VAR_4->buid_hi, VAR_4->buid_lo, 0);
  if (VAR_6)
   return 0;
  return VAR_5[0];
 }
 return 0;
}
