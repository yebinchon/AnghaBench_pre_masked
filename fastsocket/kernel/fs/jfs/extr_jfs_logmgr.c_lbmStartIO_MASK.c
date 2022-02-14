
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lbuf {int l_blkno; int l_offset; int l_page; struct jfs_log* l_log; } ;
struct jfs_log {int l2bsize; scalar_t__ no_integrity; int bdev; } ;
struct bio {int bi_sector; int bi_vcnt; void* bi_size; struct lbuf* bi_private; int (* bi_end_io ) (struct bio*,int ) ;scalar_t__ bi_idx; TYPE_1__* bi_io_vec; int bi_bdev; } ;
struct TYPE_4__ {int submitted; } ;
struct TYPE_3__ {int bv_offset; void* bv_len; int bv_page; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 struct bio* FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct bio*,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (int ,struct bio*) ;

__attribute__((used)) static void FUNC_5(struct lbuf * VAR_4)
{
 struct bio *VAR_5;
 struct jfs_log *VAR_6 = VAR_4->l_log;

 FUNC_2("lbmStartIO\n");

 VAR_5 = FUNC_1(VAR_0, 1);
 VAR_5->bi_sector = VAR_4->l_blkno << (VAR_6->l2bsize - 9);
 VAR_5->bi_bdev = VAR_6->bdev;
 VAR_5->bi_io_vec[0].bv_page = VAR_4->l_page;
 VAR_5->bi_io_vec[0].bv_len = VAR_1;
 VAR_5->bi_io_vec[0].bv_offset = VAR_4->l_offset;

 VAR_5->bi_vcnt = 1;
 VAR_5->bi_idx = 0;
 VAR_5->bi_size = VAR_1;

 VAR_5->bi_end_io = FUNC_3;
 VAR_5->bi_private = VAR_4;


 if (VAR_6->no_integrity) {
  VAR_5->bi_size = 0;
  FUNC_3(VAR_5, 0);
 } else {
  FUNC_4(VAR_2, VAR_5);
  FUNC_0(VAR_3.submitted);
 }
}
