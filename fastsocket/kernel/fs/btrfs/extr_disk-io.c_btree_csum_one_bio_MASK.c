
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct btrfs_root {int dummy; } ;
struct bio_vec {TYPE_2__* bv_page; } ;
struct bio {int bi_vcnt; struct bio_vec* bi_io_vec; } ;
struct TYPE_6__ {struct btrfs_root* root; } ;
struct TYPE_5__ {TYPE_1__* mapping; } ;
struct TYPE_4__ {int host; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct btrfs_root*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct bio *VAR_0)
{
 struct bio_vec *VAR_1 = VAR_0->bi_io_vec;
 int VAR_2 = 0;
 struct btrfs_root *VAR_3;
 int VAR_4 = 0;

 FUNC_1(VAR_0->bi_vcnt <= 0);
 while (VAR_2 < VAR_0->bi_vcnt) {
  VAR_3 = FUNC_0(VAR_1->bv_page->mapping->host)->root;
  VAR_4 = FUNC_2(VAR_3, VAR_1->bv_page);
  if (VAR_4)
   break;
  VAR_2++;
  VAR_1++;
 }
 return VAR_4;
}
