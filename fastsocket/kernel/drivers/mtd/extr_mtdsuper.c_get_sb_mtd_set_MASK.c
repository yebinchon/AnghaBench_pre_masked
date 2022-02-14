
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dev; struct mtd_info* s_mtd; } ;
struct mtd_info {int index; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_1, void *VAR_2)
{
 struct mtd_info *VAR_3 = VAR_2;

 VAR_1->s_mtd = VAR_3;
 VAR_1->s_dev = FUNC_0(VAR_0, VAR_3->index);
 return 0;
}
