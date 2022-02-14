
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int cache_validity; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;

__attribute__((used)) static bool FUNC_4(struct inode *VAR_1)
{
 if (FUNC_3(VAR_1))
  return 0;
 return (FUNC_0(VAR_1)->cache_validity & VAR_0)
  || FUNC_2(VAR_1)
  || FUNC_1(VAR_1);
}
