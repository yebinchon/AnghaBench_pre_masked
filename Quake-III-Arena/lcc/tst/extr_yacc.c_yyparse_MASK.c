
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int YYSTYPE ;


 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 size_t* VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 scalar_t__ VAR_7 ;
 short* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 short* VAR_11 ;
 int FUNC_2 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 short* VAR_14 ;
 short* VAR_15 ;
 short* VAR_16 ;
 int * VAR_17 ;
 char* VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;

FUNC_3() {

 short VAR_21[VAR_3];
 short VAR_22, VAR_23;
 register YYSTYPE *VAR_24;
 register short VAR_25, *VAR_26, VAR_27;
 register YYSTYPE *VAR_28;
 register short *VAR_29;

 VAR_25 = 0;
 VAR_5 = -1;
 VAR_13 = 0;
 VAR_9 = 0;
 VAR_26= &VAR_21[-1];
 VAR_28= &VAR_19[-1];

 yystack:




  if( ++VAR_26> &VAR_21[VAR_3] ) { FUNC_1( "yacc stack overflow" ); return(1); }
  *VAR_26 = VAR_25;
  ++VAR_28;
  *VAR_28 = VAR_20;

 yynewstate:

 VAR_27 = VAR_14[VAR_25];

 if( VAR_27<= VAR_1 ) goto yydefault;

 if( VAR_5<0 ) if( (VAR_5=FUNC_2())<0 ) VAR_5=0;
 if( (VAR_27 += VAR_5)<0 || VAR_27 >= VAR_2 ) goto yydefault;

 if( VAR_6[ VAR_27=VAR_4[ VAR_27 ] ] == VAR_5 ){
  VAR_5 = -1;
  VAR_20 = VAR_12;
  VAR_25 = VAR_27;
  if( VAR_9 > 0 ) --VAR_9;
  goto yystack;
  }

 yydefault:


 if( (VAR_27=VAR_8[VAR_25]) == -2 ) {
  if( VAR_5<0 ) if( (VAR_5=FUNC_2())<0 ) VAR_5 = 0;


  for( VAR_29=VAR_11; (*VAR_29!= (-1)) || (VAR_29[1]!=VAR_25) ; VAR_29 += 2 ) ;

  while( *(VAR_29+=2) >= 0 ){
   if( *VAR_29 == VAR_5 ) break;
   }
  if( (VAR_27 = VAR_29[1]) < 0 ) return(0);
  }

 if( VAR_27 == 0 ){


  switch( VAR_9 ){

  case 0:

   FUNC_1( "syntax error" );
  yyerrlab:
   ++VAR_13;

  case 1:
  case 2:

   VAR_9 = 3;



   while ( VAR_26 >= VAR_21 ) {
      VAR_27 = VAR_14[*VAR_26] + VAR_0;
      if( VAR_27>= 0 && VAR_27 < VAR_2 && VAR_6[VAR_4[VAR_27]] == VAR_0 ){
         VAR_25 = VAR_4[VAR_27];
         goto yystack;
         }
      VAR_27 = VAR_14[*VAR_26];






      --VAR_26;
      --VAR_28;
      }



 yyabort:
   return(1);


  case 3:





   if( VAR_5 == 0 ) goto yyabort;
   VAR_5 = -1;
   goto yynewstate;

   }

  }






  VAR_26 -= VAR_17[VAR_27];
  VAR_24 = VAR_28;
  VAR_28 -= VAR_17[VAR_27];
  VAR_20 = VAR_28[1];
  VAR_23=VAR_27;

  VAR_27 = VAR_16[VAR_27];
  VAR_22 = VAR_15[VAR_27] + *VAR_26 + 1;
  if( VAR_22>=VAR_2 || VAR_6[ VAR_25 = VAR_4[VAR_22] ] != -VAR_27 ) VAR_25 = VAR_4[VAR_15[VAR_27]];
  switch(VAR_23){

case 4:
{ VAR_10; } break;
case 5:
{ FUNC_0("store\n"); } break;
case 6:
{ FUNC_0("add\n"); } break;
case 7:
{ FUNC_0("negate\nadd\n"); } break;
case 8:
{ FUNC_0("multiply\n"); } break;
case 9:
{ FUNC_0("divide\n"); } break;
case 10:
{ FUNC_0("negate\n"); } break;
case 12:
{ FUNC_0("load\n"); } break;
case 13:
{ FUNC_0("push %s\n", VAR_18); } break;
case 14:
{ FUNC_0("%s\n", VAR_18); } break;
  }
  goto yystack;

 }
