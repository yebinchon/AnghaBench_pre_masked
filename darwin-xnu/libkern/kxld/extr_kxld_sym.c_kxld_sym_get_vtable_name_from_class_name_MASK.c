
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int ,scalar_t__) ;

kern_return_t
FUNC_4(const char *VAR_4,
    char VAR_5[], u_long VAR_6)
{
    kern_return_t VAR_7 = VAR_0;
    u_long VAR_8 = 0;

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    VAR_8 = FUNC_3(VAR_5, VAR_2, VAR_6);
    FUNC_1(VAR_8 < VAR_6, VAR_3,
        VAR_7=VAR_0);

    VAR_8 = FUNC_2(VAR_5, VAR_4, VAR_6);
    FUNC_1(VAR_8 < VAR_6, VAR_3,
        VAR_7=VAR_0);

    VAR_7 = VAR_1;
finish:
    return VAR_7;
}
