
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_control {int id; scalar_t__ value; } ;
struct camera_data {int dummy; } ;
struct TYPE_8__ {int id; scalar_t__ minimum; scalar_t__ maximum; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {scalar_t__ value; } ;
 int FUNC_0 (char*,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;





 TYPE_4__* VAR_2 ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct camera_data*,scalar_t__) ;
 int FUNC_3 (struct camera_data*,scalar_t__) ;
 int FUNC_4 (struct camera_data*,int ) ;
 int FUNC_5 (struct camera_data*,int ) ;
 int FUNC_6 (struct camera_data*,scalar_t__) ;
 int FUNC_7 (struct camera_data*,scalar_t__) ;
 int FUNC_8 (struct camera_data*,scalar_t__) ;
 int FUNC_9 (struct camera_data*,scalar_t__) ;
 int FUNC_10 (struct camera_data*,scalar_t__) ;
 int FUNC_11 (struct camera_data*,size_t) ;
 int FUNC_12 (struct camera_data*) ;
 int FUNC_13 (struct camera_data*) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_14(void *VAR_6,struct camera_data *VAR_7)
{
 struct v4l2_control *VAR_8 = VAR_6;
 int VAR_9;
 int VAR_10 = 0;

 FUNC_0("Set control id:%d, value:%d\n", VAR_8->id, VAR_8->value);


 for(VAR_9=0; VAR_9<VAR_1; VAR_9++) {
  if(VAR_8->id == VAR_2[VAR_9].id) {
   if(VAR_8->value < VAR_2[VAR_9].minimum ||
      VAR_8->value > VAR_2[VAR_9].maximum) {
    return -VAR_0;
   }
   break;
  }
 }
 if(VAR_9 == VAR_1)
  return -VAR_0;

 switch(VAR_8->id) {
 case 132:
  FUNC_2(VAR_7, VAR_8->value);
  break;
 case 131:
  FUNC_3(VAR_7, VAR_8->value);
  break;
 case 129:
  FUNC_9(VAR_7, VAR_8->value);
  break;
 case 130:
  FUNC_8(VAR_7, VAR_8->value);
  break;
 case 128:
  FUNC_7(VAR_7, VAR_8->value);
  break;
 case 134:
  VAR_10 = FUNC_10(VAR_7, VAR_8->value);
  break;
 case 137:
  VAR_10 = FUNC_6(VAR_7, VAR_8->value);
  break;
 case 139:
  VAR_10 = FUNC_4(VAR_7,
           VAR_3[VAR_8->value].value);
  break;
 case 138:
  VAR_10 = FUNC_5(VAR_7, VAR_4[VAR_8->value].value);
  break;
 case 133:
  VAR_10 = FUNC_11(VAR_7, VAR_8->value);
  break;
 case 136:
  VAR_10 = FUNC_6(VAR_7, VAR_5[VAR_8->value].value);
  break;
 case 135:
  FUNC_12(VAR_7);
  FUNC_1(VAR_7);
  FUNC_13(VAR_7);
  break;
 default:
  VAR_10 = -VAR_0;
 }

 return VAR_10;
}
