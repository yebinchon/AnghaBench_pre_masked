
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;

__attribute__((used)) static int FUNC_0(struct device *VAR_7, int VAR_8)
{
 if (VAR_8 & VAR_4) {

  unsigned long VAR_9 = VAR_6 / VAR_5;
  unsigned long VAR_10 = VAR_0;
  unsigned long VAR_11 = VAR_1;
  unsigned long VAR_12 = (VAR_10 - VAR_11)/VAR_9;
  VAR_8 += VAR_12 << 8;
  VAR_2 = VAR_3;
  VAR_1 = VAR_11 + (VAR_12 + 1)*VAR_9;




  while( (signed long)((VAR_11 = VAR_1) - VAR_0) <= 8 ) {
   VAR_8 += 0x100;
   VAR_2 = VAR_3;
   VAR_1 = VAR_11 + VAR_9;
  }
 }
 return VAR_8;
}
