
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_map_table {int dummy; } ;
struct rc_map {unsigned int alloc; int size; int len; struct rc_map_table* scan; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (struct rc_map_table*) ;
 struct rc_map_table* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct rc_map_table*,struct rc_map_table*,int) ;

__attribute__((used)) static int FUNC_4(struct rc_map *VAR_3, gfp_t VAR_4)
{
 unsigned int VAR_5 = VAR_3->alloc;
 unsigned int VAR_6 = VAR_5;
 struct rc_map_table *VAR_7 = VAR_3->scan;
 struct rc_map_table *VAR_8;

 if (VAR_3->size == VAR_3->len) {

  if (VAR_3->alloc >= VAR_1)
   return -VAR_0;

  VAR_6 *= 2;
  FUNC_0(1, "Growing table to %u bytes\n", VAR_6);
 }

 if ((VAR_3->len * 3 < VAR_3->size) && (VAR_5 > VAR_2)) {

  VAR_6 /= 2;
  FUNC_0(1, "Shrinking table to %u bytes\n", VAR_6);
 }

 if (VAR_6 == VAR_5)
  return 0;

 VAR_8 = FUNC_2(VAR_6, VAR_4);
 if (!VAR_8) {
  FUNC_0(1, "Failed to kmalloc %u bytes\n", VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_8, VAR_3->scan, VAR_3->len * sizeof(struct rc_map_table));
 VAR_3->scan = VAR_8;
 VAR_3->alloc = VAR_6;
 VAR_3->size = VAR_3->alloc / sizeof(struct rc_map_table);
 FUNC_1(VAR_7);
 return 0;
}
