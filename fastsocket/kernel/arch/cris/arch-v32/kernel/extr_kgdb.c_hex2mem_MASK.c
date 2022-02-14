
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int ) ;

__attribute__((used)) static unsigned char*
FUNC_1(unsigned char *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned char VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0 (*VAR_1++) << 4;
  VAR_4 = VAR_4 + FUNC_0 (*VAR_1++);
  *VAR_0++ = VAR_4;
 }
 return VAR_0;
}
