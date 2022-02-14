
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int ,scalar_t__) ;

u_long
FUNC_4(const char *VAR_2,
    char VAR_3[], u_long VAR_4)
{
    u_long VAR_5 = 0;
    u_long VAR_6 = 0;

    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    VAR_6 = FUNC_3(VAR_3, VAR_0, VAR_4);
    FUNC_1(VAR_6 < VAR_4, VAR_1);

    VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_4);
    FUNC_1(VAR_6 < VAR_4, VAR_1);

    VAR_5 = VAR_6;
finish:
    return VAR_5;
}
