
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nrpages; } ;
struct inode {TYPE_1__ i_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 if (!FUNC_2(VAR_0))
  return;
 if (VAR_0->i_data.nrpages)
  FUNC_3(&VAR_0->i_data, 0);
 FUNC_0(VAR_0);
 FUNC_4(VAR_0);
 FUNC_1(VAR_0);
}
