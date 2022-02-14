
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RetSS ;



long FUNC_0(long VAR_0, long VAR_1)
{
 long VAR_2;


 if (VAR_1 >= 71 && VAR_1 <= 100)
  VAR_2 = 90 + ((VAR_1 - 70) / 3);
 else if (VAR_1 >= 41 && VAR_1 <= 70)
  VAR_2 = 78 + ((VAR_1 - 40) / 3);
 else if (VAR_1 >= 31 && VAR_1 <= 40)
  VAR_2 = 66 + (VAR_1 - 30);
 else if (VAR_1 >= 21 && VAR_1 <= 30)
  VAR_2 = 54 + (VAR_1 - 20);
 else if (VAR_1 >= 5 && VAR_1 <= 20)
  VAR_2 = 42 + (((VAR_1 - 5) * 2) / 3);
 else if (VAR_1 == 4)
  VAR_2 = 36;
 else if (VAR_1 == 3)
  VAR_2 = 27;
 else if (VAR_1 == 2)
  VAR_2 = 18;
 else if (VAR_1 == 1)
  VAR_2 = 9;
 else
  VAR_2 = VAR_1;


 if(VAR_0 > 0)
  VAR_2 = ((VAR_0 * 5) + (VAR_2)+ 5) / 6;

 return VAR_2;
}
