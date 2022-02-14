
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fd; int dev; scalar_t__ fixed_config; } ;
struct TYPE_6__ {TYPE_4__ tuntap; } ;
struct TYPE_7__ {TYPE_2__ info; } ;
struct TYPE_5__ {int dev_name; } ;
struct iss_net_private {TYPE_3__ tp; TYPE_1__ host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct iss_net_private *VAR_1)
{




 FUNC_1(VAR_1->tp.info.tuntap.fd);
 VAR_1->tp.info.tuntap.fd = -1;
}
