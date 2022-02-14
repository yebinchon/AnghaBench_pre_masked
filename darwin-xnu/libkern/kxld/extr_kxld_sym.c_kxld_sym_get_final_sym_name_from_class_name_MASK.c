
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int kern_return_t ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int VAR_4 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int ,scalar_t__) ;

kern_return_t
FUNC_4(const char *VAR_5,
    char VAR_6[], u_long VAR_7)
{
    kern_return_t VAR_8 = VAR_1;
    u_long VAR_9 = 0;

    FUNC_0(VAR_5);
    FUNC_0(VAR_6);

    VAR_9 = FUNC_3(VAR_6, VAR_3, VAR_7);
    FUNC_1(VAR_9 < VAR_7, VAR_4,
        VAR_8=VAR_1);

    VAR_9 = FUNC_2(VAR_6, VAR_5, VAR_7);
    FUNC_1(VAR_9 < VAR_7, VAR_4,
        VAR_8=VAR_1);

    VAR_9 = FUNC_2(VAR_6, VAR_0, VAR_7);
    FUNC_1(VAR_9 < VAR_7, VAR_4,
        VAR_8=VAR_1);

    VAR_8 = VAR_2;

finish:
    return VAR_8;
}
