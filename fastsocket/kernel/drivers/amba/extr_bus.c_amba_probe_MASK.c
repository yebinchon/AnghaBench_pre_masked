
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct amba_id {int dummy; } ;
struct amba_driver {int (* probe ) (struct amba_device*,struct amba_id*) ;int id_table; } ;
struct amba_device {int dummy; } ;


 struct amba_id* FUNC_0 (int ,struct amba_device*) ;
 int FUNC_1 (struct amba_device*,struct amba_id*) ;
 struct amba_device* FUNC_2 (struct device*) ;
 struct amba_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct amba_device *VAR_1 = FUNC_2(VAR_0);
 struct amba_driver *VAR_2 = FUNC_3(VAR_0->driver);
 struct amba_id *VAR_3;

 VAR_3 = FUNC_0(VAR_2->id_table, VAR_1);

 return VAR_2->probe(VAR_1, VAR_3);
}
