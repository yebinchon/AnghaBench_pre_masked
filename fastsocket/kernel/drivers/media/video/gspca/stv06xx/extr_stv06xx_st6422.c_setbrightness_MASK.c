
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st6422_settings {TYPE_1__* ctrls; } ;
struct sd {struct st6422_settings* sensor_priv; } ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sd*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_1)
{
 struct st6422_settings *VAR_2 = VAR_1->sensor_priv;


 return FUNC_0(VAR_1, 0x1432,
   VAR_2->ctrls[VAR_0].val);
}
