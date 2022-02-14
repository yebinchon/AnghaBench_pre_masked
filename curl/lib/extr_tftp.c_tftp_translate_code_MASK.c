
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tftp_error_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
__attribute__((used)) static CURLcode FUNC_0(tftp_error_t VAR_12)
{
  CURLcode VAR_13 = VAR_2;

  if(VAR_12 != VAR_11) {
    switch(VAR_12) {
    case 132:
      VAR_13 = VAR_8;
      break;
    case 131:
      VAR_13 = VAR_9;
      break;
    case 137:
      VAR_13 = VAR_4;
      break;
    case 129:
    case 135:
      VAR_13 = VAR_6;
      break;
    case 128:
      VAR_13 = VAR_10;
      break;
    case 136:
      VAR_13 = VAR_5;
      break;
    case 133:
      VAR_13 = VAR_7;
      break;
    case 130:
      VAR_13 = VAR_3;
      break;
    case 134:
      VAR_13 = VAR_1;
      break;
    default:
      VAR_13 = VAR_0;
      break;
    }
  }
  else
    VAR_13 = VAR_2;

  return VAR_13;
}
