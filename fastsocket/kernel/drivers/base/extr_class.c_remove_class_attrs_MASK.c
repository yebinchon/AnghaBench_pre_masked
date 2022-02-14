
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class {int * class_attrs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct class*,int *) ;

__attribute__((used)) static void FUNC_2(struct class *VAR_0)
{
 int VAR_1;

 if (VAR_0->class_attrs) {
  for (VAR_1 = 0; FUNC_0(VAR_0->class_attrs[VAR_1]); VAR_1++)
   FUNC_1(VAR_0, &VAR_0->class_attrs[VAR_1]);
 }
}
