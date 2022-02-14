
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int mempools; int integrity_supported; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (struct dm_table*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct dm_table *VAR_3)
{
 unsigned VAR_4 = FUNC_2(VAR_3);

 if (FUNC_3(VAR_4 == VAR_0)) {
  FUNC_0("no table type is set, can't allocate mempools");
  return -VAR_1;
 }

 VAR_3->mempools = FUNC_1(VAR_4, VAR_3->integrity_supported);
 if (!VAR_3->mempools)
  return -VAR_2;

 return 0;
}
