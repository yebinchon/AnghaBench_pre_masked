
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char **VAR_1, off_t VAR_2, int VAR_3,
          int *VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_0, "disk\n");
 VAR_6 = FUNC_1("disk\n");
 VAR_6 -= VAR_2;
 if (VAR_6 < VAR_3){
  *VAR_4 = 1;
  if (VAR_6 <= 0) return 0;
 }
 else VAR_6 = VAR_3;
 *VAR_1 = VAR_0 + VAR_2;
 return VAR_6;
}
