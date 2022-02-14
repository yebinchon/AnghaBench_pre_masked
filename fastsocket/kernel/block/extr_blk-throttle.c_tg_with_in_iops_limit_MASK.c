
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct throtl_grp {unsigned long* slice_start; int* iops; int* io_disp; } ;
struct throtl_data {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (unsigned long,int) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 unsigned long VAR_3 ;

__attribute__((used)) static bool FUNC_3(struct throtl_data *VAR_4, struct throtl_grp *VAR_5,
  struct bio *VAR_6, unsigned long *VAR_7)
{
 bool VAR_8 = FUNC_0(VAR_6);
 unsigned int VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12;
 u64 VAR_13;

 VAR_10 = VAR_12 = VAR_2 - VAR_5->slice_start[VAR_8];


 if (!VAR_10)
  VAR_12 = VAR_3;

 VAR_12 = FUNC_2(VAR_12, VAR_3);
 VAR_13 = (u64)VAR_5->iops[VAR_8] * VAR_12;
 FUNC_1(VAR_13, VAR_0);

 if (VAR_13 > VAR_1)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_13;

 if (VAR_5->io_disp[VAR_8] + 1 <= VAR_9) {
  if (VAR_7)
   *VAR_7 = 0;
  return 1;
 }


 VAR_11 = ((VAR_5->io_disp[VAR_8] + 1) * VAR_0)/VAR_5->iops[VAR_8] + 1;

 if (VAR_11 > VAR_10)
  VAR_11 = VAR_11 - VAR_10;
 else
  VAR_11 = 1;

 if (VAR_7)
  *VAR_7 = VAR_11;
 return 0;
}
