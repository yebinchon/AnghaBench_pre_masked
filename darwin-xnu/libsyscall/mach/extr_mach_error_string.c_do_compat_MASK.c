
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(mach_error_t *VAR_6)
{
 mach_error_t VAR_7 = *VAR_6;






 if ((-200 < VAR_7) && (VAR_7 <= -100))
  VAR_7 = -(VAR_7 + 100) | VAR_1;
 else if ((-300 < VAR_7) && (VAR_7 <= -200))
  VAR_7 = -(VAR_7 + 200) | VAR_0;
 else if ((-400 < VAR_7) && (VAR_7 <= -300))
  VAR_7 = -(VAR_7 + 300) | VAR_2;
 else if ((1000 <= VAR_7) && (VAR_7 < 1100))
  VAR_7 = (VAR_7 - 1000) | VAR_5;
 else if ((1600 <= VAR_7) && (VAR_7 < 1700))
  VAR_7 = (VAR_7 - 1600) | VAR_3;
 else if ((27600 <= VAR_7) && (VAR_7 < 27700))
  VAR_7 = (VAR_7 - 27600) | VAR_4;

 *VAR_6 = VAR_7;
}
