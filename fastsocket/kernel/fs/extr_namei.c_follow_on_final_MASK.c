
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; TYPE_1__* i_op; } ;
struct TYPE_2__ {int follow_link; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_1, unsigned VAR_2)
{
 return VAR_1 && FUNC_1(VAR_1->i_op->follow_link) &&
  ((VAR_2 & VAR_0) || FUNC_0(VAR_1->i_mode));
}
