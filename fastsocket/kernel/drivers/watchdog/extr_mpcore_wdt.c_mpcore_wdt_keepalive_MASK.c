
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcore_wdt {int perturb; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mpcore_wdt *VAR_4)
{
 unsigned int VAR_5;


 VAR_5 = (VAR_2 / 256) * VAR_1;


 FUNC_0(&VAR_3);
 FUNC_2(VAR_5 + VAR_4->perturb, VAR_4->base + VAR_0);
 VAR_4->perturb = VAR_4->perturb ? 0 : 1;
 FUNC_1(&VAR_3);
}
