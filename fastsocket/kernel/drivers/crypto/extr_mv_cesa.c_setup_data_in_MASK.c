
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ablkcipher_request {int dummy; } ;
struct TYPE_5__ {void* addr; scalar_t__ length; } ;
struct TYPE_4__ {scalar_t__ crypt_len; scalar_t__ src_start; scalar_t__ sg_src_left; TYPE_2__ src_sg_it; } ;
struct TYPE_6__ {TYPE_1__ p; scalar_t__ sram; int max_req_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (scalar_t__,void*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct ablkcipher_request *VAR_2)
{
 int VAR_3;
 void *VAR_4;

 if (!VAR_1->p.sg_src_left) {
  VAR_3 = FUNC_3(&VAR_1->p.src_sg_it);
  FUNC_0(!VAR_3);
  VAR_1->p.sg_src_left = VAR_1->p.src_sg_it.length;
  VAR_1->p.src_start = 0;
 }

 VAR_1->p.crypt_len = FUNC_2(VAR_1->p.sg_src_left, VAR_1->max_req_size);

 VAR_4 = VAR_1->p.src_sg_it.addr;
 VAR_4 += VAR_1->p.src_start;

 FUNC_1(VAR_1->sram + VAR_0, VAR_4, VAR_1->p.crypt_len);

 VAR_1->p.sg_src_left -= VAR_1->p.crypt_len;
 VAR_1->p.src_start += VAR_1->p.crypt_len;
}
