
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_1(const struct sk_buff *VAR_1,
      unsigned char *VAR_2)
{
 FUNC_0(VAR_2, VAR_1->dev->dev_addr, VAR_0);
 return VAR_0;
}
