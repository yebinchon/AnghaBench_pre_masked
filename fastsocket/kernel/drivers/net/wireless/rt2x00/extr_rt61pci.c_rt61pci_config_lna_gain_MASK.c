
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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_7,
        struct rt2x00lib_conf *VAR_8)
{
 u16 VAR_9;
 short VAR_10 = 0;

 if (VAR_8->conf->chandef.chan->band == VAR_6) {
  if (FUNC_2(VAR_1, &VAR_7->cap_flags))
   VAR_10 += 14;

  FUNC_0(VAR_7, VAR_4, &VAR_9);
  VAR_10 -= FUNC_1(VAR_9, VAR_5);
 } else {
  if (FUNC_2(VAR_0, &VAR_7->cap_flags))
   VAR_10 += 14;

  FUNC_0(VAR_7, VAR_2, &VAR_9);
  VAR_10 -= FUNC_1(VAR_9, VAR_3);
 }

 VAR_7->lna_gain = VAR_10;
}
