
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct omap2_onenand {int (* setup ) (int ,int ) ;int freq; TYPE_1__ onenand; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct omap2_onenand* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 int VAR_2 = 0;
 struct omap2_onenand *VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->setup == ((void*)0));



 VAR_2 = VAR_3->setup(VAR_3->onenand.base, VAR_3->freq);

 return VAR_2;
}
