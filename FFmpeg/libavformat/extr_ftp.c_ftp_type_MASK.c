
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*,int const*,int *) ;

__attribute__((used)) static int FUNC_2(FTPContext *VAR_1)
{
    static const char *VAR_2 = "TYPE I\r\n";
    static const int VAR_3[] = {200, 0};

    if (FUNC_1(VAR_1, VAR_2, VAR_3, ((void*)0)) != 200)
        return FUNC_0(VAR_0);

    return 0;
}
