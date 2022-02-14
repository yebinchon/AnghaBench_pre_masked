
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {unsigned int* iops; } ;
struct throtl_data {int dummy; } ;
struct blkio_group {int dummy; } ;


 size_t VAR_0 ;
 struct throtl_grp* FUNC_0 (struct blkio_group*) ;
 int FUNC_1 (struct throtl_data*,struct throtl_grp*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1,
   struct blkio_group *VAR_2, unsigned int VAR_3)
{
 struct throtl_data *VAR_4 = VAR_1;
 struct throtl_grp *VAR_5 = FUNC_0(VAR_2);

 VAR_5->iops[VAR_0] = VAR_3;
 FUNC_1(VAR_4, VAR_5);
}
