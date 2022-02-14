
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_notifier {int (* add ) (scalar_t__) ;int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5 (struct mtd_notifier *VAR_5)
{
 int VAR_6;

 FUNC_2(&VAR_4);

 FUNC_1(&VAR_5->list, &VAR_2);

  FUNC_0(VAR_1);

 for (VAR_6=0; VAR_6< VAR_0; VAR_6++)
  if (VAR_3[VAR_6])
   VAR_5->add(VAR_3[VAR_6]);

 FUNC_3(&VAR_4);
}
