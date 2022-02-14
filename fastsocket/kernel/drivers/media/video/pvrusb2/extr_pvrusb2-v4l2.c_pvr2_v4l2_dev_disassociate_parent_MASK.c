
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int * parent; } ;
struct pvr2_v4l2_dev {TYPE_1__ devbase; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct pvr2_v4l2_dev *VAR_1)
{
 if (!VAR_1) return;
 if (!VAR_1->devbase.parent) return;
 VAR_1->devbase.parent = ((void*)0);
 FUNC_0(&VAR_1->devbase.dev, ((void*)0), VAR_0);
}
