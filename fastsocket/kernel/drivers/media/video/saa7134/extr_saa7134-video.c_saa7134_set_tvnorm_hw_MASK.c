
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7134_dev {TYPE_1__* tvnorm; int ctl_input; } ;
struct TYPE_4__ {scalar_t__ tv; } ;
struct TYPE_3__ {int id; } ;


 TYPE_2__ FUNC_0 (struct saa7134_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (struct saa7134_dev*,int ,int ,int ) ;
 int FUNC_3 (struct saa7134_dev*,int ,int ,int ) ;

void FUNC_4(struct saa7134_dev *VAR_2)
{
 FUNC_1(VAR_2);

 if (FUNC_0(VAR_2, VAR_2->ctl_input).tv)
  FUNC_2(VAR_2, VAR_0, VAR_1, VAR_2->tvnorm->id);


 FUNC_3(VAR_2, VAR_0, VAR_1, VAR_2->tvnorm->id);
}
