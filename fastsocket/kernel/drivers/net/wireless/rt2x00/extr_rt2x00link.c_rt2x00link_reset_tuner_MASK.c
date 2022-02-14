
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct link_qual {int vgc_level_reg; } ;
struct TYPE_6__ {scalar_t__ count; struct link_qual qual; } ;
struct rt2x00_dev {TYPE_2__* ops; TYPE_3__ link; int flags; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* reset_tuner ) (struct rt2x00_dev*,struct link_qual*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct link_qual*,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,struct link_qual*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct rt2x00_dev *VAR_1, bool VAR_2)
{
 struct link_qual *VAR_3 = &VAR_1->link.qual;
 u8 VAR_4 = VAR_3->vgc_level_reg;

 if (!FUNC_3(VAR_0, &VAR_1->flags))
  return;
 VAR_1->link.count = 0;
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));






 VAR_3->vgc_level_reg = VAR_4;




 VAR_1->ops->lib->reset_tuner(VAR_1, VAR_3);

 if (VAR_2)
  FUNC_1(VAR_1);
}
