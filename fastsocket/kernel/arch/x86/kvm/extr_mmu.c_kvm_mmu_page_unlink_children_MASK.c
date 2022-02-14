
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; int * spt; } ;
struct TYPE_4__ {int lpages; } ;
struct kvm {TYPE_2__ stat; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct kvm*,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_3,
      struct kvm_mmu_page *VAR_4)
{
 unsigned VAR_5;
 u64 *VAR_6;
 u64 VAR_7;

 VAR_6 = VAR_4->spt;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  VAR_7 = VAR_6[VAR_5];

  if (FUNC_2(VAR_7)) {
   if (!FUNC_1(VAR_7, VAR_4->role.level)) {
    VAR_7 &= VAR_0;
    FUNC_3(FUNC_4(VAR_7),
          &VAR_6[VAR_5]);
   } else {
    if (FUNC_0(VAR_7))
     --VAR_3->stat.lpages;
    FUNC_5(VAR_3, &VAR_6[VAR_5]);
   }
  }
  VAR_6[VAR_5] = VAR_2;
 }
}
