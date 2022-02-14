
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u_long ;
typedef int u_int ;
typedef int const u_char ;
typedef int kern_return_t ;
typedef int KXLDObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int const*,int const*,int ,int const*,int const) ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_4(const KXLDObject *VAR_5, u_char *VAR_6, u_int VAR_7,
    u_long *VAR_8, u_long VAR_9)
{
    kern_return_t VAR_10 = VAR_0;

    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_8);

    FUNC_0(FUNC_2(VAR_5), VAR_10,
        VAR_2, VAR_3,
        VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_3(VAR_10, VAR_4);

    VAR_10 = VAR_1;

finish:
   return VAR_10;
}
