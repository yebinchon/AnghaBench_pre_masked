
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_map_table {int dummy; } ;
struct rc_map {char const* name; int alloc; int size; int scan; int rc_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static int FUNC_3(struct rc_map *VAR_2,
      const char *VAR_3, u64 VAR_4, size_t VAR_5)
{
 VAR_2->name = VAR_3;
 VAR_2->rc_type = VAR_4;
 VAR_2->alloc = FUNC_2(VAR_5 * sizeof(struct rc_map_table));
 VAR_2->size = VAR_2->alloc / sizeof(struct rc_map_table);
 VAR_2->scan = FUNC_1(VAR_2->alloc, VAR_1);
 if (!VAR_2->scan)
  return -VAR_0;

 FUNC_0(1, "Allocated space for %u keycode entries (%u bytes)\n",
     VAR_2->size, VAR_2->alloc);
 return 0;
}
