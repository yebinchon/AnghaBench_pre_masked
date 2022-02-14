
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_hdr {int identifier; } ;


 struct eap_hdr* FUNC_0 (struct wpabuf const*) ;
 int FUNC_1 (struct wpabuf const*) ;

u8 FUNC_2(const struct wpabuf *VAR_0)
{
 const struct eap_hdr *VAR_1;

 if (FUNC_1(VAR_0) < sizeof(*VAR_1))
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->identifier;
}
