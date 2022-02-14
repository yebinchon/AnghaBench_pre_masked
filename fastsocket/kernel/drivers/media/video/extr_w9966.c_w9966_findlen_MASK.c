
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1;
 int VAR_4 = FUNC_0(VAR_0 - VAR_3);
 int VAR_5;

 for(VAR_5 = VAR_1+1;VAR_5 < VAR_2;VAR_5++)
 {
  int VAR_6;
  if ( ((64*VAR_1) %VAR_5) != 0)
   continue;

  VAR_6 = FUNC_0(VAR_0 - VAR_5);


  if (VAR_6 > VAR_4)
   break;

  VAR_4 = VAR_6;
  VAR_3 = VAR_5;
 }

 return VAR_3;
}
