
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_retry_limit {int long_retry_limit; int short_retry_limit; } ;
struct ipw_priv {int dummy; } ;
typedef int retry_limit ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ipw_priv*,int ,int,struct ipw_retry_limit*) ;

__attribute__((used)) static int FUNC_2(struct ipw_priv *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct ipw_retry_limit VAR_4 = {
  .short_retry_limit = VAR_2,
  .long_retry_limit = VAR_3
 };

 if (!VAR_1) {
  FUNC_0("Invalid args\n");
  return -1;
 }

 return FUNC_1(VAR_1, VAR_0, sizeof(VAR_4),
    &VAR_4);
}
