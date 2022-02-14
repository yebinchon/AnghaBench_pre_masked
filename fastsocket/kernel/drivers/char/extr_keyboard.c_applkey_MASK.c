
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 int FUNC_0 (struct vc_data*,char*) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, int VAR_1, char VAR_2)
{
 static char VAR_3[] = { 0x1b, 'O', 0x00, 0x00 };

 VAR_3[1] = (VAR_2 ? 'O' : '[');
 VAR_3[2] = VAR_1;
 FUNC_0(VAR_0, VAR_3);
}
