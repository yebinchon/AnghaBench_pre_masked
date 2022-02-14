
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct b43_wldev {scalar_t__ irq_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,scalar_t__) ;
 int FUNC_3 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_1)
{
 u32 VAR_2 = VAR_1->irq_mask;


 FUNC_3(VAR_1);
 if (VAR_2 != VAR_1->irq_mask) {

  FUNC_0(!VAR_1->irq_mask);
  if (FUNC_1(VAR_1, VAR_0)) {
   FUNC_2(VAR_1, VAR_0, VAR_1->irq_mask);
  } else {





  }
 }
}
