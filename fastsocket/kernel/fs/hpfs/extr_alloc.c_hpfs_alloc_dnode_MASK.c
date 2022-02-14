
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct dnode {int first_free; int* dirent; int self; int magic; } ;
typedef int secno ;
typedef int dnode_secno ;
struct TYPE_2__ {int sb_dmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct super_block*,int ,int) ;
 int FUNC_1 (struct super_block*,int ,int,int ,int) ;
 scalar_t__ FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,int ) ;
 struct dnode* FUNC_4 (struct super_block*,int ,struct quad_buffer_head*) ;
 TYPE_1__* FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct dnode*,int ,int) ;

struct dnode *FUNC_7(struct super_block *VAR_2, secno VAR_3,
    dnode_secno *VAR_4, struct quad_buffer_head *VAR_5,
    int VAR_6)
{
 struct dnode *VAR_7;
 if (FUNC_2(VAR_2, FUNC_5(VAR_2)->sb_dmap) > VAR_1) {
  if (!(*VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_6)))
   if (!(*VAR_4 = FUNC_1(VAR_2, VAR_3, 4, 0, VAR_6))) return ((void*)0);
 } else {
  if (!(*VAR_4 = FUNC_1(VAR_2, VAR_3, 4, 0, VAR_6)))
   if (!(*VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_6))) return ((void*)0);
 }
 if (!(VAR_7 = FUNC_4(VAR_2, *VAR_4, VAR_5))) {
  FUNC_3(VAR_2, *VAR_4);
  return ((void*)0);
 }
 FUNC_6(VAR_7, 0, 2048);
 VAR_7->magic = VAR_0;
 VAR_7->first_free = 52;
 VAR_7->dirent[0] = 32;
 VAR_7->dirent[2] = 8;
 VAR_7->dirent[30] = 1;
 VAR_7->dirent[31] = 255;
 VAR_7->self = *VAR_4;
 return VAR_7;
}
