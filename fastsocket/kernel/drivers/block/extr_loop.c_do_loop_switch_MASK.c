
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_request {int wait; struct file* file; } ;
struct loop_device {int old_gfp_mask; int lo_blocksize; struct file* lo_backing_file; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* i_bdev; int i_mode; } ;
struct TYPE_3__ {int bd_block_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct address_space*,int) ;

__attribute__((used)) static void FUNC_4(struct loop_device *VAR_3, struct switch_request *VAR_4)
{
 struct file *VAR_5 = VAR_4->file;
 struct file *VAR_6 = VAR_3->lo_backing_file;
 struct address_space *VAR_7;


 if (!VAR_5)
  goto out;

 VAR_7 = VAR_5->f_mapping;
 FUNC_3(VAR_6->f_mapping, VAR_3->old_gfp_mask);
 VAR_3->lo_backing_file = VAR_5;
 VAR_3->lo_blocksize = FUNC_0(VAR_7->host->i_mode) ?
  VAR_7->host->i_bdev->bd_block_size : VAR_0;
 VAR_3->old_gfp_mask = FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_3->old_gfp_mask & ~(VAR_2|VAR_1));
out:
 FUNC_1(&VAR_4->wait);
}
