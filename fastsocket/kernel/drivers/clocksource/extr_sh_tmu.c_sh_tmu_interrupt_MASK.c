
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int (* event_handler ) (TYPE_1__*) ;} ;
struct sh_tmu_priv {TYPE_1__ ced; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_tmu_priv*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct sh_tmu_priv *VAR_5 = VAR_4;


 if (VAR_5->ced.mode == VAR_0)
  FUNC_0(VAR_5, VAR_2, 0x0000);
 else
  FUNC_0(VAR_5, VAR_2, 0x0020);


 VAR_5->ced.event_handler(&VAR_5->ced);
 return VAR_1;
}
