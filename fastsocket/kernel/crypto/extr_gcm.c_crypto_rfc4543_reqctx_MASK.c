
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void crypto_rfc4543_req_ctx ;
struct aead_request {int dummy; } ;


 scalar_t__ FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (struct aead_request*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct aead_request*) ;

__attribute__((used)) static inline struct crypto_rfc4543_req_ctx *FUNC_4(
 struct aead_request *VAR_0)
{
 unsigned long VAR_1 = FUNC_2(FUNC_3(VAR_0));

 return (void *)FUNC_0((u8 *)FUNC_1(VAR_0), VAR_1 + 1);
}
