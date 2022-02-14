
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {scalar_t__ data; } ;
struct builtin_fw {scalar_t__ data; } ;


 struct builtin_fw* VAR_0 ;
 struct builtin_fw* VAR_1 ;
 int FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const*) ;

void
FUNC_2(const struct firmware *VAR_2)
{
 struct builtin_fw *VAR_3;

 if (VAR_2) {
  for (VAR_3 = VAR_1; VAR_3 != VAR_0;
       VAR_3++) {
   if (VAR_2->data == VAR_3->data)
    goto free_fw;
  }
  FUNC_0(VAR_2);
 free_fw:
  FUNC_1(VAR_2);
 }
}
