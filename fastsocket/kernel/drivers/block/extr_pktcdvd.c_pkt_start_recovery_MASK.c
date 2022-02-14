
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_2__* s_op; } ;
struct request {TYPE_1__* rq_disk; } ;
struct pktcdvd_device {int pkt_dev; } ;
struct packet_data {int sector; int frames; TYPE_3__* bio; struct request* rq; } ;
struct block_device {int dummy; } ;
typedef void* sector_t ;
struct TYPE_6__ {int bi_flags; int bi_rw; int bi_vcnt; int bi_size; scalar_t__ bi_end_io; struct packet_data* bi_private; scalar_t__ bi_idx; int * bi_next; void* bi_sector; } ;
struct TYPE_5__ {scalar_t__ (* relocate_blocks ) (struct super_block*,unsigned long,unsigned long*) ;} ;
struct TYPE_4__ {struct pktcdvd_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct block_device* FUNC_1 (int ) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct super_block*) ;
 struct super_block* FUNC_4 (struct block_device*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (struct super_block*,unsigned long,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct packet_data *VAR_4)
{




 return 0;
}
