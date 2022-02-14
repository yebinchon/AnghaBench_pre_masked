
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct st6422_settings {TYPE_1__* ctrls; } ;
struct sd {struct st6422_settings* sensor_priv; } ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sd*,int,int) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_1)
{
 struct st6422_settings *VAR_2 = VAR_1->sensor_priv;
 u16 VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->ctrls[VAR_0].val;
 VAR_4 = FUNC_0(VAR_1, 0x143d, VAR_3 & 0xff);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_1, 0x143e, VAR_3 >> 8);
}
