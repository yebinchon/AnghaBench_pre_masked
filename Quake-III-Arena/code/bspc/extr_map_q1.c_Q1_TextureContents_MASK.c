
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(char *VAR_4)
{
 if (!FUNC_0(VAR_4, "clip")) return VAR_2;
 if (VAR_4[0] == '*')
 {
  if (!FUNC_1(VAR_4+1,"lava",4)) return VAR_0;
  else if (!FUNC_1(VAR_4+1,"slime",5)) return VAR_1;
  else return VAR_3;
 }
 else if (!FUNC_1(VAR_4, "sky", 3)) return VAR_2;
 else return VAR_2;
}
