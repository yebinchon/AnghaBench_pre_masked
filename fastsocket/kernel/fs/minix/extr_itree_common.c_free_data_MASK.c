
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ block_t ;


 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct inode*,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct inode *VAR_0, block_t *VAR_1, block_t *VAR_2)
{
 unsigned long VAR_3;

 for ( ; VAR_1 < VAR_2 ; VAR_1++) {
  VAR_3 = FUNC_0(*VAR_1);
  if (VAR_3) {
   *VAR_1 = 0;
   FUNC_1(VAR_0, VAR_3);
  }
 }
}
