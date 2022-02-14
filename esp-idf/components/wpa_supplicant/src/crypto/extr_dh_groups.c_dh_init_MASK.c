
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct dh_group {size_t prime_len; int prime; int generator_len; int generator; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,size_t,int ,size_t*) ;
 scalar_t__ FUNC_1 (int ,int ,size_t) ;
 scalar_t__ FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*,struct wpabuf*) ;
 int FUNC_5 (int ,char*) ;
 struct wpabuf* FUNC_6 (size_t) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 scalar_t__* FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,size_t) ;

struct wpabuf *
FUNC_13(const struct dh_group *VAR_2, struct wpabuf **VAR_3)
{
 struct wpabuf *VAR_4;
 size_t VAR_5;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_7(*VAR_3);
 *VAR_3 = FUNC_6(VAR_2->prime_len);
 if (*VAR_3 == ((void*)0))
  return ((void*)0);

 if (FUNC_2(FUNC_12(*VAR_3, VAR_2->prime_len), VAR_2->prime_len))
 {
  FUNC_7(*VAR_3);
  *VAR_3 = ((void*)0);
  return ((void*)0);
 }

 if (FUNC_1(FUNC_8(*VAR_3), VAR_2->prime, VAR_2->prime_len) > 0) {

  *(FUNC_11(*VAR_3)) = 0;
 }
 FUNC_4(VAR_0, "DH: private value", *VAR_3);

 VAR_5 = VAR_2->prime_len;
 VAR_4 = FUNC_6(VAR_5);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_2->generator, VAR_2->generator_len,
      FUNC_8(*VAR_3), FUNC_9(*VAR_3),
      VAR_2->prime, VAR_2->prime_len, FUNC_10(VAR_4),
      &VAR_5)) {
  FUNC_7(VAR_4);
  FUNC_5(VAR_1, "DH: crypto_mod_exp failed");
  return ((void*)0);
 }
 FUNC_12(VAR_4, VAR_5);
 FUNC_3(VAR_0, "DH: public value", VAR_4);

 return VAR_4;
}
