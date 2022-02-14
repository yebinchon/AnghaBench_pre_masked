
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(
 unsigned short *VAR_1, const unsigned char *VAR_2,
 unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;
 if (!VAR_2) return 0;
 while (VAR_2[VAR_4] && (VAR_4 + 1) < VAR_3) {
  VAR_1[VAR_4] = VAR_2[VAR_4];
  VAR_4++;
 }
 VAR_1[VAR_4] = VAR_0;
 return VAR_4;
}
