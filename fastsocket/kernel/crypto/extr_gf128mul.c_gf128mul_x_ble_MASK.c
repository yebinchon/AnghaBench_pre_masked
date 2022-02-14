
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {void* b; void* a; } ;
typedef TYPE_1__ be128 ;


 void* FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (void*) ;

void FUNC_2(be128 *VAR_1, const be128 *VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_2->a);
 u64 VAR_4 = FUNC_1(VAR_2->b);
 u64 VAR_5 = VAR_0[VAR_4 >> 63];

 VAR_1->a = FUNC_0((VAR_3 << 1) ^ VAR_5);
 VAR_1->b = FUNC_0((VAR_4 << 1) | (VAR_3 >> 63));
}
