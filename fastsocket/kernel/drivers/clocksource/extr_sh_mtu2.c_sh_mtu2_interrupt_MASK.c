
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct sh_mtu2_priv {TYPE_1__ ced; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_mtu2_priv*,int ) ;
 int FUNC_1 (struct sh_mtu2_priv*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct sh_mtu2_priv *VAR_4 = VAR_3;


 FUNC_0(VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_1, 0xfe);


 VAR_4->ced.event_handler(&VAR_4->ced);
 return VAR_0;
}
