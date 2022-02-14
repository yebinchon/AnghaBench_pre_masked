
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_port {int phy_list; } ;
struct device {int parent; } ;


 int FUNC_0 (int) ;
 struct sas_port* FUNC_1 (struct device*) ;
 int FUNC_2 (struct sas_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct sas_port *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(!FUNC_3(&VAR_1->phy_list));

 FUNC_4(VAR_0->parent);
 FUNC_2(VAR_1);
}
