
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint ;
typedef int GString ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char*,int) ;

void FUNC_2(guint *VAR_0, guint *VAR_1, GString *VAR_2) {
 FUNC_0(VAR_2, ',');
 guint VAR_3 = *VAR_0;

 FUNC_1(VAR_2, "%u", VAR_3 & 0x000000FF);

 guint VAR_4;
 for (VAR_4 = 1; VAR_4 <= 3; ++VAR_4) {
  VAR_3 >>= 8;
  FUNC_1(VAR_2, ".%u", VAR_3 & 0x000000FF);
 }
}
