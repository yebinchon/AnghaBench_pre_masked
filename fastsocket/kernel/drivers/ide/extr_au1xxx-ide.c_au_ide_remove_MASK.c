
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
struct ide_host {int dummy; } ;
struct TYPE_3__ {scalar_t__ regbase; } ;
typedef TYPE_1__ _auide_hwif ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct ide_host*) ;
 int FUNC_1 (void*) ;
 struct ide_host* FUNC_2 (struct platform_device*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct resource *VAR_3;
 struct ide_host *VAR_4 = FUNC_2(VAR_2);
 _auide_hwif *VAR_5 = &VAR_1;

 FUNC_0(VAR_4);

 FUNC_1((void *)VAR_5->regbase);

 VAR_3 = FUNC_3(VAR_2, VAR_0, 0);
 FUNC_4(VAR_3->start, VAR_3->end - VAR_3->start + 1);

 return 0;
}
