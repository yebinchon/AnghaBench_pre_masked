
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2x {int flags; TYPE_3__* dev; TYPE_2__* pdev; TYPE_1__* msix_table; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {unsigned int irq; } ;
struct TYPE_4__ {unsigned int vector; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int ,unsigned long,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;

 if (VAR_4->flags & (VAR_2 | VAR_1))
  VAR_5 = 0;
 else
  VAR_5 = VAR_0;

 if (VAR_4->flags & VAR_1)
  VAR_6 = VAR_4->msix_table[0].vector;
 else
  VAR_6 = VAR_4->pdev->irq;

 return FUNC_0(VAR_6, VAR_3, VAR_5, VAR_4->dev->name, VAR_4->dev);
}
