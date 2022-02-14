
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_2, char *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;






 if (VAR_4 < VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);





 for (VAR_6 = 1; VAR_6 < VAR_5; ++VAR_6) {
  if (VAR_3[VAR_6] == 0 && VAR_3[VAR_6-1] == '\r') {
   --VAR_5;
   if (VAR_6 < VAR_5)
    FUNC_1(&VAR_3[VAR_6], &VAR_3[VAR_6+1],
     VAR_5 - VAR_6);
  }
 }
 return VAR_5;
}
