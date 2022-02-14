
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_mapping; } ;
typedef int sector_t ;
struct TYPE_4__ {TYPE_1__* a_ops; } ;
struct TYPE_3__ {int (* bmap ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;

sector_t FUNC_1(struct inode *VAR_0, sector_t VAR_1)
{
 sector_t VAR_2 = 0;
 if (VAR_0->i_mapping->a_ops->bmap)
  VAR_2 = VAR_0->i_mapping->a_ops->bmap(VAR_0->i_mapping, VAR_1);
 return VAR_2;
}
