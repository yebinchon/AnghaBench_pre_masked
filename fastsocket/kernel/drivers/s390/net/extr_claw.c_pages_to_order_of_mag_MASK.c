
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
 int VAR_2=1;
 int VAR_3;

 FUNC_0(5, VAR_0, "pages%d", VAR_1);
 if (VAR_1 == 1) {return 0; }

 if (VAR_1 >= 512) {return 9; }

 for (VAR_3=2 ;VAR_3 <= 512;VAR_3*=2) {
   if (VAR_1 <= VAR_3)
    break;
   VAR_2 +=1;
 }
 if (VAR_2 > 9) { VAR_2 = 9; }
 FUNC_0(5, VAR_0, "mag%d", VAR_2);
 return VAR_2;
}
