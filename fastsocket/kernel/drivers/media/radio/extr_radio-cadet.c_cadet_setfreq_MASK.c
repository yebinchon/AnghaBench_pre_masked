
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {int curtuner; int tunestat; scalar_t__ sigstrength; int lock; scalar_t__ io; } ;


 int FUNC_0 (struct cadet*) ;
 int FUNC_1 (struct cadet*,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;
 scalar_t__** VAR_0 ;

__attribute__((used)) static void FUNC_7(struct cadet *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7;




 VAR_3 = 0;
 if (VAR_1->curtuner == 0) {
  VAR_6 = 102400;
  VAR_2 = (VAR_2 * 1000) / 16;
  VAR_2 += 10700;
  for (VAR_4 = 0; VAR_4 < 14; VAR_4++) {
   VAR_3 = VAR_3 << 1;
   if (VAR_2 >= VAR_6) {
    VAR_3 |= 0x01;
    VAR_2 -= VAR_6;
   }
   VAR_6 = VAR_6 >> 1;
  }
 }
 if (VAR_1->curtuner == 1) {
  VAR_3 = (VAR_2 / 16) + 2010;
  VAR_3 |= 0x100000;
 }





 FUNC_4(&VAR_1->lock);
 FUNC_6(7, VAR_1->io);
 VAR_7 = FUNC_2(VAR_1->io + 1);
 FUNC_5(&VAR_1->lock);




 for (VAR_5 = 3; VAR_5 > -1; VAR_5--) {
  FUNC_1(VAR_1, VAR_3 | (VAR_5 << 16));

  FUNC_4(&VAR_1->lock);
  FUNC_6(7, VAR_1->io);
  FUNC_6(VAR_7, VAR_1->io + 1);
  FUNC_5(&VAR_1->lock);

  FUNC_3(100);

  FUNC_0(VAR_1);
  if ((VAR_1->tunestat & 0x40) == 0) {
   VAR_1->sigstrength = VAR_0[VAR_1->curtuner][VAR_5];
   return;
  }
 }
 VAR_1->sigstrength = 0;
}
