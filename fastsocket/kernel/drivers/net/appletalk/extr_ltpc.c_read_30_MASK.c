
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int command; } ;
struct TYPE_6__ {TYPE_1__ getflags; } ;
typedef TYPE_2__ lt_command ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,TYPE_2__*,int,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1 ( struct net_device *VAR_1)
{
 lt_command VAR_2;
 VAR_2.getflags.command = VAR_0;
 return FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2.getflags),&VAR_2,0);
}
