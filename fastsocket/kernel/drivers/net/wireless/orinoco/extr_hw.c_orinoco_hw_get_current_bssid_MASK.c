
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {struct hermes hw; } ;
struct TYPE_2__ {int (* read_ltv ) (struct hermes*,int ,int ,int ,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hermes*,int ,int ,int ,int *,int *) ;

int FUNC_1(struct orinoco_private *VAR_3,
     u8 *VAR_4)
{
 struct hermes *VAR_5 = &VAR_3->hw;
 int VAR_6;

 VAR_6 = VAR_5->ops->read_ltv(VAR_5, VAR_2, VAR_1,
    VAR_0, ((void*)0), VAR_4);

 return VAR_6;
}
