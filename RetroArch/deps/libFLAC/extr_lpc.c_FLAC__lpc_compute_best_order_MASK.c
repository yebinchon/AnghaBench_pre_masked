
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 double FUNC_1 (double const,double) ;

unsigned FUNC_2(const double VAR_0[], unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6;
 double VAR_7, VAR_8, VAR_9;

 FUNC_0(VAR_1 > 0);
 FUNC_0(VAR_2 > 0);

 VAR_9 = 0.5 / (double)VAR_2;

 VAR_6 = 0;
 VAR_8 = (unsigned)(-1);

 for(VAR_5 = 0, VAR_4 = 1; VAR_5 < VAR_1; VAR_5++, VAR_4++) {
  VAR_7 = FUNC_1(VAR_0[VAR_5], VAR_9) * (double)(VAR_2 - VAR_4) + (double)(VAR_4 * VAR_3);
  if(VAR_7 < VAR_8) {
   VAR_6 = VAR_5;
   VAR_8 = VAR_7;
  }
 }

 return VAR_6+1;
}
