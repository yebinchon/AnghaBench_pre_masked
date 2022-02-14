
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct wpabuf {int dummy; } ;
struct eap_hdr {int length; } ;
typedef scalar_t__ const EapType ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct wpabuf const*,int) ;
 int FUNC_4 (int ,char*) ;
 struct eap_hdr* FUNC_5 (struct wpabuf const*) ;

const u8 * FUNC_6(int VAR_3, EapType VAR_4,
       const struct wpabuf *VAR_5, size_t *VAR_6)
{
 const struct eap_hdr *VAR_7;
 const u8 *VAR_8;
 size_t VAR_9;

 if (!FUNC_3(VAR_5, 1))
  return ((void*)0);

 VAR_7 = FUNC_5(VAR_5);
 VAR_9 = FUNC_2(VAR_7->length);
 VAR_8 = (const u8 *) (VAR_7 + 1);

 if (*VAR_8 == VAR_0) {
  int VAR_10;
  u32 VAR_11;
  if (VAR_9 < sizeof(*VAR_7) + 8) {
   FUNC_4(VAR_2, "EAP: Invalid expanded EAP "
       "length");
   return ((void*)0);
  }
  VAR_8++;
  VAR_10 = FUNC_0(VAR_8);
  VAR_8 += 3;
  VAR_11 = FUNC_1(VAR_8);
  VAR_8 += 4;
  if (VAR_10 != VAR_3 || VAR_11 != (u32) VAR_4) {
   FUNC_4(VAR_2, "EAP: Invalid expanded frame "
       "type");
   return ((void*)0);
  }

  *VAR_6 = VAR_9 - sizeof(*VAR_7) - 8;
  return VAR_8;
 } else {
  if (VAR_3 != VAR_1 || *VAR_8 != VAR_4) {
   FUNC_4(VAR_2, "EAP: Invalid frame type");
   return ((void*)0);
  }
  *VAR_6 = VAR_9 - sizeof(*VAR_7) - 1;
  return VAR_8 + 1;
 }
}
