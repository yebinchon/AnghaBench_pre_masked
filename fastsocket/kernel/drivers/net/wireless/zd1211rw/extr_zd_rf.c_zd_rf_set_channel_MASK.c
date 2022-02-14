
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct zd_rf {int (* set_channel ) (struct zd_rf*,scalar_t__) ;scalar_t__ channel; } ;
struct TYPE_3__ {int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_rf*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (struct zd_rf*) ;

int FUNC_6(struct zd_rf *VAR_3, u8 VAR_4)
{
 int VAR_5;

 FUNC_0(FUNC_2(&FUNC_5(VAR_3)->mutex));
 if (VAR_4 < VAR_2)
  return -VAR_0;
 if (VAR_4 > VAR_1)
  return -VAR_0;
 FUNC_1(FUNC_4(FUNC_5(VAR_3)), "channel: %d\n", VAR_4);

 VAR_5 = VAR_3->set_channel(VAR_3, VAR_4);
 if (VAR_5 >= 0)
  VAR_3->channel = VAR_4;
 return VAR_5;
}
