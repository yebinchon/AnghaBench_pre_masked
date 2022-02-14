
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; scalar_t__ data; } ;
struct eth1394hdr {scalar_t__ h_proto; int h_dest; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2)
{
 struct eth1394hdr *VAR_3 = (struct eth1394hdr *)VAR_2->data;

 if (VAR_3->h_proto == FUNC_2(VAR_0))
  return FUNC_1((unsigned char *)&VAR_3->h_dest, VAR_2);

 FUNC_0(VAR_1, VAR_2->dev->name,
        "unable to resolve type %04x addresses\n",
        FUNC_3(VAR_3->h_proto));
 return 0;
}
