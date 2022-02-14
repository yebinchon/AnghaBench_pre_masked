
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_4__ {int level; } ;
struct ath5k_hw {int ah_use_32khz_clock; TYPE_3__* hw; TYPE_1__ debug; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {int debugfsdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,struct dentry*,int *) ;
 struct dentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,struct dentry*,struct ath5k_hw*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_3(struct ath5k_hw *VAR_12)
{
 struct dentry *VAR_13;

 VAR_12->debug.level = VAR_2;

 VAR_13 = FUNC_1("ath5k", VAR_12->hw->wiphy->debugfsdir);
 if (!VAR_13)
  return;

 FUNC_2("debug", VAR_1 | VAR_0, VAR_13, VAR_12,
       &VAR_6);

 FUNC_2("registers", VAR_0, VAR_13, VAR_12, &VAR_10);

 FUNC_2("beacon", VAR_1 | VAR_0, VAR_13, VAR_12,
       &VAR_5);

 FUNC_2("reset", VAR_1, VAR_13, VAR_12, &VAR_11);

 FUNC_2("antenna", VAR_1 | VAR_0, VAR_13, VAR_12,
       &VAR_4);

 FUNC_2("misc", VAR_0, VAR_13, VAR_12, &VAR_8);

 FUNC_2("frameerrors", VAR_1 | VAR_0, VAR_13, VAR_12,
       &VAR_7);

 FUNC_2("ani", VAR_1 | VAR_0, VAR_13, VAR_12, &VAR_3);

 FUNC_2("queue", VAR_1 | VAR_0, VAR_13, VAR_12,
       &VAR_9);

 FUNC_0("32khz_clock", VAR_1 | VAR_0, VAR_13,
       &VAR_12->ah_use_32khz_clock);
}
