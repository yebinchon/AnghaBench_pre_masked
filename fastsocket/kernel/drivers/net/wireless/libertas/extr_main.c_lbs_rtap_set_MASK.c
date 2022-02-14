
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bssid; } ;
struct lbs_private {int monitormode; scalar_t__ mode; int * currenttxskb; TYPE_1__ curbssparams; scalar_t__ mesh_open; scalar_t__ infra_open; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (struct lbs_private*,int ,int ) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct lbs_private*,int ,int ,int ,int ,int*) ;
 int FUNC_6 (struct lbs_private*) ;
 int FUNC_7 (char const*,char*,int*) ;
 int FUNC_8 (char const*) ;
 TYPE_2__* FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_7,
  struct device_attribute *VAR_8, const char * VAR_9, size_t VAR_10)
{
 int VAR_11;
 struct lbs_private *VAR_12 = FUNC_9(VAR_7)->ml_priv;

 FUNC_7(VAR_9, "%x", &VAR_11);
 if (VAR_11) {
  if (VAR_12->monitormode == VAR_11)
   return FUNC_8(VAR_9);
  if (!VAR_12->monitormode) {
   if (VAR_12->infra_open || VAR_12->mesh_open)
    return -VAR_3;
   if (VAR_12->mode == VAR_5)
    FUNC_3(VAR_12,
            VAR_12->curbssparams.bssid,
            VAR_6);
   else if (VAR_12->mode == VAR_4)
    FUNC_2(VAR_12);
   FUNC_1(VAR_12);
  }
  VAR_12->monitormode = VAR_11;
 } else {
  if (!VAR_12->monitormode)
   return FUNC_8(VAR_9);
  VAR_12->monitormode = 0;
  FUNC_6(VAR_12);

  if (VAR_12->currenttxskb) {
   FUNC_0(VAR_12->currenttxskb);
   VAR_12->currenttxskb = ((void*)0);
  }


  FUNC_4(VAR_12);
 }

 FUNC_5(VAR_12,
   VAR_0, VAR_1,
   VAR_2, 0, &VAR_12->monitormode);
 return FUNC_8(VAR_9);
}
