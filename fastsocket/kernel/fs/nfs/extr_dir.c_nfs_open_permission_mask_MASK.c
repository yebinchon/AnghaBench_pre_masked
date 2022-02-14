
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(int VAR_7)
{
 int VAR_8 = 0;

 if (VAR_7 & VAR_6) {

  VAR_8 = VAR_0;
 } else {
  if ((VAR_7 & VAR_3) != VAR_5)
   VAR_8 |= VAR_1;
  if ((VAR_7 & VAR_3) != VAR_4)
   VAR_8 |= VAR_2;
 }

 return VAR_8;
}
