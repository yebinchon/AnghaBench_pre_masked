
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SEGGER_SYSVIEW_PRINTF_DESC ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int *,char) ;

__attribute__((used)) static void FUNC_2(SEGGER_SYSVIEW_PRINTF_DESC * VAR_3, int VAR_4, unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8) {
  unsigned int VAR_9;
  int VAR_10;

  VAR_10 = (VAR_4 < 0) ? -VAR_4 : VAR_4;




  VAR_9 = 1u;
  while (VAR_10 >= (int)VAR_5) {
    VAR_10 = (VAR_10 / (int)VAR_5);
    VAR_9++;
  }
  if (VAR_6 > VAR_9) {
    VAR_9 = VAR_6;
  }
  if ((VAR_7 > 0u) && ((VAR_4 < 0) || ((VAR_8 & VAR_2) == VAR_2))) {
    VAR_7--;
  }




  if ((((VAR_8 & VAR_1) == 0u) || (VAR_6 != 0u)) && ((VAR_8 & VAR_0) == 0u)) {
    if (VAR_7 != 0u) {
      while ((VAR_7 != 0u) && (VAR_9 < VAR_7)) {
        VAR_7--;
        FUNC_1(VAR_3, ' ');
      }
    }
  }



  if (VAR_4 < 0) {
    VAR_4 = -VAR_4;
    FUNC_1(VAR_3, '-');
  } else if ((VAR_8 & VAR_2) == VAR_2) {
    FUNC_1(VAR_3, '+');
  } else {

  }



  if (((VAR_8 & VAR_1) == VAR_1) && ((VAR_8 & VAR_0) == 0u) && (VAR_6 == 0u)) {
    if (VAR_7 != 0u) {
      while ((VAR_7 != 0u) && (VAR_9 < VAR_7)) {
        VAR_7--;
        FUNC_1(VAR_3, '0');
      }
    }
  }



  FUNC_0(VAR_3, (unsigned int)VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
