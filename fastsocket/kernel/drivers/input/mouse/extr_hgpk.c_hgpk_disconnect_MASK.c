
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* serio; } ;
struct psmouse {scalar_t__ model; TYPE_2__ ps2dev; struct hgpk_data* private; } ;
struct hgpk_data {int dummy; } ;
struct TYPE_8__ {int dattr; } ;
struct TYPE_7__ {int dattr; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hgpk_data*) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (struct psmouse*) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_3)
{
 struct hgpk_data *VAR_4 = VAR_3->private;

 FUNC_0(&VAR_3->ps2dev.serio->dev,
      &VAR_1.dattr);

 if (VAR_3->model >= VAR_0)
  FUNC_0(&VAR_3->ps2dev.serio->dev,
       &VAR_2.dattr);

 FUNC_2(VAR_3);
 FUNC_1(VAR_4);
}
