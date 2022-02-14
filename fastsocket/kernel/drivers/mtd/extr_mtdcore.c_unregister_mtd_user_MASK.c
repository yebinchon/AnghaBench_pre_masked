
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_notifier {int list; int (* remove ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5 (struct mtd_notifier *VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_3);

 FUNC_1(VAR_1);

 for (VAR_5=0; VAR_5< VAR_0; VAR_5++)
  if (VAR_2[VAR_5])
   VAR_4->remove(VAR_2[VAR_5]);

 FUNC_0(&VAR_4->list);
 FUNC_3(&VAR_3);
 return 0;
}
