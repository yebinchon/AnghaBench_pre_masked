
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_data {int state; int last_msg; TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;
struct TYPE_2__ {int ap; } ;


 int VAR_0 ;

 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (int ) ;
 struct wpabuf* FUNC_3 (struct wps_data*) ;
 struct wpabuf* FUNC_4 (struct wps_data*) ;
 struct wpabuf* FUNC_5 (struct wps_data*) ;
 struct wpabuf* FUNC_6 (struct wps_data*) ;
 struct wpabuf* FUNC_7 (struct wps_data*) ;
 struct wpabuf* FUNC_8 (struct wps_data*) ;
 struct wpabuf* FUNC_9 (struct wps_data*) ;

struct wpabuf * FUNC_10(struct wps_data *VAR_6,
         enum wsc_op_code *VAR_7)
{
 struct wpabuf *VAR_8;

 switch (VAR_6->state) {
 case 133:
  VAR_8 = FUNC_3(VAR_6);
  *VAR_7 = VAR_4;
  break;
 case 132:
  VAR_8 = FUNC_4(VAR_6);
  *VAR_7 = VAR_4;
  break;
 case 131:
  VAR_8 = FUNC_5(VAR_6);
  *VAR_7 = VAR_4;
  break;
 case 130:
  VAR_8 = FUNC_6(VAR_6);
  *VAR_7 = VAR_4;
  break;
 case 134:
  if (VAR_6->wps->ap) {
   VAR_8 = FUNC_9(VAR_6);
   *VAR_7 = VAR_5;
   break;
  }
  VAR_8 = FUNC_7(VAR_6);
  *VAR_7 = VAR_2;
  if (VAR_8) {

   VAR_6->state = VAR_1;
  }
  break;
 case 129:
  VAR_8 = FUNC_9(VAR_6);
  *VAR_7 = VAR_5;
  break;
 case 128:
  VAR_8 = FUNC_8(VAR_6);
  *VAR_7 = VAR_3;
  break;
 default:
  FUNC_0(VAR_0, "WPS: Unsupported state %d for building "
      "a message", VAR_6->state);
  VAR_8 = ((void*)0);
  break;
 }

 if (*VAR_7 == VAR_4 && VAR_8) {


  FUNC_2(VAR_6->last_msg);
  VAR_6->last_msg = FUNC_1(VAR_8);
 }

 return VAR_8;
}
