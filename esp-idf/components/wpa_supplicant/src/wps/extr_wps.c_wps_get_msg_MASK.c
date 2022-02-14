
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_data {scalar_t__ registrar; } ;
struct wpabuf {int dummy; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;


 struct wpabuf* FUNC_0 (struct wps_data*,int*) ;
 struct wpabuf* FUNC_1 (struct wps_data*,int*) ;

struct wpabuf * FUNC_2(struct wps_data *VAR_0, enum wsc_op_code *VAR_1)
{
    if (VAR_0->registrar)
        return FUNC_1(VAR_0, VAR_1);
    else
        return FUNC_0(VAR_0, VAR_1);
}
