
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef scalar_t__ fileHandle_t ;
typedef int descPath ;
struct TYPE_6__ {char* string; } ;
struct TYPE_5__ {char* string; } ;
struct TYPE_4__ {char* string; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ,int) ;
 char* FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char** FUNC_7 (char**,char**,char**) ;
 int FUNC_8 (char**) ;
 int FUNC_9 (char**) ;
 char** FUNC_10 (char*,char*,int *,int*,scalar_t__) ;
 int FUNC_11 (char*,int,int,int *) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;

int FUNC_15( char *VAR_6, int VAR_7 ) {
  int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  char **VAR_16 = ((void*)0);
  char **VAR_17 = ((void*)0);
  char *VAR_18, *VAR_19;
  char VAR_20[VAR_0];
  fileHandle_t VAR_21;

  int VAR_22;
  char **VAR_23 = ((void*)0);
  char **VAR_24 = ((void*)0);
  char **VAR_25 = ((void*)0);
  qboolean VAR_26 = VAR_4;

  *VAR_6 = 0;
  VAR_8 = VAR_14 = VAR_11 = 0;

  VAR_23 = FUNC_10( VAR_3->string, ((void*)0), ((void*)0), &VAR_22, VAR_5 );
  VAR_24 = FUNC_10( VAR_1->string, ((void*)0), ((void*)0), &VAR_22, VAR_5 );
  VAR_25 = FUNC_10( VAR_2->string, ((void*)0), ((void*)0), &VAR_22, VAR_5 );


  VAR_16 = FUNC_7( VAR_23, VAR_24, VAR_25 );
  VAR_14 = FUNC_8(VAR_16);

  for ( VAR_9 = 0 ; VAR_9 < VAR_14 ; VAR_9++ ) {
    VAR_18 = VAR_16[VAR_9];


    if (VAR_9!=0) {
      VAR_26 = VAR_4;
      for(VAR_10=0; VAR_10<VAR_9; VAR_10++)
      {
        if (FUNC_5(VAR_16[VAR_10],VAR_18)==0) {

          VAR_26 = VAR_5;
          break;
        }
      }
    }
    if (VAR_26) {
      continue;
    }

    if (FUNC_5(VAR_18, "baseq3") && FUNC_6(VAR_18, ".", 1)) {





      VAR_19 = FUNC_1( VAR_1->string, VAR_18, "" );
      VAR_13 = 0;
      VAR_17 = FUNC_10(VAR_19, ".pk3", ((void*)0), &VAR_13, VAR_4);
      FUNC_9( VAR_17 );


      if( VAR_13 <= 0 ) {
        VAR_19 = FUNC_1( VAR_2->string, VAR_18, "" );
        VAR_13 = 0;
        VAR_17 = FUNC_10( VAR_19, ".pk3", ((void*)0), &VAR_13, VAR_4 );
        FUNC_9( VAR_17 );
      }


      if ( VAR_13 <= 0 )
      {
        VAR_19 = FUNC_1( VAR_3->string, VAR_18, "" );
        VAR_13 = 0;
        VAR_17 = FUNC_10( VAR_19, ".pk3", ((void*)0), &VAR_13, VAR_4 );
        FUNC_9( VAR_17 );
      }

      if (VAR_13 > 0) {
        VAR_12 = FUNC_14(VAR_18) + 1;


        VAR_20[0] = '\0';
        FUNC_13(VAR_20, VAR_18);
        FUNC_12(VAR_20, "/description.txt");
        VAR_15 = FUNC_4( VAR_20, &VAR_21 );
        if ( VAR_15 > 0 && VAR_21) {
          FILE *VAR_27;
          VAR_27 = FUNC_3(VAR_21);
          FUNC_0( VAR_20, 0, sizeof( VAR_20 ) );
          VAR_15 = FUNC_11(VAR_20, 1, 48, VAR_27);
          if (VAR_15 >= 0) {
            VAR_20[VAR_15] = '\0';
          }
          FUNC_2(VAR_21);
        } else {
          FUNC_13(VAR_20, VAR_18);
        }
        VAR_15 = FUNC_14(VAR_20) + 1;

        if (VAR_11 + VAR_12 + 1 + VAR_15 + 1 < VAR_7) {
          FUNC_13(VAR_6, VAR_18);
          VAR_6 += VAR_12;
          FUNC_13(VAR_6, VAR_20);
          VAR_6 += VAR_15;
          VAR_11 += VAR_12 + VAR_15;
          VAR_8++;
        }
        else {
          break;
        }
      }
    }
  }
  FUNC_9( VAR_16 );

  return VAR_8;
}
