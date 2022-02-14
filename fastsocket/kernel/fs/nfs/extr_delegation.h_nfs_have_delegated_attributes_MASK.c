
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int cache_validity; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_2)
{
 return FUNC_1(VAR_2, VAR_0) &&
  !(FUNC_0(VAR_2)->cache_validity & VAR_1);
}
