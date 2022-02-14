
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int pending_int_irq; unsigned int pending_int_vector; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,TYPE_1__ const*,int) ;

void FUNC_1(const SH2 *VAR_1, unsigned char *VAR_2)
{
 unsigned int *VAR_3;

 FUNC_0(VAR_2, VAR_1, VAR_0);
 VAR_3 = (void *)(VAR_2 + VAR_0);

 VAR_3[0] = VAR_1->pending_int_irq;
 VAR_3[1] = VAR_1->pending_int_vector;
}
