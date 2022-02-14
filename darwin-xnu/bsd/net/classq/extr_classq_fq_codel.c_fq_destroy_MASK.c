
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fq_flags; scalar_t__ fq_bytes; } ;
typedef TYPE_1__ fq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3(fq_t *VAR_3)
{
 FUNC_0(FUNC_1(VAR_3));
 FUNC_0(!(VAR_3->fq_flags & (VAR_0 | VAR_1)));
 FUNC_0(VAR_3->fq_bytes == 0);
 FUNC_2(VAR_2, VAR_3);
}
