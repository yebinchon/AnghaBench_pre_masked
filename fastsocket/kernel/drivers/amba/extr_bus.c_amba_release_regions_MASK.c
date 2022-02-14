
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int start; } ;
struct amba_device {TYPE_1__ res; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct amba_device *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_1(&VAR_0->res);
 FUNC_0(VAR_0->res.start, VAR_1);
}
