
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ap_data {TYPE_1__* crypt; int crypt_priv; } ;
struct TYPE_2__ {scalar_t__ extra_mpdu_prefix_len; scalar_t__ (* encrypt_mpdu ) (struct sk_buff*,int ,int ) ;scalar_t__ extra_mpdu_postfix_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ap_data*) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__,char*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static char * FUNC_11(struct ap_data *VAR_3)
{
 char *VAR_4;
 struct sk_buff *VAR_5;

 if (VAR_3->crypt == ((void*)0)) {
  FUNC_1(VAR_3);
  if (VAR_3->crypt == ((void*)0))
   return ((void*)0);
 }

 VAR_4 = FUNC_5(VAR_2, VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_0, "AP: kmalloc failed for challenge\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_2(VAR_2 +
       VAR_3->crypt->extra_mpdu_prefix_len +
       VAR_3->crypt->extra_mpdu_postfix_len);
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_4);
  return ((void*)0);
 }

 FUNC_9(VAR_5, VAR_3->crypt->extra_mpdu_prefix_len);
 FUNC_6(FUNC_8(VAR_5, VAR_2), 0,
        VAR_2);
 if (VAR_3->crypt->encrypt_mpdu(VAR_5, 0, VAR_3->crypt_priv)) {
  FUNC_3(VAR_5);
  FUNC_4(VAR_4);
  return ((void*)0);
 }

 FUNC_7(VAR_5, VAR_3->crypt->extra_mpdu_prefix_len,
      VAR_4, VAR_2);
 FUNC_3(VAR_5);

 return VAR_4;
}
