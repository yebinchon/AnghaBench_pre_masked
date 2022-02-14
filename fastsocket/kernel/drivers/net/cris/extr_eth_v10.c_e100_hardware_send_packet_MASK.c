
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_local {int led_lock; } ;
struct TYPE_4__ {int sw_len; int ctrl; int buf; } ;
struct TYPE_5__ {TYPE_1__ descr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_2__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_14 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (char*) ;

void
FUNC_9(struct net_local *VAR_15, char *VAR_16, int VAR_17)
{
 FUNC_0(FUNC_4("e100 send pack, buf 0x%x len %d\n", VAR_16, VAR_17));

 FUNC_5(&VAR_15->led_lock);
 if (!VAR_10 && FUNC_7(VAR_9, VAR_11)) {

  FUNC_2(VAR_1);


  VAR_11 = VAR_9 + VAR_2;
  VAR_10 = 1;
  FUNC_3(&VAR_4, VAR_9 + VAR_0/10);
 }
 FUNC_6(&VAR_15->led_lock);


 VAR_13->descr.sw_len = VAR_17;
 VAR_13->descr.ctrl = VAR_7 | VAR_6 | VAR_8;
 VAR_13->descr.buf = FUNC_8(VAR_16);


        VAR_12->descr.ctrl &= ~VAR_6;
        VAR_12 = VAR_13;


 *VAR_3 = FUNC_1(VAR_3, VAR_5, VAR_14);
}
