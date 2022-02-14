
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct TYPE_8__ {scalar_t__ command; } ;
struct TYPE_7__ {int command; } ;
struct TYPE_6__ {int command; } ;
struct TYPE_5__ {int command; } ;
struct i596_private {TYPE_4__ scb; TYPE_3__ tdr; TYPE_2__ set_add; scalar_t__ eth_addr; TYPE_1__ set_conf; scalar_t__ i596_config; } ;
typedef void i596_cmd ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct net_device*,void*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*,char*,int) ;
 int VAR_4 ;
 int FUNC_5 (void*,int ,int) ;
 struct i596_private* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_5) {
 struct i596_private *VAR_6;

 if (FUNC_3(VAR_5))
  return 1;

 VAR_6 = FUNC_6(VAR_5);
 VAR_6->scb.command = 0;

 FUNC_5 ((void *)VAR_6->i596_config, VAR_4, 14);
 VAR_6->set_conf.command = VAR_0;
 FUNC_2(VAR_5, (void *)&VAR_6->set_conf);

 FUNC_5 ((void *)VAR_6->eth_addr, VAR_5->dev_addr, 6);
 VAR_6->set_add.command = VAR_1;
 FUNC_2(VAR_5, (struct i596_cmd *)&VAR_6->set_add);

 VAR_6->tdr.command = VAR_2;
 FUNC_2(VAR_5, (struct i596_cmd *)&VAR_6->tdr);

 if (VAR_6->scb.command && FUNC_4(VAR_5, "i82596 init", 200))
  return 1;

 VAR_6->scb.command = VAR_3;
 FUNC_0();

 FUNC_1();

 if (VAR_6->scb.command && FUNC_4(VAR_5, "Receive Unit start", 100))
  return 1;

 return 0;
}
