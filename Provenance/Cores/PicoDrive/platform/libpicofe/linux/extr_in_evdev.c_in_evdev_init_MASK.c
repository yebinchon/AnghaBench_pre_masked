
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_pdata {int defbinds; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,struct in_pdata const*) ;
 int VAR_1 ;

int FUNC_2(const struct in_pdata *VAR_2)
{
 if (!VAR_2) {
  FUNC_0(VAR_1, "in_sdl: Missing input platform data\n");
  return -1;
 }

 FUNC_1(&VAR_0, VAR_2->defbinds, VAR_2);
 return 0;
}
