
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;

int FUNC_1(int VAR_4, char *VAR_5, int VAR_6)
{
 static int VAR_7 = 0;
 static int VAR_8 = 0;
 int VAR_9, VAR_10 = 0, VAR_11 = 450;

 if (VAR_8)
  VAR_11 = VAR_6;

 VAR_9 = FUNC_0(VAR_5, VAR_11);
 if (VAR_9 == VAR_7)
  VAR_8++;

 while (!(VAR_9 & VAR_4)) {
  VAR_9 = FUNC_0(VAR_5, -1);
  VAR_10 = 1;
 }

 if (VAR_10 || VAR_9 != VAR_7)
  VAR_8 = 0;

 VAR_7 = VAR_9;


 if ((VAR_9 & VAR_3) && (VAR_9 & VAR_1)) VAR_9 &= ~VAR_1;
 if ((VAR_9 & VAR_3) && (VAR_9 & VAR_2)) VAR_9 &= ~VAR_2;
 if ((VAR_9 & VAR_0) && (VAR_9 & VAR_1)) VAR_9 &= ~VAR_1;
 if ((VAR_9 & VAR_0) && (VAR_9 & VAR_2)) VAR_9 &= ~VAR_2;

 return VAR_9;
}
