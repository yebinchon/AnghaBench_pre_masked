
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct inode {int i_size; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_blocksize; } ;



__attribute__((used)) static inline u_long
FUNC_0(struct inode *VAR_0)
{
 u_long VAR_1 = VAR_0->i_sb->s_blocksize;
 return (VAR_0->i_size + VAR_1 - 1) & ~(VAR_1 - 1);
}
