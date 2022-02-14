
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int bdi; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 long FUNC_10 (struct bdi_writeback*,int ) ;

int FUNC_11(struct bdi_writeback *VAR_3)
{
 unsigned long VAR_4 = VAR_2;
 unsigned long VAR_5 = -1UL;
 long VAR_6;

 FUNC_7(VAR_3->bdi);

 while (!FUNC_0()) {
  VAR_6 = FUNC_10(VAR_3, 0);

  FUNC_6(VAR_6);

  if (VAR_6)
   VAR_4 = VAR_2;
  else if (VAR_5 != -1UL) {
   unsigned long VAR_7;






   VAR_7 = FUNC_1(5UL * 60 * VAR_0, VAR_5);
   if (FUNC_5(VAR_2, VAR_7 + VAR_4))
    break;
  }

  if (VAR_1) {
   VAR_5 = FUNC_2(VAR_1 * 10);
   FUNC_4(VAR_5);
  } else
   FUNC_3();

  FUNC_9();
 }

 FUNC_8(VAR_3->bdi);

 return 0;
}
