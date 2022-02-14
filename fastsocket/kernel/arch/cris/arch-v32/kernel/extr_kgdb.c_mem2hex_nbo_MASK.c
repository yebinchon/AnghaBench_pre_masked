
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_1 += VAR_2 - 1;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = *VAR_1--;
  VAR_0 = FUNC_0(VAR_0, VAR_4);
        }


 *VAR_0 = '\0';
 return VAR_0;
}
