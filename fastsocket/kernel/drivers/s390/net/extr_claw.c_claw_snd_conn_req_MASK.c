
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct claw_privbk* ml_priv; } ;
struct clawctl {int linkid; } ;
struct claw_privbk {int system_validate_comp; TYPE_1__* p_env; int ctl_bk; } ;
typedef int __u8 ;
struct TYPE_2__ {scalar_t__ packing; int api_type; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*,int ,int ,int ,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_7, __u8 VAR_8)
{
        int VAR_9;
 struct claw_privbk *VAR_10 = VAR_7->ml_priv;
        struct clawctl *VAR_11;

 FUNC_0(2, VAR_6, "snd_conn");
 VAR_9 = 1;
        VAR_11=(struct clawctl *)&VAR_10->ctl_bk;
 VAR_11->linkid = VAR_8;
        if ( VAR_10->system_validate_comp==0x00 ) {
                return VAR_9;
        }
 if (VAR_10->p_env->packing == VAR_2 )
  VAR_9=FUNC_1(VAR_7, VAR_0,0,0,0,
          VAR_5, VAR_5);
 if (VAR_10->p_env->packing == VAR_3) {
  VAR_9=FUNC_1(VAR_7, VAR_0,0,0,0,
          VAR_4, VAR_4);
 }
 if (VAR_10->p_env->packing == 0)
         VAR_9=FUNC_1(VAR_7, VAR_0,0,0,0,
          VAR_1, VAR_10->p_env->api_type);
        return VAR_9;

}
