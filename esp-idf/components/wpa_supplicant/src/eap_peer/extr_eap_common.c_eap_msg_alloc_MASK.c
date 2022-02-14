
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wpabuf {int dummy; } ;
struct eap_hdr {int length; void* identifier; void* code; } ;
typedef int EapType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 struct wpabuf* FUNC_1 (size_t) ;
 struct eap_hdr* FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int ) ;

struct wpabuf * FUNC_6(int VAR_2, EapType VAR_3, size_t VAR_4,
         u8 VAR_5, u8 VAR_6)
{
 struct wpabuf *VAR_7;
 struct eap_hdr *VAR_8;
 size_t VAR_9;

 VAR_9 = sizeof(struct eap_hdr) + (VAR_2 == VAR_1 ? 1 : 8) +
  VAR_4;
 VAR_7 = FUNC_1(VAR_9);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_2(VAR_7, sizeof(*VAR_8));
 VAR_8->code = VAR_5;
 VAR_8->identifier = VAR_6;
 VAR_8->length = FUNC_0(VAR_9);

 if (VAR_2 == VAR_1) {
  FUNC_5(VAR_7, VAR_3);
 } else {
  FUNC_5(VAR_7, VAR_0);
  FUNC_3(VAR_7, VAR_2);
  FUNC_4(VAR_7, VAR_3);
 }

 return VAR_7;
}
