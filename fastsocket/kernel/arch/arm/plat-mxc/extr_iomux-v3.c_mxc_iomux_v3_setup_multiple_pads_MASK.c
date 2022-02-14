
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pad_desc {int dummy; } ;


 int FUNC_0 (struct pad_desc*,int) ;
 int FUNC_1 (struct pad_desc*) ;

int FUNC_2(struct pad_desc *VAR_0, unsigned VAR_1)
{
 struct pad_desc *VAR_2 = VAR_0;
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   goto setup_error;
  VAR_2++;
 }
 return 0;

setup_error:
 FUNC_0(VAR_0, VAR_3);
 return VAR_4;
}
