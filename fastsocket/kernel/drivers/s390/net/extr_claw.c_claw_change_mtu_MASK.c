
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; struct claw_privbk* ml_priv; } ;
struct claw_privbk {TYPE_1__* p_env; } ;
struct TYPE_2__ {int write_size; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_2, int VAR_3)
{
 struct claw_privbk *VAR_4 = VAR_2->ml_priv;
 int VAR_5;
 FUNC_0(4, VAR_1, "setmtu");
 VAR_5 = VAR_4->p_env->write_size;
        if ((VAR_3 < 60) || (VAR_3 > VAR_5)) {
                return -VAR_0;
        }
        VAR_2->mtu = VAR_3;
        return 0;
}
