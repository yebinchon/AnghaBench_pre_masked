
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct console {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned char VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 unsigned char VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int* VAR_12 ;

void FUNC_2(struct console *VAR_13, const char *VAR_14,
        unsigned VAR_15)
{
 volatile unsigned char *VAR_16 = (u_char *) VAR_0;
 unsigned long VAR_17;
 volatile u_char VAR_18;
 u_char VAR_19;
 int VAR_20;
 u_char VAR_21 = 0;
 int VAR_22 = 0;

 FUNC_1(VAR_17);



 VAR_20 = 0;
 VAR_16[VAR_1] = (u_char) VAR_20;
 while (VAR_16[VAR_2])
  ;
 VAR_16[VAR_2] = VAR_3;

 VAR_19 = VAR_16[VAR_4];
 VAR_16[VAR_4] = VAR_9;

 while (1) {
  if (VAR_12[VAR_10] & 0x20) {

   VAR_18 = VAR_12[VAR_11];
   if ((VAR_16[VAR_5] >> 2) == VAR_20) {
    if (VAR_22 == VAR_15) {

     VAR_16[VAR_8] = VAR_6;
     break;
    }
    if (VAR_21) {
     VAR_16[VAR_7] = '\n';
     VAR_14++;
     VAR_22++;
     VAR_21 = 0;
    } else if (*VAR_14 == '\n') {
     VAR_16[VAR_7] = '\r';
     VAR_21 = 1;
    } else {
     VAR_16[VAR_7] = *VAR_14++;
     VAR_22++;
    }
    VAR_16[VAR_8] = 0;
   } else
    VAR_16[VAR_8] = VAR_6;
  }
 }

 VAR_16[VAR_4] = VAR_19;

 FUNC_0(VAR_17);
}
