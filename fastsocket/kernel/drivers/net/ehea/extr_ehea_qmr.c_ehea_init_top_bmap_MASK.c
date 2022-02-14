
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_top_bmap {scalar_t__* dir; } ;
struct ehea_dir_bmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct ehea_top_bmap *VAR_2,
         int VAR_3)
{
 if (!VAR_2->dir[VAR_3]) {
  VAR_2->dir[VAR_3] =
   FUNC_0(sizeof(struct ehea_dir_bmap), VAR_1);
  if (!VAR_2->dir[VAR_3])
   return -VAR_0;
 }
 return 0;
}
