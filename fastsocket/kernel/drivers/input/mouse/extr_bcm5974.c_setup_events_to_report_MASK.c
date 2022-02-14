
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct input_dev {int keybit; int evbit; } ;
struct TYPE_8__ {int fuzz; int dim; } ;
struct TYPE_7__ {int fuzz; int dim; } ;
struct TYPE_6__ {int fuzz; int dim; } ;
struct TYPE_5__ {int fuzz; int dim; } ;
struct bcm5974_config {TYPE_4__ y; TYPE_3__ x; TYPE_2__ w; TYPE_1__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_12,
       const struct bcm5974_config *VAR_13)
{
 FUNC_0(VAR_10, VAR_12->evbit);

 FUNC_1(VAR_12, VAR_0,
    0, VAR_13->p.dim, VAR_13->p.fuzz, 0);
 FUNC_1(VAR_12, VAR_1,
    0, VAR_13->w.dim, VAR_13->w.fuzz, 0);
 FUNC_1(VAR_12, VAR_2,
    0, VAR_13->x.dim, VAR_13->x.fuzz, 0);
 FUNC_1(VAR_12, VAR_3,
    0, VAR_13->y.dim, VAR_13->y.fuzz, 0);

 FUNC_0(VAR_11, VAR_12->evbit);
 FUNC_0(VAR_9, VAR_12->keybit);
 FUNC_0(VAR_6, VAR_12->keybit);
 FUNC_0(VAR_5, VAR_12->keybit);
 FUNC_0(VAR_8, VAR_12->keybit);
 FUNC_0(VAR_7, VAR_12->keybit);
 FUNC_0(VAR_4, VAR_12->keybit);
}
