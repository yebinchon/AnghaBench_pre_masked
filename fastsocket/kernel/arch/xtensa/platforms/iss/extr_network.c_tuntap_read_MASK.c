
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {TYPE_4__* dev; int data; } ;
struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ tuntap; } ;
struct TYPE_7__ {TYPE_2__ info; } ;
struct iss_net_private {TYPE_3__ tp; } ;
struct TYPE_8__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2 (struct iss_net_private *VAR_2, struct sk_buff **VAR_3)
{






 return FUNC_1(VAR_2->tp.info.tuntap.fd,
   (*VAR_3)->data, (*VAR_3)->dev->mtu + VAR_1);
}
