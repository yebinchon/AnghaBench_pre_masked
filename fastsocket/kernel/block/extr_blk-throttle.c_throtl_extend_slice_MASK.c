
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int * slice_end; int * slice_start; } ;
struct throtl_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct throtl_data*,struct throtl_grp*,char*,char,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_2(struct throtl_data *VAR_3,
  struct throtl_grp *VAR_4, bool VAR_5, unsigned long VAR_6)
{
 VAR_4->slice_end[VAR_5] = FUNC_0(VAR_6, VAR_2);
 FUNC_1(VAR_3, VAR_4, "[%c] extend slice start=%lu end=%lu jiffies=%lu",
   VAR_5 == VAR_0 ? 'R' : 'W', VAR_4->slice_start[VAR_5],
   VAR_4->slice_end[VAR_5], VAR_1);
}
