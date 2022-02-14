
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_blkbits; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static inline int FUNC_3(struct inode *VAR_1,
      u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 < VAR_2 || VAR_4 > VAR_3)
  goto err;
 if (VAR_4 & ((1 << VAR_1->i_blkbits) - 1))
  goto err;
 return 0;
err:
 FUNC_1(FUNC_0(VAR_1));
 return -VAR_0;
}
