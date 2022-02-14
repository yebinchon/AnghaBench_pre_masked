
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minix_sb_info {scalar_t__ s_ninodes; int s_imap_blocks; int s_imap; } ;


 unsigned long FUNC_0 (int ,int ,scalar_t__) ;

unsigned long FUNC_1(struct minix_sb_info *VAR_0)
{
 return FUNC_0(VAR_0->s_imap, VAR_0->s_imap_blocks, VAR_0->s_ninodes + 1);
}
