
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int kern_return_t ;
struct TYPE_3__ {int vtables_by_name; int obsolete_symbols_by_name; int defined_cxx_symbols_by_value; int defined_symbols_by_name; int dependencies; int objects; } ;
typedef TYPE_1__ KXLDContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_5(KXLDContext *VAR_7, u_int VAR_8)
{
    kern_return_t VAR_9 = VAR_0;



    VAR_9 = FUNC_0(&VAR_7->objects,
        FUNC_3(), 2 * VAR_8 + 1);
    FUNC_4(VAR_9, VAR_2);

    VAR_9 = FUNC_0(&VAR_7->dependencies,
        FUNC_2(), VAR_8);
    FUNC_4(VAR_9, VAR_2);

    VAR_9 = FUNC_1(&VAR_7->defined_symbols_by_name,
        VAR_6, VAR_5, 0);
    FUNC_4(VAR_9, VAR_2);

    VAR_9 = FUNC_1(&VAR_7->defined_cxx_symbols_by_value,
        VAR_4, VAR_3, 0);
    FUNC_4(VAR_9, VAR_2);

    VAR_9 = FUNC_1(&VAR_7->obsolete_symbols_by_name,
        VAR_6, VAR_5, 0);
    FUNC_4(VAR_9, VAR_2);

    VAR_9 = FUNC_1(&VAR_7->vtables_by_name, VAR_6,
        VAR_5, 0);
    FUNC_4(VAR_9, VAR_2);

    VAR_9 = VAR_1;
finish:
    return VAR_9;
}
