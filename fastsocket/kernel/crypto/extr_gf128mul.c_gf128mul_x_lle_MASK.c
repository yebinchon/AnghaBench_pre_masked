
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {void* a; void* b; } ;
typedef TYPE_1__ be128 ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_2(be128 *VAR_1, const be128 *VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_2->a);
 u64 VAR_4 = FUNC_0(VAR_2->b);
 u64 VAR_5 = VAR_0[(VAR_4 << 7) & 0xff];

 VAR_1->b = FUNC_1((VAR_4 >> 1) | (VAR_3 << 63));
 VAR_1->a = FUNC_1((VAR_3 >> 1) ^ (VAR_5 << 48));
}
