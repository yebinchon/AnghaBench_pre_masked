
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void const* VAR_0 ;
 void const* VAR_1 ;
 void const* VAR_2 ;
 void const* VAR_3 ;
 void const* VAR_4 ;
 void const* VAR_5 ;
 void const* VAR_6 ;
 void const* VAR_7 ;

const void *FUNC_0(int VAR_8, int VAR_9){

  switch(VAR_8){
  case 0:

    switch(VAR_9){
    case 32:
      return VAR_6;
    case 64:
      return VAR_1;
    case 128:
      return VAR_3;
    case 256:
      return VAR_5;
    case 512:
      return VAR_0;
    case 1024:
      return VAR_2;
    case 2048:
      return VAR_4;
    case 4096:
      return VAR_7;
    default:
      return(0);
    }
    break;
  default:
    return(0);
  }
}
