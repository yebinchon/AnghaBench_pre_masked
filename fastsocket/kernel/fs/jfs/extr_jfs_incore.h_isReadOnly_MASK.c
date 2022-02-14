
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ log; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0->i_sb)->log)
  return 0;
 return 1;
}
