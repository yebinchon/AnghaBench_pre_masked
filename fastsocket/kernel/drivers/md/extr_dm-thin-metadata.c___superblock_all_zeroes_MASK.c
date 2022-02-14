
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_block_manager {int dummy; } ;
struct dm_block {int dummy; } ;
typedef scalar_t__ __le64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (struct dm_block*) ;
 int FUNC_2 (struct dm_block_manager*) ;
 int FUNC_3 (struct dm_block_manager*,int ,int *,struct dm_block**) ;
 int FUNC_4 (struct dm_block*) ;

__attribute__((used)) static int FUNC_5(struct dm_block_manager *VAR_1, int *VAR_2)
{
 int VAR_3;
 unsigned VAR_4;
 struct dm_block *VAR_5;
 __le64 *VAR_6, VAR_7 = FUNC_0(0);
 unsigned VAR_8 = FUNC_2(VAR_1) / sizeof(__le64);




 VAR_3 = FUNC_3(VAR_1, VAR_0, ((void*)0), &VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_6 = FUNC_1(VAR_5);
 *VAR_2 = 1;
 for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
  if (VAR_6[VAR_4] != VAR_7) {
   *VAR_2 = 0;
   break;
  }
 }

 return FUNC_4(VAR_5);
}
