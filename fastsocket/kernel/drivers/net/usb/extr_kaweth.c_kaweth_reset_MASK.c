
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kaweth_device {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* config; } ;
struct TYPE_4__ {int bConfigurationValue; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct kaweth_device*,int ,int ,int ,int ,int ,int *,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(struct kaweth_device *VAR_2)
{
 int VAR_3;

 FUNC_0("kaweth_reset(%p)", VAR_2);
 VAR_3 = FUNC_1(VAR_2,
    FUNC_3(VAR_2->dev, 0),
    VAR_1,
    0,
    VAR_2->dev->config[0].desc.bConfigurationValue,
    0,
    ((void*)0),
    0,
    VAR_0);

 FUNC_2(10);

 FUNC_0("kaweth_reset() returns %d.",VAR_3);

 return VAR_3;
}
