
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int samples; int channels; int submission_chunk; int speed; } ;
struct TYPE_3__ {int value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(void)
{
 int VAR_4;
 static int VAR_5;
 static int VAR_6;
 int VAR_7;

 VAR_7 = VAR_0.samples / VAR_0.channels;



 VAR_4 = FUNC_1();
 if (VAR_4 < VAR_6)
 {
  VAR_5++;

  if (VAR_2 > 0x40000000)
  {
   VAR_5 = 0;
   VAR_2 = VAR_7;
   FUNC_2 ();
  }
 }
 VAR_6 = VAR_4;

 VAR_3 = VAR_5*VAR_7 + VAR_4/VAR_0.channels;
 if ( VAR_0.submission_chunk < 256 ) {
  VAR_2 = VAR_3 + VAR_1->value * VAR_0.speed;
 } else {
  VAR_2 = VAR_3 + VAR_0.submission_chunk;
 }
}
