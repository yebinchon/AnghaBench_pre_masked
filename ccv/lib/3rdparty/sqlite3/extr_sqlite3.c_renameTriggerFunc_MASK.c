
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char const u8 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
struct TYPE_2__ {char* z; int n; } ;
typedef TYPE_1__ Token ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char const*,int*) ;
 char* FUNC_3 (int *,char*,int,unsigned char const*,unsigned char const*,char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int,int ) ;
 unsigned char* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_7,
  int VAR_8,
  sqlite3_value **VAR_9
){
  unsigned char const *VAR_10 = FUNC_6(VAR_9[0]);
  unsigned char const *VAR_11 = FUNC_6(VAR_9[1]);

  int VAR_12;
  Token VAR_13;
  int VAR_14 = 3;
  unsigned char const *VAR_15 = VAR_10;
  int VAR_16 = 0;
  char *VAR_17;
  sqlite3 *VAR_18 = FUNC_4(VAR_7);

  FUNC_0(VAR_8);






  if( VAR_10 ){
    do {

      if( !*VAR_15 ){

        return;
      }


      VAR_13.z = (char*)VAR_15;
      VAR_13.n = VAR_16;




      do {
        VAR_15 += VAR_16;
        VAR_16 = FUNC_2(VAR_15, &VAR_12);
      }while( VAR_12==VAR_5 );
      FUNC_1( VAR_16>0 );
      VAR_14++;
      if( VAR_12==VAR_2 || VAR_12==VAR_4 ){
        VAR_14 = 0;
      }
    } while( VAR_14!=2 || (VAR_12!=VAR_6 && VAR_12!=VAR_3 && VAR_12!=VAR_1) );




    VAR_17 = FUNC_3(VAR_18, "%.*s\"%w\"%s", (int)(((u8*)VAR_13.z) - VAR_10),
       VAR_10, VAR_11, VAR_13.z+VAR_13.n);
    FUNC_5(VAR_7, VAR_17, -1, VAR_0);
  }
}
