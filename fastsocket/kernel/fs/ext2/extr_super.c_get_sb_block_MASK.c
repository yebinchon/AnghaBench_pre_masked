
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 unsigned long FUNC_1 (char*,char**,int ) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static unsigned long FUNC_3(void **VAR_0)
{
 unsigned long VAR_1;
 char *VAR_2 = (char *) *VAR_0;

 if (!VAR_2 || FUNC_2(VAR_2, "sb=", 3) != 0)
  return 1;
 VAR_2 += 3;
 VAR_1 = FUNC_1(VAR_2, &VAR_2, 0);
 if (*VAR_2 && *VAR_2 != ',') {
  FUNC_0("EXT2-fs: Invalid sb specification: %s\n",
         (char *) *VAR_0);
  return 1;
 }
 if (*VAR_2 == ',')
  VAR_2++;
 *VAR_0 = (void *) VAR_2;
 return VAR_1;
}
