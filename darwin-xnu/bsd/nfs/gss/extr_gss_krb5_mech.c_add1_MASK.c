
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;



__attribute__((used)) static void
FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;
 int VAR_4 = 0;

 for(VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--){
  int VAR_5 = VAR_0[VAR_3] + VAR_1[VAR_3] + VAR_4;
  VAR_4 = VAR_5 > 0xff;
  VAR_0[VAR_3] = VAR_5 & 0xff;
 }
 for(VAR_3 = VAR_2 - 1; VAR_4 && VAR_3 >= 0; VAR_3--){
  int VAR_6 = VAR_0[VAR_3] + VAR_4;
  VAR_4 = VAR_6 > 0xff;
  VAR_0[VAR_3] = VAR_6 & 0xff;
 }
}
