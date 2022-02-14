
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * bio; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ type; scalar_t__ objectid; } ;
struct btrfsic_block {scalar_t__ flush_gen; scalar_t__ submit_bio_bh_rw; int ref_from_list; int ref_to_list; int all_blocks_node; int collision_resolving_node; TYPE_2__ orig_bio_bh_end_io; int * orig_bio_bh_private; int * next_in_same_bio; scalar_t__ mirror_num; scalar_t__ never_written; scalar_t__ iodone_w_error; scalar_t__ is_iodone; scalar_t__ is_superblock; scalar_t__ is_metadata; TYPE_1__ disk_key; int generation; scalar_t__ logical_bytenr; scalar_t__ dev_bytenr; int * dev_state; int magic_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct btrfsic_block *VAR_2)
{
 VAR_2->magic_num = VAR_0;
 VAR_2->dev_state = ((void*)0);
 VAR_2->dev_bytenr = 0;
 VAR_2->logical_bytenr = 0;
 VAR_2->generation = VAR_1;
 VAR_2->disk_key.objectid = 0;
 VAR_2->disk_key.type = 0;
 VAR_2->disk_key.offset = 0;
 VAR_2->is_metadata = 0;
 VAR_2->is_superblock = 0;
 VAR_2->is_iodone = 0;
 VAR_2->iodone_w_error = 0;
 VAR_2->never_written = 0;
 VAR_2->mirror_num = 0;
 VAR_2->next_in_same_bio = ((void*)0);
 VAR_2->orig_bio_bh_private = ((void*)0);
 VAR_2->orig_bio_bh_end_io.bio = ((void*)0);
 FUNC_0(&VAR_2->collision_resolving_node);
 FUNC_0(&VAR_2->all_blocks_node);
 FUNC_0(&VAR_2->ref_to_list);
 FUNC_0(&VAR_2->ref_from_list);
 VAR_2->submit_bio_bh_rw = 0;
 VAR_2->flush_gen = 0;
}
