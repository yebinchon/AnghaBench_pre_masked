
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int channel; } ;
struct zd_chip {int mutex; TYPE_1__ rf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u8 FUNC_2(struct zd_chip *VAR_0)
{
 u8 VAR_1;

 FUNC_0(&VAR_0->mutex);
 VAR_1 = VAR_0->rf.channel;
 FUNC_1(&VAR_0->mutex);
 return VAR_1;
}
