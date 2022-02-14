
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,int *,char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

kern_return_t
FUNC_3(const char *VAR_4,
    char VAR_5[], u_long VAR_6)
{
    kern_return_t VAR_7 = VAR_0;

    FUNC_0(VAR_4);

    VAR_7 = FUNC_1(VAR_4, VAR_2, ((void*)0),
        VAR_5, VAR_6);
    FUNC_2(VAR_7, VAR_3);

    VAR_7 = VAR_1;
finish:
    return VAR_7;
}
