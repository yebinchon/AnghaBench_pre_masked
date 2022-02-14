
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpd_data {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct httpd_data*,int) ;
 int FUNC_4 (struct httpd_data*,int) ;

__attribute__((used)) static void FUNC_5(struct httpd_data *VAR_1)
{
    int VAR_2 = -1;
    while ((VAR_2 = FUNC_4(VAR_1, VAR_2)) != -1) {
        FUNC_0(VAR_0, FUNC_1("cleaning up socket %d"), VAR_2);
        FUNC_3(VAR_1, VAR_2);
        FUNC_2(VAR_2);
    }
}
