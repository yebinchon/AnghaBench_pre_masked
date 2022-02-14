
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct nameidata*,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct nameidata *VAR_2)
{
 if (FUNC_0(VAR_1)->version == 2)
  return 0;
 return VAR_2 && FUNC_1(VAR_2, VAR_0);
}
