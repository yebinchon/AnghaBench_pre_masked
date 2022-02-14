
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*,int *) ;

__attribute__((used)) static char *FUNC_1(const char *VAR_0, FILE *VAR_1, char *VAR_2) {
 if (VAR_1)
  FUNC_0(VAR_0, VAR_1);
 else
  while ((*VAR_2 = *VAR_0++))
   VAR_2++;
 return VAR_2;
}
