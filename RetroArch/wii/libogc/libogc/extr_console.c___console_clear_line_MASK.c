
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int con_xres; int background; scalar_t__ destbuffer; } ;
typedef TYPE_1__ console_data_s ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0( int VAR_3, int VAR_4, int VAR_5 ) {
 console_data_s *VAR_6;
 unsigned int VAR_7;
 unsigned int *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = VAR_0/2;
 unsigned int VAR_11 = VAR_1;
 unsigned int VAR_12;

 if( !(VAR_6 = VAR_2) ) return;

  VAR_9 = VAR_6->con_xres / 2;

 VAR_12 = (VAR_5 - VAR_4)*VAR_10;
 VAR_8 = (unsigned int*)VAR_6->destbuffer;


 VAR_8 += VAR_3*(VAR_1*VAR_9) + VAR_4*VAR_10;


  while( VAR_11-- ) {
   VAR_7 = VAR_12;
    while( VAR_7-- )
      *VAR_8++ = VAR_6->background;
    VAR_8 -= VAR_12;
    VAR_8 += VAR_9;
  }
}
