
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_inode; } ;
struct TYPE_4__ {scalar_t__ nrpages; } ;
struct TYPE_3__ {TYPE_2__* i_mapping; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct block_device *VAR_0)
{
 if (VAR_0->bd_inode->i_mapping->nrpages == 0)
  return;
 FUNC_0();
 FUNC_1(VAR_0->bd_inode->i_mapping, 0);
}
