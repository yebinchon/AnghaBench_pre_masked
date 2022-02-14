
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_device_data {char* serial_number; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,int const*,size_t) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct wps_device_data *VAR_1,
         const u8 *VAR_2, size_t VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_4(VAR_0, "WPS: No Serial Number received");
  return -1;
 }

 FUNC_3(VAR_0, "WPS: Serial Number", VAR_2, VAR_3);

 FUNC_0(VAR_1->serial_number);
 VAR_1->serial_number = (char *)FUNC_1(VAR_3 + 1);
 if (VAR_1->serial_number == ((void*)0))
  return -1;
 FUNC_2(VAR_1->serial_number, VAR_2, VAR_3);
 VAR_1->serial_number[VAR_3] = '\0';

 return 0;
}
