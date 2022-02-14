
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {int dummy; } ;
struct erase_info {unsigned long len; int state; scalar_t__ addr; } ;
typedef int map_word ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct map_info*) ;
 int FUNC_1 (struct map_info*) ;
 int FUNC_2 (struct map_info*,int ,scalar_t__) ;
 int FUNC_3 (struct erase_info*) ;

__attribute__((used)) static int FUNC_4 (struct mtd_info *VAR_1, struct erase_info *VAR_2)
{


 struct map_info *VAR_3 = VAR_1->priv;
 map_word VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_1(VAR_3);

 for (VAR_5=0; VAR_5<VAR_2->len; VAR_5 += FUNC_0(VAR_3))
  FUNC_2(VAR_3, VAR_4, VAR_2->addr + VAR_5);

 VAR_2->state = VAR_0;

 FUNC_3(VAR_2);

 return 0;
}
