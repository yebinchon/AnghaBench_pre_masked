
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_blocks; } ;
typedef int s64 ;
struct TYPE_4__ {int sb_bsize; } ;
struct TYPE_5__ {TYPE_1__ sd_sb; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static inline void FUNC_2(struct inode *VAR_1, s64 VAR_2)
{
 FUNC_1(FUNC_0(VAR_1), (VAR_2 >= 0 || VAR_1->i_blocks > -VAR_2));
 VAR_2 *= (FUNC_0(VAR_1)->sd_sb.sb_bsize/VAR_0);
 VAR_1->i_blocks += VAR_2;
}
