
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int * slice_end; } ;
struct throtl_data {int dummy; } ;


 int FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct throtl_data *VAR_1,
  struct throtl_grp *VAR_2, bool VAR_3, unsigned long VAR_4)
{
 VAR_2->slice_end[VAR_3] = FUNC_0(VAR_4, VAR_0);
}
