
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long int64_t ;
typedef int int32_t ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;

__attribute__((used)) static int32_t FUNC_0(int64_t VAR_7, char VAR_8, int64_t* VAR_9) {
  *VAR_9 = VAR_7;

  switch (VAR_8) {
    case 's':
      (*VAR_9) *= VAR_4;
      break;
    case 'm':
      (*VAR_9) *= VAR_2;
      break;
    case 'h':
      (*VAR_9) *= VAR_1;
      break;
    case 'd':
      (*VAR_9) *= VAR_0;
      break;
    case 'w':
      (*VAR_9) *= VAR_5;
      break;
    case 'n':
      (*VAR_9) *= VAR_3;
      break;
    case 'y':
      (*VAR_9) *= VAR_6;
      break;
    case 'a':
      break;
    default: {
      ;
      return -1;
    }
  }


  (*VAR_9) *= 1000L;
  return 0;
}
