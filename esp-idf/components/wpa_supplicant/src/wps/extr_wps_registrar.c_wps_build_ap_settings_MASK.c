
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_data {int cred; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf*,int *) ;

__attribute__((used)) static int FUNC_2(struct wps_data *VAR_1, struct wpabuf *VAR_2)
{
 FUNC_0(VAR_0, "WPS:  * AP Settings");

 if (FUNC_1(VAR_2, &VAR_1->cred))
  return -1;

 return 0;
}
