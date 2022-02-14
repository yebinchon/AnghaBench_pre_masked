
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_req_ctx {int decrypt; int op; } ;
struct mv_ctx {int dummy; } ;
struct TYPE_2__ {int tfm; } ;
struct ablkcipher_request {TYPE_1__ base; } ;


 int VAR_0 ;
 struct mv_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (struct mv_ctx*) ;
 struct mv_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct ablkcipher_request*) ;

__attribute__((used)) static int FUNC_4(struct ablkcipher_request *VAR_1)
{
 struct mv_ctx *VAR_2 = FUNC_2(VAR_1->base.tfm);
 struct mv_req_ctx *VAR_3 = FUNC_0(VAR_1);

 VAR_3->op = VAR_0;
 VAR_3->decrypt = 1;

 FUNC_1(VAR_2);
 return FUNC_3(VAR_1);
}
