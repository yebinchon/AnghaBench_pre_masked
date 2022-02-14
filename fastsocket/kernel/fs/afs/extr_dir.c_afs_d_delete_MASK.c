
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct dentry {int d_flags; scalar_t__ d_inode; TYPE_1__ d_name; } ;
struct TYPE_4__ {int flags; } ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_2)
{
 FUNC_1("%s", VAR_2->d_name.name);

 if (VAR_2->d_flags & VAR_1)
  goto zap;

 if (VAR_2->d_inode &&
     FUNC_3(VAR_0, &FUNC_0(VAR_2->d_inode)->flags))
   goto zap;

 FUNC_2(" = 0 [keep]");
 return 0;

zap:
 FUNC_2(" = 1 [zap]");
 return 1;
}
