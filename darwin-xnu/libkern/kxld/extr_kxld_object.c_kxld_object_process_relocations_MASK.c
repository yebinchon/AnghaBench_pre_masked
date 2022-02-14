
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_8__ {scalar_t__ is_final_image; int relocator; } ;
typedef TYPE_1__ KXLDObject ;
typedef int KXLDDict ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;

kern_return_t
FUNC_8(KXLDObject *VAR_4,
    const KXLDDict *VAR_5)
{
    kern_return_t VAR_6 = VAR_1;

    (void) FUNC_0(&VAR_4->relocator, VAR_5);
    if (VAR_4->is_final_image) {







        FUNC_6(VAR_0, VAR_3, VAR_6=VAR_1);

    } else {
        FUNC_6(VAR_0, VAR_3, VAR_6=VAR_1);

    }


    VAR_6 = FUNC_2(VAR_4);
    FUNC_7(VAR_6, VAR_3);

    VAR_6 = VAR_2;
finish:
   return VAR_6;
}
