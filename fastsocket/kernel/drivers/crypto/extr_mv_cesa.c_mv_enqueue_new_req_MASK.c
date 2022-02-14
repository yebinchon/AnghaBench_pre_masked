
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct req_progress {int dummy; } ;
struct ablkcipher_request {int dst; int nbytes; int src; } ;
struct TYPE_3__ {int dst_sg_it; int src_sg_it; } ;
struct TYPE_4__ {TYPE_1__ p; struct ablkcipher_request* cur_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct ablkcipher_request *VAR_3)
{
 int VAR_4;

 VAR_2->cur_req = VAR_3;
 FUNC_1(&VAR_2->p, 0, sizeof(struct req_progress));

 VAR_4 = FUNC_0(VAR_3->src, VAR_3->nbytes);
 FUNC_3(&VAR_2->p.src_sg_it, VAR_3->src, VAR_4, VAR_0);

 VAR_4 = FUNC_0(VAR_3->dst, VAR_3->nbytes);
 FUNC_3(&VAR_2->p.dst_sg_it, VAR_3->dst, VAR_4, VAR_1);
 FUNC_2(1);
}
