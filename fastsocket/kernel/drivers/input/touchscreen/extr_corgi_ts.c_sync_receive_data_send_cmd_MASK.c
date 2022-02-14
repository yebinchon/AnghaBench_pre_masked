
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct corgi_ts {TYPE_1__* machinfo; } ;
struct TYPE_2__ {int (* wait_hsync ) () ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct corgi_ts *VAR_4, int VAR_5, int VAR_6,
  unsigned int VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9 = 0, VAR_10, VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_8 && VAR_6) {
  FUNC_1(VAR_11);
  if (!(VAR_11 & 0x01))
   FUNC_2(0x01);


  VAR_4->machinfo->wait_hsync();

  FUNC_0(VAR_9);
 }

 if (VAR_5)
  VAR_12 = FUNC_3();

 if (VAR_6) {
  int VAR_13 = VAR_1 | VAR_2 | (VAR_7 << VAR_0) | VAR_3;

  FUNC_4(VAR_13);
  FUNC_3();

  if (VAR_8) {

   FUNC_0(VAR_10);
   if (VAR_10-VAR_9 > VAR_8) {

    VAR_4->machinfo->wait_hsync();

    FUNC_0(VAR_9);

    FUNC_0(VAR_10);
   }
   while (VAR_10 - VAR_9 < VAR_8)
    FUNC_0(VAR_10);
  }
  FUNC_4(VAR_13);
  if (VAR_8 && !(VAR_11 & 0x01))
   FUNC_2(VAR_11);
 }
 return VAR_12;
}
