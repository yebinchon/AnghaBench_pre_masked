
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static kern_return_t
FUNC_4(const char *VAR_3, const char *VAR_4, const char *VAR_5,
    char *VAR_6, u_long VAR_7)
{
    kern_return_t VAR_8 = VAR_0;
    u_long VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

    FUNC_0(VAR_3);
    FUNC_0(VAR_6);

    VAR_9 = (VAR_4) ? FUNC_2(VAR_4) : 0;
    VAR_10 = (VAR_5) ? FUNC_2(VAR_5) : 0;
    VAR_11 = FUNC_2(VAR_3) - VAR_9 - VAR_10;

    FUNC_1(VAR_11 < VAR_7, VAR_2, VAR_8=VAR_0);

    FUNC_3(VAR_6, VAR_3 + VAR_9, VAR_11);
    VAR_6[VAR_11] = '\0';

    VAR_8 = VAR_1;
finish:
    return VAR_8;
}
