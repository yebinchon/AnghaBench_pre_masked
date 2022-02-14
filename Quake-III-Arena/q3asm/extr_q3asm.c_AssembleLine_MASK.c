
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int imageUsed; } ;
struct TYPE_6__ {char* name; int opcode; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_2__* VAR_22 ;
 int VAR_23 ;
 int* VAR_24 ;
 TYPE_2__* VAR_25 ;
 TYPE_1__* VAR_26 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*,int) ;
 char* VAR_27 ;

void FUNC_13( void ) {
 int VAR_28, VAR_29;
 int VAR_30;
 int VAR_31;

 FUNC_6();
 if ( !VAR_27[0] ) {
  return;
 }

 VAR_31 = FUNC_5( VAR_27 );

 for ( VAR_30 = 0 ; VAR_30 < VAR_4 ; VAR_30++ ) {
  if ( VAR_31 == VAR_24[VAR_30] && !FUNC_10( VAR_27, VAR_26[VAR_30].name ) ) {
   int VAR_32;
   int VAR_33;

   if ( VAR_26[VAR_30].opcode == VAR_18 ) {
    FUNC_0( "Undefined opcode: %s\n", VAR_27 );
   }
   if ( VAR_26[VAR_30].opcode == VAR_11 ) {
    return;
   }


   VAR_32 = VAR_26[VAR_30].opcode;
   if ( VAR_32 == VAR_17 ) {
    FUNC_6();
    if ( VAR_27[0] == '1' ) {
     VAR_32 = VAR_17;
    } else if ( VAR_27[0] == '2' ) {
     VAR_32 = VAR_16;
    } else {
     FUNC_0( "Bad sign extension: %s\n", VAR_27 );
     return;
    }
   }


   FUNC_6();
   if ( VAR_27[0] && VAR_26[VAR_30].opcode != VAR_9
     && VAR_26[VAR_30].opcode != VAR_8 ) {
    VAR_33 = FUNC_7();





    if ( VAR_32 == VAR_6 ) {
     VAR_33 = ( VAR_33 + 3 ) & ~3;
    }

    FUNC_2( &VAR_25[VAR_1], VAR_32 );
    FUNC_3( &VAR_25[VAR_1], VAR_33 );
   } else {
    FUNC_2( &VAR_25[VAR_1], VAR_32 );
   }

   VAR_23++;
   return;
  }
 }


 if ( !FUNC_12( VAR_27, "CALL", 4 ) ) {
  FUNC_2( &VAR_25[VAR_1], VAR_7 );
  VAR_23++;
  VAR_19 = 0;
  return;
 }


 if ( !FUNC_12( VAR_27, "ARG", 3 ) ) {
  FUNC_2( &VAR_25[VAR_1], VAR_5 );
  VAR_23++;
  if ( 8 + VAR_19 >= 256 ) {
   FUNC_0( "currentArgOffset >= 256" );
   return;
  }
  FUNC_2( &VAR_25[VAR_1], 8 + VAR_19 );
  VAR_19 += 4;
  return;
 }


 if ( !FUNC_12( VAR_27, "RET", 3 ) ) {
  FUNC_2( &VAR_25[VAR_1], VAR_12 );
  VAR_23++;
  FUNC_3( &VAR_25[VAR_1], 8 + VAR_21 + VAR_20 );
  return;
 }



 if ( !FUNC_12( VAR_27, "pop", 3 ) ) {
  FUNC_2( &VAR_25[VAR_1], VAR_14 );
  VAR_23++;
  return;
 }


 if ( !FUNC_12( VAR_27, "ADDRF", 5 ) ) {
  VAR_23++;
  FUNC_6();
  VAR_28 = FUNC_7();
  VAR_28 = 16 + VAR_20 + VAR_21 + VAR_28;
  FUNC_2( &VAR_25[VAR_1], VAR_13 );
  FUNC_3( &VAR_25[VAR_1], VAR_28 );
  return;
 }


 if ( !FUNC_12( VAR_27, "ADDRL", 5 ) ) {
  VAR_23++;
  FUNC_6();
  VAR_28 = FUNC_7();
  VAR_28 = 8 + VAR_20 + VAR_28;
  FUNC_2( &VAR_25[VAR_1], VAR_13 );
  FUNC_3( &VAR_25[VAR_1], VAR_28 );
  return;
 }

 if ( !FUNC_10( VAR_27, "proc" ) ) {
  char VAR_34[1024];

  FUNC_6();
  FUNC_11( VAR_34, VAR_27 );

  FUNC_1( VAR_27, VAR_23 );

  VAR_21 = FUNC_8();
  VAR_21 = ( VAR_21 + 3 ) & ~3;
  VAR_20 = FUNC_8();
  VAR_20 = ( VAR_20 + 3 ) & ~3;

  if ( 8 + VAR_21 + VAR_20 >= 32767 ) {
   FUNC_0( "Locals > 32k in %s\n", VAR_34 );
  }

  VAR_23++;
  FUNC_2( &VAR_25[VAR_1], VAR_10 );
  FUNC_3( &VAR_25[VAR_1], 8 + VAR_21 + VAR_20 );
  return;
 }
 if ( !FUNC_10( VAR_27, "endproc" ) ) {
  FUNC_6();
  VAR_28 = FUNC_8();
  VAR_29 = FUNC_8();


  VAR_23++;
  FUNC_2( &VAR_25[VAR_1], VAR_15 );

  VAR_23++;
  FUNC_2( &VAR_25[VAR_1], VAR_12 );
  FUNC_3( &VAR_25[VAR_1], 8 + VAR_21 + VAR_20 );

  return;
 }


 if ( !FUNC_10( VAR_27, "address" ) ) {
  FUNC_6();
  VAR_28 = FUNC_7();

  FUNC_4( VAR_2 );
  FUNC_3( VAR_22, VAR_28 );
  return;
 }
 if ( !FUNC_10( VAR_27, "export" ) ) {
  return;
 }
 if ( !FUNC_10( VAR_27, "import" ) ) {
  return;
 }
 if ( !FUNC_10( VAR_27, "code" ) ) {
  VAR_22 = &VAR_25[VAR_1];
  return;
 }
 if ( !FUNC_10( VAR_27, "bss" ) ) {
  VAR_22 = &VAR_25[VAR_0];
  return;
 }
 if ( !FUNC_10( VAR_27, "data" ) ) {
  VAR_22 = &VAR_25[VAR_2];
  return;
 }
 if ( !FUNC_10( VAR_27, "lit" ) ) {
  VAR_22 = &VAR_25[VAR_3];
  return;
 }
 if ( !FUNC_10( VAR_27, "line" ) ) {
  return;
 }
 if ( !FUNC_10( VAR_27, "file" ) ) {
  return;
 }

 if ( !FUNC_10( VAR_27, "equ" ) ) {
  char VAR_35[1024];

  FUNC_6();
  FUNC_11( VAR_35, VAR_27 );
  FUNC_6();
  FUNC_1( VAR_35, FUNC_9(VAR_27) );
  return;
 }

 if ( !FUNC_10( VAR_27, "align" ) ) {
  VAR_28 = FUNC_8();
  VAR_22->imageUsed = (VAR_22->imageUsed + VAR_28 - 1 ) & ~( VAR_28 - 1 );
  return;
 }

 if ( !FUNC_10( VAR_27, "skip" ) ) {
  VAR_28 = FUNC_8();
  VAR_22->imageUsed += VAR_28;
  return;
 }

 if ( !FUNC_10( VAR_27, "byte" ) ) {
  VAR_28 = FUNC_8();
  VAR_29 = FUNC_8();

  if ( VAR_28 == 1 ) {
   FUNC_4( VAR_3 );
  } else if ( VAR_28 == 4 ) {
   FUNC_4( VAR_2 );
  } else if ( VAR_28 == 2 ) {
   FUNC_0( "16 bit initialized data not supported" );
  }


  for ( VAR_30 = 0 ; VAR_30 < VAR_28 ; VAR_30++ ) {
   FUNC_2( VAR_22, VAR_29 );
   VAR_29 >>= 8;
  }
  return;
 }





 if ( !FUNC_12( VAR_27, "LABEL", 5 ) ) {
  FUNC_6();
  if ( VAR_22 == &VAR_25[VAR_1] ) {
   FUNC_1( VAR_27, VAR_23 );
  } else {
   FUNC_1( VAR_27, VAR_22->imageUsed );
  }
  return;
 }

 FUNC_0( "Unknown token: %s\n", VAR_27 );
}
