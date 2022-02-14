
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (unsigned char) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1(unsigned char VAR_7)
{
 if (VAR_7 == '?') {
  VAR_6 = VAR_0;
  return;
 }
 if (VAR_7 == '[') {
  VAR_6 = VAR_2;

  return;
 }
 if (VAR_7 == ';' && VAR_4 < VAR_3 - 1) {
  VAR_4++;
 } else
  if (VAR_7 >= '0' && VAR_7 <= '9') {
   VAR_5[VAR_4] *= 10;
   VAR_5[VAR_4] += VAR_7 - '0';
  } else {
   VAR_4++;
   VAR_6 = VAR_1;
   FUNC_0(VAR_7);
  }
}
