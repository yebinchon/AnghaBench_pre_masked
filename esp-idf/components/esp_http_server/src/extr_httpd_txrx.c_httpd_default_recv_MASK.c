
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int httpd_handle_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,size_t,int) ;

int FUNC_2(httpd_handle_t VAR_1, int VAR_2, char *VAR_3, size_t VAR_4, int VAR_5)
{
    (void)VAR_1;
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    int VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_6 < 0) {
        return FUNC_0("recv", VAR_2);
    }
    return VAR_6;
}
