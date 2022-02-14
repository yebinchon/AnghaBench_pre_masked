
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0,
       VAR_2->net->dev_addr);
 if (VAR_3 < 0)
  return VAR_3;
 return 0;
}
