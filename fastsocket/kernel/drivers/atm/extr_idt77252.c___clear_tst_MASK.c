
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_map {int dummy; } ;
struct idt77252_dev {unsigned long* tst; int tst_index; int tst_size; TYPE_1__* soft_tst; int tst_timer; } ;
struct TYPE_2__ {int tste; struct vc_map* vc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct idt77252_dev*,unsigned long,int ) ;

__attribute__((used)) static int
FUNC_2(struct idt77252_dev *VAR_3, struct vc_map *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->tst[VAR_3->tst_index ^ 1];

 for (VAR_6 = 0; VAR_6 < VAR_3->tst_size - 2; VAR_6++) {
  if (VAR_3->soft_tst[VAR_6].vc == VAR_4) {
   VAR_3->soft_tst[VAR_6].vc = ((void*)0);

   VAR_3->soft_tst[VAR_6].tste = VAR_0;
   if (FUNC_0(&VAR_3->tst_timer))
    VAR_3->soft_tst[VAR_6].tste |= VAR_1;
   else {
    FUNC_1(VAR_3, VAR_5 + VAR_6, VAR_0);
    VAR_3->soft_tst[VAR_6].tste |= VAR_2;
   }
  }
 }

 return 0;
}
