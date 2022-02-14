
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terratec {unsigned long curfreq; int lock; int io; } ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct terratec *VAR_3, unsigned long VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 long VAR_9;
 unsigned char VAR_10[25];

 FUNC_1(&VAR_3->lock);

 VAR_3->curfreq = VAR_4;

 VAR_5 = VAR_4 / 160;
 FUNC_0(VAR_10, 0, sizeof(VAR_10));

 VAR_9 = VAR_5 * 10 + 10700;

 VAR_6 = 13;
 VAR_7 = 10;
 VAR_8 = 102400;
 while (VAR_9 != 0) {
  if (VAR_9 % VAR_8 == VAR_9)
   VAR_10[VAR_6] = 0;
  else {
   VAR_10[VAR_6] = 1;
   VAR_9 = VAR_9 - VAR_8;
  }
  VAR_6--;
  VAR_7--;
  VAR_8 = VAR_8 / 2;
 }

 for (VAR_6 = 24; VAR_6 > -1; VAR_6--) {
  if (VAR_10[VAR_6] == 1) {
   FUNC_3(VAR_2 | VAR_1, VAR_3->io);
   FUNC_3(VAR_2 | VAR_1 | VAR_0, VAR_3->io);
   FUNC_3(VAR_2 | VAR_1, VAR_3->io);
  } else {
   FUNC_3(VAR_2 | 0x00, VAR_3->io);
   FUNC_3(VAR_2 | 0x00 | VAR_0, VAR_3->io);
  }
 }
 FUNC_3(0x00, VAR_3->io);

 FUNC_2(&VAR_3->lock);

 return 0;
}
