
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rng_info {int rfd; } ;
struct device {struct rng_info* priv; } ;
struct TYPE_2__ {int device_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ) ;
 TYPE_1__ VAR_3 ;
 struct rng_info* FUNC_1 (int) ;
 struct device* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct device *VAR_5;
 struct rng_info *VAR_6 = FUNC_1(sizeof(*VAR_6));


 VAR_6->rfd = FUNC_3("/dev/random", VAR_0);


 VAR_5 = FUNC_2("rng", VAR_1);
 VAR_5->priv = VAR_6;


 FUNC_0(VAR_5, VAR_2, VAR_4);

 FUNC_4("device %u: rng\n", VAR_3.device_num++);
}
