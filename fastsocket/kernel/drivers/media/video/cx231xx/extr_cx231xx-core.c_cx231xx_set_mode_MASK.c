
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx {int mode; int model; } ;
typedef enum cx231xx_mode { ____Placeholder_cx231xx_mode } cx231xx_mode ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx231xx*,int) ;
 int FUNC_1 (struct cx231xx*,int ) ;

int FUNC_2(struct cx231xx *VAR_4, enum cx231xx_mode VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4->mode == VAR_5)
  return 0;

 if (VAR_5 == VAR_1) {

  VAR_4->mode = VAR_5;
 }


 if (VAR_4->mode != VAR_1)
  return -VAR_2;

 VAR_4->mode = VAR_5;

 if (VAR_4->mode == VAR_0) {

  switch (VAR_4->model) {
  case 135:
  case 134:
  case 130:
  case 132:
  VAR_6 = FUNC_0(VAR_4, 0);
   break;
  case 133:
  case 131:
   VAR_6 = FUNC_0(VAR_4, 1);
   break;
  case 129:
   VAR_6 = FUNC_1(VAR_4,
      VAR_3);
   break;
  default:
   break;
  }
 } else {

  switch (VAR_4->model) {
  case 135:
  case 134:
  case 130:
  case 132:
  VAR_6 = FUNC_0(VAR_4, 1);
   break;
  case 133:
  case 131:
  case 129:
  case 128:
  VAR_6 = FUNC_0(VAR_4, 0);
   break;
  default:
   break;
  }
 }

 return 0;
}
