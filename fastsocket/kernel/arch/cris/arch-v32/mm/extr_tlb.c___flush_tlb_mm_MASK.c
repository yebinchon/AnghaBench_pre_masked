
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long page_id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_7(struct mm_struct *VAR_7)
{
 int VAR_8;
 int VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;

 VAR_11 = VAR_7->context.page_id;

 if (VAR_11 == VAR_1)
  return;


 FUNC_6(VAR_10);

 for (VAR_9 = 1; VAR_9 <= 2; VAR_9++) {
  FUNC_1(VAR_9);
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   FUNC_4(VAR_8);


   FUNC_2(VAR_3, VAR_12);


   if ((VAR_12 & 0xff) == VAR_11) {
    VAR_13 = (FUNC_0(VAR_9, VAR_5, VAR_4,
                            VAR_0)
                | FUNC_0(VAR_9, VAR_5, VAR_6,
                            VAR_8 & 0xf));

    FUNC_3(VAR_13, 0);
   }
  }
 }

 FUNC_5(VAR_10);
}
