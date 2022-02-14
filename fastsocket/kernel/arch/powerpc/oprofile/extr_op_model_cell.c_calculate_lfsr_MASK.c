
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_0(int VAR_5)
{




 int VAR_6;

 if ((VAR_5 >> 16) == 0)
  VAR_6 = 0;
 else if (((VAR_5 - VAR_1) >> 19) == 0)
  VAR_6 = ((VAR_5 - VAR_1) >> 12) + 1;
 else if (((VAR_5 - VAR_1 - VAR_2) >> 22) == 0)
  VAR_6 = ((VAR_5 - VAR_1 - VAR_2) >> 15 ) + 1 + 128;
 else if (((VAR_5 - VAR_1 - VAR_2 - VAR_3) >> 24) == 0)
  VAR_6 = ((VAR_5 - VAR_1 - VAR_2 - VAR_3) >> 18 ) + 1 + 256;
 else
  VAR_6 = VAR_0-1;


 if ((VAR_6 > VAR_0) || (VAR_6 < 0))
  VAR_6 = VAR_0-1;

 return VAR_4[VAR_6];
}
