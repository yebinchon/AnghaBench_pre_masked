
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int pending_int_irq; unsigned int pending_int_vector; int test_irq; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*,int) ;

void FUNC_1(SH2 *VAR_1, const unsigned char *VAR_2)
{
 unsigned int *VAR_3;

 FUNC_0(VAR_1, VAR_2, VAR_0);
 VAR_3 = (void *)(VAR_2 + VAR_0);

 VAR_1->pending_int_irq = VAR_3[0];
 VAR_1->pending_int_vector = VAR_3[1];
 VAR_1->test_irq = 1;
}
