
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {int port_type; int desired_essid; struct hermes hw; } ;
struct hermes_idstring {int len; int val; } ;
typedef int essidbuf ;
struct TYPE_2__ {int (* read_ltv ) (struct hermes*,int ,int ,int,int *,struct hermes_idstring*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (struct orinoco_private*,unsigned long*) ;
 int FUNC_5 (struct orinoco_private*,unsigned long*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct hermes*,int ,int ,int,int *,struct hermes_idstring*) ;
 int FUNC_8 (struct hermes*,int ,int ,int,int *,struct hermes_idstring*) ;

int FUNC_9(struct orinoco_private *VAR_6, int *VAR_7,
    char VAR_8[VAR_4 + 1])
{
 struct hermes *VAR_9 = &VAR_6->hw;
 int VAR_10 = 0;
 struct hermes_idstring VAR_11;
 char *VAR_12 = (char *)(&VAR_11.val);
 int VAR_13;
 unsigned long VAR_14;

 if (FUNC_4(VAR_6, &VAR_14) != 0)
  return -VAR_0;

 if (FUNC_6(VAR_6->desired_essid) > 0) {







  u16 VAR_15;

  *VAR_7 = 1;

  VAR_15 = (VAR_6->port_type == 3) ? VAR_2 :
   VAR_1;

  VAR_10 = VAR_9->ops->read_ltv(VAR_9, VAR_5, VAR_15, sizeof(VAR_11),
     ((void*)0), &VAR_11);
  if (VAR_10)
   goto fail_unlock;
 } else {
  *VAR_7 = 0;

  VAR_10 = VAR_9->ops->read_ltv(VAR_9, VAR_5, VAR_3,
     sizeof(VAR_11), ((void*)0), &VAR_11);
  if (VAR_10)
   goto fail_unlock;
 }

 VAR_13 = FUNC_1(VAR_11.len);
 FUNC_0(VAR_13 > VAR_4);

 FUNC_3(VAR_8, 0, VAR_4);
 FUNC_2(VAR_8, VAR_12, VAR_13);
 VAR_10 = VAR_13;

 fail_unlock:
 FUNC_5(VAR_6, &VAR_14);

 return VAR_10;
}
