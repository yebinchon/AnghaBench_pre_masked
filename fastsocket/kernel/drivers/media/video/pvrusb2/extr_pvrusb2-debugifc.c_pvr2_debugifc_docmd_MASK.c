
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int dummy; } ;


 int FUNC_0 (struct pvr2_hdw*,char const*,unsigned int) ;

int FUNC_1(struct pvr2_hdw *VAR_0,const char *VAR_1,
   unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;
 int VAR_4;

 while (VAR_2) {
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   if (VAR_1[VAR_3] == '\n') break;
  }

  VAR_4 = FUNC_0(VAR_0,VAR_1,VAR_3);
  if (VAR_4 < 0) return VAR_4;
  if (VAR_3 < VAR_2) VAR_3++;
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
 }

 return 0;
}
