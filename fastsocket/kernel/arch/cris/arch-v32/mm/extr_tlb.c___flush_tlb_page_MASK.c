
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_2__* vm_mm; } ;
struct TYPE_3__ {unsigned long page_id; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_7(struct vm_area_struct *VAR_7, unsigned long VAR_8)
{
 int VAR_9;
 int VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;

 VAR_11 = VAR_7->vm_mm->context.page_id;

 if (VAR_11 == VAR_1)
  return;

 VAR_8 &= VAR_3;





 FUNC_6(VAR_12);

 for (VAR_10 = 1; VAR_10 <= 2; VAR_10++) {
  FUNC_1(VAR_10);
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   FUNC_4(VAR_9);
   FUNC_2(VAR_4, VAR_13);


   if (((VAR_13 & 0xff) == VAR_11) &&
       ((VAR_13 & VAR_3) == VAR_8)) {
    VAR_14 = FUNC_0(VAR_10, VAR_6, VAR_5,
                           VAR_0) | VAR_8;

    FUNC_3(VAR_14, 0);
   }
  }
 }

 FUNC_5(VAR_12);
}
