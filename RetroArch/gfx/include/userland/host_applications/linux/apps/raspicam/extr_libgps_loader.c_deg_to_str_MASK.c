
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,double*) ;
 int FUNC_1 (char*,int,char*,int,int,int) ;

int FUNC_2(double VAR_0, char *VAR_1, int VAR_2)
{
   double VAR_3, VAR_4, VAR_5;

   if (VAR_2 <= 0)
      return -1;
   *VAR_1 = 0;
   if (VAR_0 < 0 || VAR_0 > 360)
      return -1;

   VAR_5 = FUNC_0(VAR_0, &VAR_4);
   VAR_3 = FUNC_0(VAR_5 * 60, &VAR_5);
   VAR_3 *= 60;
   FUNC_1(VAR_1, VAR_2, "%03d/1,%02d/1,%05d/1000", (int)VAR_4, (int)VAR_5, (int)(VAR_3*1000));

   return 0;
}
