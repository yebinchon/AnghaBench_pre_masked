
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_blocks; } ;
struct TYPE_3__ {int sb_bsize_shift; } ;
struct TYPE_4__ {TYPE_1__ sd_sb; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_1, u64 VAR_2)
{
 VAR_1->i_blocks = VAR_2 <<
  (FUNC_0(VAR_1)->sd_sb.sb_bsize_shift - VAR_0);
}
