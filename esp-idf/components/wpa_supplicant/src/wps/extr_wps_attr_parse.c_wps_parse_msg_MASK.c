
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct wps_parse_attr {int dummy; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct wps_parse_attr*,int ,int) ;
 int FUNC_2 (int ,char*,struct wpabuf const*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__* FUNC_4 (struct wpabuf const*) ;
 int FUNC_5 (struct wpabuf const*) ;
 scalar_t__ FUNC_6 (struct wps_parse_attr*,int,scalar_t__ const*,int) ;

int FUNC_7(const struct wpabuf *VAR_3, struct wps_parse_attr *VAR_4)
{
 const u8 *VAR_5, *VAR_6;
 u16 VAR_7, VAR_8;




 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_5 = FUNC_4(VAR_3);
 VAR_6 = VAR_5 + FUNC_5(VAR_3);

 while (VAR_5 < VAR_6) {
  if (VAR_6 - VAR_5 < 4) {
   FUNC_3(VAR_1, "WPS: Invalid message - "
       "%lu bytes remaining",
       (unsigned long) (VAR_6 - VAR_5));
   return -1;
  }

  VAR_7 = FUNC_0(VAR_5);
  VAR_5 += 2;
  VAR_8 = FUNC_0(VAR_5);
  VAR_5 += 2;
  FUNC_3(VAR_1, "WPS: attr type=0x%x len=%u",
      VAR_7, VAR_8);
  if (VAR_8 > VAR_6 - VAR_5) {
   FUNC_3(VAR_1, "WPS: Attribute overflow");
   FUNC_2(VAR_2, "WPS: Message data", VAR_3);
   return -1;
  }
  if (FUNC_6(VAR_4, VAR_7, VAR_5, VAR_8) < 0)
   return -1;




  VAR_5 += VAR_8;
 }

 return 0;
}
