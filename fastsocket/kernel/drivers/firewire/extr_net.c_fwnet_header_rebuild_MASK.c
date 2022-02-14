
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; scalar_t__ data; } ;
struct fwnet_header {int h_proto; int h_dest; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1)
{
 struct fwnet_header *VAR_2 = (struct fwnet_header *)VAR_1->data;

 if (FUNC_3(&VAR_2->h_proto) == VAR_0)
  return FUNC_0((unsigned char *)&VAR_2->h_dest, VAR_1);

 FUNC_2("%s: unable to resolve type %04x addresses\n",
    VAR_1->dev->name, FUNC_1(VAR_2->h_proto));
 return 0;
}
