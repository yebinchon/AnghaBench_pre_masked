
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long ptce_base; unsigned long* ptce_count; unsigned long* ptce_stride; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

void FUNC_4(void)
{
 int VAR_1, VAR_2;
 unsigned long VAR_3, VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_0->arch.ptce_base;
 VAR_4 = VAR_0->arch.ptce_count[0];
 VAR_5 = VAR_0->arch.ptce_count[1];
 VAR_6 = VAR_0->arch.ptce_stride[0];
 VAR_7 = VAR_0->arch.ptce_stride[1];

 FUNC_3(VAR_3);
 for (VAR_1 = 0; VAR_1 < VAR_4; ++VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_5; ++VAR_2) {
   FUNC_0(VAR_8);
   VAR_8 += VAR_7;
  }
  VAR_8 += VAR_6;
 }
 FUNC_2(VAR_3);
 FUNC_1();
}
