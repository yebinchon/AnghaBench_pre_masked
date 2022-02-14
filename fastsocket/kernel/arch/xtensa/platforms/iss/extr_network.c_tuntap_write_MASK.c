
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {TYPE_1__ tuntap; } ;
struct TYPE_6__ {TYPE_2__ info; } ;
struct iss_net_private {TYPE_3__ tp; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1 (struct iss_net_private *VAR_0, struct sk_buff **VAR_1)
{
 return FUNC_0(VAR_0->tp.info.tuntap.fd, (*VAR_1)->data, (*VAR_1)->len);
}
