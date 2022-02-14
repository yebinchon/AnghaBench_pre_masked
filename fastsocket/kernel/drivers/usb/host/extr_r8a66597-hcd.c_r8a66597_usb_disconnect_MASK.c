
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8a66597_device {int dummy; } ;
struct r8a66597 {TYPE_1__* root_hub; } ;
struct TYPE_2__ {struct r8a66597_device* dev; } ;


 int FUNC_0 (struct r8a66597*,struct r8a66597_device*) ;
 int FUNC_1 (struct r8a66597*,struct r8a66597_device*) ;
 int FUNC_2 (struct r8a66597*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct r8a66597 *VAR_0, int VAR_1)
{
 struct r8a66597_device *VAR_2 = VAR_0->root_hub[VAR_1].dev;

 FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_2);

 FUNC_2(VAR_0, VAR_1, 0);
}
