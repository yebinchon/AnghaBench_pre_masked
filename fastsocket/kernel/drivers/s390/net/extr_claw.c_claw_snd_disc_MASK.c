
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct conncmd {int WS_name; int host_name; } ;
struct clawctl {int correlator; int linkid; int data; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, struct clawctl * VAR_3)
{
        int VAR_4;
        struct conncmd * VAR_5;

 FUNC_0(2, VAR_1, "snd_dsc");
        VAR_5=(struct conncmd *)&VAR_3->data;

        VAR_4=FUNC_1(VAR_2, VAR_0, VAR_3->linkid,
  VAR_3->correlator, 0,
                VAR_5->host_name, VAR_5->WS_name);
        return VAR_4;
}
