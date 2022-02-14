
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da9030_charger {int psy; int work; int nb; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct da9030_charger*) ;
 int FUNC_2 (struct da9030_charger*,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct da9030_charger*) ;
 struct da9030_charger* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct da9030_charger *VAR_5 = FUNC_5(VAR_4);

 FUNC_1(VAR_5);

 FUNC_3(VAR_5->master, &VAR_5->nb,
       VAR_0 | VAR_3 |
       VAR_1 | VAR_2);
 FUNC_0(&VAR_5->work);
 FUNC_2(VAR_5, 0);
 FUNC_6(&VAR_5->psy);

 FUNC_4(VAR_5);

 return 0;
}
