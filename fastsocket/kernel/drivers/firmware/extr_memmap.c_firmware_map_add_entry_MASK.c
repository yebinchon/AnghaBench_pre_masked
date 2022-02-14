
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct firmware_map_entry {char const* type; int list; int kobj; scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(u64 VAR_2, u64 VAR_3,
      const char *VAR_4,
      struct firmware_map_entry *VAR_5)
{
 FUNC_0(VAR_2 > VAR_3);

 VAR_5->start = VAR_2;
 VAR_5->end = VAR_3;
 VAR_5->type = VAR_4;
 FUNC_1(&VAR_5->list);
 FUNC_2(&VAR_5->kobj, &VAR_1);

 FUNC_3(&VAR_5->list, &VAR_0);

 return 0;
}
