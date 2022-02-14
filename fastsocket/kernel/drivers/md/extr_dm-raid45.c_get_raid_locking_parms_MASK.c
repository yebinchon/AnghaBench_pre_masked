
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct dm_raid45_locking_type {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 struct dm_raid45_locking_type VAR_1 ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_2, char **VAR_3,
      int *VAR_4,
      struct dm_raid45_locking_type **VAR_5)
{
 if (!FUNC_2(VAR_3[0], "locking", FUNC_1(VAR_3[0]))) {
  char *VAR_6 = VAR_3[1];
  size_t VAR_7 = FUNC_1(VAR_6);

  if (!FUNC_2(VAR_6, "none", VAR_7)) {
   *VAR_5 = &VAR_1;
   *VAR_4 = 2;
  } else if (!FUNC_2(VAR_6, "cluster", VAR_7)) {
   FUNC_0("locking type \"%s\" not yet implemented",
         VAR_6);
   return -VAR_0;
  } else {
   FUNC_0("unknown locking type \"%s\"", VAR_6);
   return -VAR_0;
  }
 }

 *VAR_4 = 0;
 *VAR_5 = &VAR_1;
 return 0;
}
