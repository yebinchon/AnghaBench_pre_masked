
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_7__ {scalar_t__ kvm_seq; } ;
struct TYPE_11__ {TYPE_1__ context; } ;
struct TYPE_10__ {TYPE_6__* active_mm; } ;
struct TYPE_8__ {scalar_t__ kvm_seq; } ;
struct TYPE_9__ {TYPE_2__ context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 TYPE_3__ VAR_5 ;
 int * FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8 = VAR_6, VAR_9 = VAR_6 + (VAR_7 & ~(VAR_3 - 1));
 pgd_t *VAR_10;

 FUNC_1(VAR_8, VAR_9);
 VAR_10 = FUNC_3(VAR_8);
 do {
  pmd_t VAR_11, *VAR_12 = FUNC_6(VAR_10, VAR_8);

  VAR_11 = *VAR_12;
  if (!FUNC_5(VAR_11)) {







   FUNC_4(VAR_12);
   VAR_5.context.kvm_seq++;




   if ((FUNC_8(VAR_11) & VAR_1) == VAR_2)
    FUNC_9(&VAR_5, FUNC_7(VAR_11));
  }

  VAR_8 += VAR_0;
  VAR_10++;
 } while (VAR_8 < VAR_9);





 if (VAR_4->active_mm->context.kvm_seq != VAR_5.context.kvm_seq)
  FUNC_0(VAR_4->active_mm);

 FUNC_2(VAR_6, VAR_9);
}
