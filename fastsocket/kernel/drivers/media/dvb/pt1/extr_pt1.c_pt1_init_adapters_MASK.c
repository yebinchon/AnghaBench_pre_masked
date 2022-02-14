
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1_adapter {int index; } ;
struct pt1 {struct pt1_adapter** adaps; } ;


 scalar_t__ FUNC_0 (struct pt1_adapter*) ;
 int VAR_0 ;
 int FUNC_1 (struct pt1_adapter*) ;
 struct pt1_adapter* FUNC_2 (struct pt1*) ;
 int FUNC_3 (struct pt1_adapter*) ;

__attribute__((used)) static int FUNC_4(struct pt1 *VAR_1)
{
 int VAR_2;
 struct pt1_adapter *VAR_3;
 int VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1);
  if (FUNC_0(VAR_3)) {
   VAR_4 = FUNC_1(VAR_3);
   goto err;
  }

  VAR_3->index = VAR_2;
  VAR_1->adaps[VAR_2] = VAR_3;
 }
 return 0;

err:
 while (VAR_2--)
  FUNC_3(VAR_1->adaps[VAR_2]);

 return VAR_4;
}
