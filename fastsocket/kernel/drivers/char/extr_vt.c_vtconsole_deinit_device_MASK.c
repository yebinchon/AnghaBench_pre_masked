
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct con_driver {int flag; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct con_driver *VAR_2)
{
 int VAR_3;

 if (VAR_2->flag & VAR_0) {
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
   FUNC_1(VAR_2->dev, &VAR_1[VAR_3]);
  VAR_2->flag &= ~VAR_0;
 }
}
