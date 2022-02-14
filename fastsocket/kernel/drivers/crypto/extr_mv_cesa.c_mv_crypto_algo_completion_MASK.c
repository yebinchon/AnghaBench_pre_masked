
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_req_ctx {scalar_t__ op; } ;
struct ablkcipher_request {int info; } ;
struct TYPE_2__ {scalar_t__ sram; struct ablkcipher_request* cur_req; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mv_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct ablkcipher_request *VAR_3 = VAR_2->cur_req;
 struct mv_req_ctx *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->op != VAR_0)
  return ;

 FUNC_1(VAR_3->info, VAR_2->sram + VAR_1, 16);
}
