
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct claw_privbk* ml_priv; } ;
struct clawctl {int correlator; int linkid; } ;
struct claw_privbk {struct claw_env* p_env; } ;
struct claw_env {int adapter_name; int host_name; } ;
typedef int __u32 ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2,
 struct clawctl *VAR_3, __u32 VAR_4)
{
        struct claw_env * VAR_5;
        struct claw_privbk *VAR_6;
        int VAR_7;

 FUNC_0(2, VAR_1, "chkresp");
 VAR_6 = VAR_2->ml_priv;
        VAR_5=VAR_6->p_env;
        VAR_7=FUNC_1(VAR_2, VAR_0,
  VAR_3->linkid,
  VAR_3->correlator,
                VAR_4,
  VAR_5->host_name,
  VAR_5->adapter_name );
        return VAR_7;
}
