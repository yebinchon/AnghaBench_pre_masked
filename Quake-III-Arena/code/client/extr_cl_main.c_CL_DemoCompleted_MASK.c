
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ integer; } ;
struct TYPE_3__ {int timeDemoStart; double timeDemoFrames; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,double,int,double) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void FUNC_4( void ) {
 if (VAR_0 && VAR_0->integer) {
  int VAR_3;

  VAR_3 = FUNC_3() - VAR_1.timeDemoStart;
  if ( VAR_3 > 0 ) {
   FUNC_2 ("%i frames, %3.1f seconds: %3.1f fps\n", VAR_1.timeDemoFrames,
   VAR_3/1000.0, VAR_1.timeDemoFrames*1000.0 / VAR_3);
  }
 }

 FUNC_0( VAR_2 );
 FUNC_1();
}
