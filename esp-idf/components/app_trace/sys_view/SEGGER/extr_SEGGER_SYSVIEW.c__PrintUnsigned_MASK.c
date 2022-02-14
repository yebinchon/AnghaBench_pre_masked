
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SEGGER_SYSVIEW_PRINTF_DESC ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char const) ;

__attribute__((used)) static void FUNC_1(SEGGER_SYSVIEW_PRINTF_DESC * VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7) {
  static const char VAR_8[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
  unsigned int VAR_9;
  unsigned int VAR_10;
  unsigned int VAR_11;
  unsigned int VAR_12;
  char VAR_13;

  VAR_11 = VAR_3;
  VAR_10 = 1u;



  VAR_12 = 1u;
  while (VAR_11 >= VAR_4) {
    VAR_11 = (VAR_11 / VAR_4);
    VAR_12++;
  }
  if (VAR_5 > VAR_12) {
    VAR_12 = VAR_5;
  }



  if ((VAR_7 & VAR_0) == 0u) {
    if (VAR_6 != 0u) {
      if (((VAR_7 & VAR_1) == VAR_1) && (VAR_5 == 0u)) {
        VAR_13 = '0';
      } else {
        VAR_13 = ' ';
      }
      while ((VAR_6 != 0u) && (VAR_12 < VAR_6)) {
        VAR_6--;
        FUNC_0(VAR_2, VAR_13);
      }
    }
  }





  while (1) {
    if (VAR_5 > 1u) {
      VAR_5--;
    } else {
      VAR_9 = VAR_3 / VAR_10;
      if (VAR_9 < VAR_4) {
        break;
      }
    }
    VAR_10 *= VAR_4;
  }



  do {
    VAR_9 = VAR_3 / VAR_10;
    VAR_3 -= VAR_9 * VAR_10;
    FUNC_0(VAR_2, VAR_8[VAR_9]);
    VAR_10 /= VAR_4;
  } while (VAR_10);



  if ((VAR_7 & VAR_0) == VAR_0) {
    if (VAR_6 != 0u) {
      while ((VAR_6 != 0u) && (VAR_12 < VAR_6)) {
        VAR_6--;
        FUNC_0(VAR_2, ' ');
      }
    }
  }
}
