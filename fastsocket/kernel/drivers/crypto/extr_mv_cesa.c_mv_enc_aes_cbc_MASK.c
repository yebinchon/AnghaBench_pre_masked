
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_req_ctx {scalar_t__ decrypt; int op; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 struct mv_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (struct ablkcipher_request*) ;

__attribute__((used)) static int FUNC_2(struct ablkcipher_request *VAR_1)
{
 struct mv_req_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_2->op = VAR_0;
 VAR_2->decrypt = 0;

 return FUNC_1(VAR_1);
}
