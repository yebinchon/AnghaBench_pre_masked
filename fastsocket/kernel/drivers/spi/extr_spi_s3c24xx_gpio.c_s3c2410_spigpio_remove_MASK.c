
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int master; } ;
struct s3c2410_spigpio {TYPE_1__ bitbang; } ;
struct platform_device {int dummy; } ;


 struct s3c2410_spigpio* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct s3c2410_spigpio *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->bitbang);
 FUNC_2(VAR_1->bitbang.master);

 return 0;
}
