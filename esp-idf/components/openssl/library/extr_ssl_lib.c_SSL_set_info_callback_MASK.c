
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void (* info_callback ) (TYPE_1__ const*,int,int) ;} ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(SSL *VAR_0, void (*VAR_1) (const SSL *VAR_2, int VAR_3, int VAR_4))
{
    FUNC_0(VAR_0);

    VAR_0->info_callback = VAR_1;
}
