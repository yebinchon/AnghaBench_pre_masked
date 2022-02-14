
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbuf {int l_blkno; int l_flag; int l_ioevent; int l_offset; int l_page; } ;
struct jfs_log {int l2bsize; int bdev; } ;
struct bio {int bi_sector; int bi_vcnt; struct lbuf* bi_private; int bi_end_io; void* bi_size; scalar_t__ bi_idx; TYPE_1__* bi_io_vec; int bi_bdev; } ;
struct TYPE_2__ {int bv_offset; void* bv_len; int bv_page; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 struct bio* FUNC_0 (int ,int) ;
 int FUNC_1 (char*,struct lbuf*,int) ;
 struct lbuf* FUNC_2 (struct jfs_log*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct bio*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct jfs_log * VAR_5, int VAR_6, struct lbuf ** VAR_7)
{
 struct bio *VAR_8;
 struct lbuf *VAR_9;




 *VAR_7 = VAR_9 = FUNC_2(VAR_5, VAR_6);
 FUNC_1("lbmRead: bp:0x%p pn:0x%x", VAR_9, VAR_6);

 VAR_9->l_flag |= VAR_4;

 VAR_8 = FUNC_0(VAR_0, 1);

 VAR_8->bi_sector = VAR_9->l_blkno << (VAR_5->l2bsize - 9);
 VAR_8->bi_bdev = VAR_5->bdev;
 VAR_8->bi_io_vec[0].bv_page = VAR_9->l_page;
 VAR_8->bi_io_vec[0].bv_len = VAR_1;
 VAR_8->bi_io_vec[0].bv_offset = VAR_9->l_offset;

 VAR_8->bi_vcnt = 1;
 VAR_8->bi_idx = 0;
 VAR_8->bi_size = VAR_1;

 VAR_8->bi_end_io = VAR_3;
 VAR_8->bi_private = VAR_9;
 FUNC_3(VAR_2, VAR_8);

 FUNC_4(VAR_9->l_ioevent, (VAR_9->l_flag != VAR_4));

 return 0;
}
