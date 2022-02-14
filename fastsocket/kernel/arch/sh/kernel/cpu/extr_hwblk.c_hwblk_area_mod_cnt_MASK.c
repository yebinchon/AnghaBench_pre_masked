
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwblk_info {struct hwblk_area* areas; } ;
struct hwblk_area {int* cnt; int flags; int parent; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hwblk_info *VAR_1,
          int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct hwblk_area *VAR_6 = VAR_1->areas + VAR_2;

 VAR_6->cnt[VAR_3] += VAR_4;

 if (VAR_6->cnt[VAR_3] != VAR_5)
  return;

 if (VAR_6->flags & VAR_0)
  FUNC_0(VAR_1, VAR_6->parent, VAR_3, VAR_4, VAR_5);
}
