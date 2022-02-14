
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct gfs2_rbm {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct gfs2_rbm*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct gfs2_rbm*) ;
 scalar_t__ FUNC_2 (struct gfs2_rbm*) ;

__attribute__((used)) static bool FUNC_3(struct gfs2_rbm *VAR_1, u32 VAR_2, u32 *VAR_3)
{
 u64 VAR_4;
 u32 VAR_5;
 u8 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_2(VAR_1);
  if (VAR_6 != VAR_0)
   return 1;
  (*VAR_3)--;
  if (*VAR_3 == 0)
   return 1;
  VAR_4 = FUNC_1(VAR_1);
  if (FUNC_0(VAR_1, VAR_4 + 1))
   return 1;
 }

 return 0;
}
