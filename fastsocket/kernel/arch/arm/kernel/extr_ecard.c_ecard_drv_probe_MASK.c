
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {int claimed; } ;
struct ecard_id {int dummy; } ;
struct ecard_driver {int (* probe ) (struct expansion_card*,struct ecard_id const*) ;int id_table; } ;
struct device {int driver; } ;


 struct expansion_card* FUNC_0 (struct device*) ;
 struct ecard_driver* FUNC_1 (int ) ;
 struct ecard_id* FUNC_2 (int ,struct expansion_card*) ;
 int FUNC_3 (struct expansion_card*,struct ecard_id const*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct expansion_card *VAR_1 = FUNC_0(VAR_0);
 struct ecard_driver *VAR_2 = FUNC_1(VAR_0->driver);
 const struct ecard_id *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2->id_table, VAR_1);

 VAR_1->claimed = 1;
 VAR_4 = VAR_2->probe(VAR_1, VAR_3);
 if (VAR_4)
  VAR_1->claimed = 0;
 return VAR_4;
}
