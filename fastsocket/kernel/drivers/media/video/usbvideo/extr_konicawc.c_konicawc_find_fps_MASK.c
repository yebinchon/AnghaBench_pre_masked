
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int,int,...) ;
 size_t VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_3 *= 3;
 FUNC_0(1, "konica_find_fps: size = %d fps = %d", VAR_2, VAR_3);
 if(VAR_3 <= VAR_1[VAR_2][0])
  return 0;

 if(VAR_3 >= VAR_1[VAR_2][VAR_0])
  return VAR_0;

 for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if((VAR_3 >= VAR_1[VAR_2][VAR_4]) && (VAR_3 <= VAR_1[VAR_2][VAR_4+1])) {
   FUNC_0(2, "fps %d between %d and %d", VAR_3, VAR_4, VAR_4+1);
   if( (VAR_3 - VAR_1[VAR_2][VAR_4]) < (VAR_1[VAR_2][VAR_4+1] - VAR_3))
    return VAR_4;
   else
    return VAR_4+1;
  }
 }
 return VAR_0+1;
}
