
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ref_counter; } ;
typedef TYPE_1__ X509 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(X509 *VAR_1)
{
    FUNC_0(VAR_1);

    if (--VAR_1->ref_counter > 0) {
        return;
    }

    FUNC_1(VAR_0, VAR_1);

    FUNC_2(VAR_1);
}
