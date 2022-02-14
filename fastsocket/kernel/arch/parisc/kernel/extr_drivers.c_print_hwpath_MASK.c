
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hardware_path {int* bc; scalar_t__ mod; } ;


 int FUNC_0 (char*,char*,unsigned char) ;

__attribute__((used)) static char *FUNC_1(struct hardware_path *VAR_0, char *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  if (VAR_0->bc[VAR_2] == -1)
   continue;
  VAR_1 += FUNC_0(VAR_1, "%u/", (unsigned char) VAR_0->bc[VAR_2]);
 }
 VAR_1 += FUNC_0(VAR_1, "%u", (unsigned char) VAR_0->mod);
 return VAR_1;
}
