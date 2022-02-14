
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2, VAR_3[] = { 11025, 22050, 44100 };

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  if (VAR_3[VAR_2] == VAR_0) break;

 VAR_2 += VAR_1 ? 1 : -1;
 if (VAR_2 > 2) return VAR_1 ? 44100 : 22050;
 if (VAR_2 < 0) return VAR_1 ? 22050 : 11025;
 return VAR_3[VAR_2];
}
