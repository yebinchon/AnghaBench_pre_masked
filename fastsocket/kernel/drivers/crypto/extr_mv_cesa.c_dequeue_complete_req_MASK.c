
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* complete ) (TYPE_2__*,int ) ;} ;
struct ablkcipher_request {scalar_t__ nbytes; TYPE_2__ base; } ;
struct TYPE_8__ {void* addr; scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ total_req_bytes; scalar_t__ crypt_len; TYPE_3__ dst_sg_it; TYPE_3__ src_sg_it; scalar_t__ dst_start; scalar_t__ sg_dst_left; } ;
struct TYPE_9__ {scalar_t__ eng_st; TYPE_1__ p; scalar_t__ sram; struct ablkcipher_request* cur_req; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (void*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct ablkcipher_request *VAR_5 = VAR_4->cur_req;
 void *VAR_6;
 int VAR_7;

 VAR_4->p.total_req_bytes += VAR_4->p.crypt_len;
 do {
  int VAR_8;

  if (!VAR_4->p.sg_dst_left) {
   VAR_7 = FUNC_5(&VAR_4->p.dst_sg_it);
   FUNC_0(!VAR_7);
   VAR_4->p.sg_dst_left = VAR_4->p.dst_sg_it.length;
   VAR_4->p.dst_start = 0;
  }

  VAR_6 = VAR_4->p.dst_sg_it.addr;
  VAR_6 += VAR_4->p.dst_start;

  VAR_8 = FUNC_2(VAR_4->p.crypt_len, VAR_4->p.sg_dst_left);

  FUNC_1(VAR_6, VAR_4->sram + VAR_3, VAR_8);

  VAR_4->p.sg_dst_left -= VAR_8;
  VAR_4->p.crypt_len -= VAR_8;
  VAR_4->p.dst_start += VAR_8;
 } while (VAR_4->p.crypt_len > 0);

 FUNC_0(VAR_4->eng_st != VAR_2);
 if (VAR_4->p.total_req_bytes < VAR_5->nbytes) {

  VAR_4->eng_st = VAR_0;
  FUNC_4(0);
 } else {
  FUNC_6(&VAR_4->p.src_sg_it);
  FUNC_6(&VAR_4->p.dst_sg_it);
  FUNC_3();
  VAR_4->eng_st = VAR_1;
  VAR_5->base.complete(&VAR_5->base, 0);
 }
}
