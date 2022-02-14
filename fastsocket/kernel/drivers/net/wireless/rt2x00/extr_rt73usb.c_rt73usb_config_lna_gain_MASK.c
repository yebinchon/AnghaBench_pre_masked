
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct rt2x00lib_conf {TYPE_3__* conf; } ;
struct rt2x00_dev {short lna_gain; int cap_flags; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct TYPE_4__ {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_6,
        struct rt2x00lib_conf *VAR_7)
{
 u16 VAR_8;
 short VAR_9 = 0;

 if (VAR_7->conf->chandef.chan->band == VAR_5) {
  if (FUNC_2(VAR_0, &VAR_6->cap_flags))
   VAR_9 += 14;

  FUNC_0(VAR_6, VAR_3, &VAR_8);
  VAR_9 -= FUNC_1(VAR_8, VAR_4);
 } else {
  FUNC_0(VAR_6, VAR_1, &VAR_8);
  VAR_9 -= FUNC_1(VAR_8, VAR_2);
 }

 VAR_6->lna_gain = VAR_9;
}
