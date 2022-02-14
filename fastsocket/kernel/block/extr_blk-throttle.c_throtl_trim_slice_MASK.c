
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct throtl_grp {unsigned long* slice_start; unsigned long* bps; unsigned long* iops; unsigned long* bytes_disp; unsigned long* io_disp; int * slice_end; } ;
struct throtl_data {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long VAR_2 ;
 int FUNC_2 (struct throtl_data*,struct throtl_grp*,char*,char,unsigned long,unsigned long,unsigned long,unsigned long,int ,unsigned long) ;
 int FUNC_3 (struct throtl_data*,struct throtl_grp*,int,unsigned long) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_4 (struct throtl_data*,struct throtl_grp*,int) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static inline void
FUNC_6(struct throtl_data *VAR_4, struct throtl_grp *VAR_5, bool VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 u64 VAR_10, VAR_11;

 FUNC_0(FUNC_5(VAR_5->slice_end[VAR_6], VAR_5->slice_start[VAR_6]));






 if (FUNC_4(VAR_4, VAR_5, VAR_6))
  return;
 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_2 + VAR_3);

 VAR_8 = VAR_2 - VAR_5->slice_start[VAR_6];

 VAR_7 = VAR_8 / VAR_3;

 if (!VAR_7)
  return;
 VAR_11 = VAR_5->bps[VAR_6] * VAR_3 * VAR_7;
 FUNC_1(VAR_11, VAR_0);
 VAR_10 = VAR_11;

 VAR_9 = (VAR_5->iops[VAR_6] * VAR_3 * VAR_7)/VAR_0;

 if (!VAR_10 && !VAR_9)
  return;

 if (VAR_5->bytes_disp[VAR_6] >= VAR_10)
  VAR_5->bytes_disp[VAR_6] -= VAR_10;
 else
  VAR_5->bytes_disp[VAR_6] = 0;

 if (VAR_5->io_disp[VAR_6] >= VAR_9)
  VAR_5->io_disp[VAR_6] -= VAR_9;
 else
  VAR_5->io_disp[VAR_6] = 0;

 VAR_5->slice_start[VAR_6] += VAR_7 * VAR_3;

 FUNC_2(VAR_4, VAR_5, "[%c] trim slice nr=%lu bytes=%llu io=%lu"
   " start=%lu end=%lu jiffies=%lu",
   VAR_6 == VAR_1 ? 'R' : 'W', VAR_7, VAR_10, VAR_9,
   VAR_5->slice_start[VAR_6], VAR_5->slice_end[VAR_6], VAR_2);
}
