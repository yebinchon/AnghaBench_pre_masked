
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_7__ {int nCol; TYPE_3__* aCol; int zName; } ;
typedef TYPE_2__ Table ;
struct TYPE_8__ {scalar_t__ affinity; int zName; } ;
typedef TYPE_3__ Column ;


 scalar_t__ FUNC_0 (char const* const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int*,int ) ;
 int FUNC_4 (char*,char const*,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,char*,char*,...) ;
 int FUNC_9 (int) ;

__attribute__((used)) static char *FUNC_10(sqlite3 *VAR_5, Table *VAR_6){
  int VAR_7, VAR_8, VAR_9;
  char *VAR_10;
  char *VAR_11, *VAR_12, *VAR_13;
  Column *VAR_14;
  VAR_9 = 0;
  for(VAR_14 = VAR_6->aCol, VAR_7=0; VAR_7<VAR_6->nCol; VAR_7++, VAR_14++){
    VAR_9 += FUNC_2(VAR_14->zName) + 5;
  }
  VAR_9 += FUNC_2(VAR_6->zName);
  if( VAR_9<50 ){
    VAR_11 = "";
    VAR_12 = ",";
    VAR_13 = ")";
  }else{
    VAR_11 = "\n  ";
    VAR_12 = ",\n  ";
    VAR_13 = "\n)";
  }
  VAR_9 += 35 + 6*VAR_6->nCol;
  VAR_10 = FUNC_6(0, VAR_9);
  if( VAR_10==0 ){
    VAR_5->mallocFailed = 1;
    return 0;
  }
  FUNC_8(VAR_9, VAR_10, "CREATE TABLE ");
  VAR_8 = FUNC_7(VAR_10);
  FUNC_3(VAR_10, &VAR_8, VAR_6->zName);
  VAR_10[VAR_8++] = '(';
  for(VAR_14=VAR_6->aCol, VAR_7=0; VAR_7<VAR_6->nCol; VAR_7++, VAR_14++){
    static const char * const VAR_15[] = {
                                 " TEXT",
                                 "",
                                 " NUM",
                                 " INT",
                                 " REAL"
    };
    int VAR_16;
    const char *VAR_17;

    FUNC_8(VAR_9-VAR_8, &VAR_10[VAR_8], VAR_11);
    VAR_8 += FUNC_7(&VAR_10[VAR_8]);
    VAR_11 = VAR_12;
    FUNC_3(VAR_10, &VAR_8, VAR_14->zName);
    FUNC_1( VAR_14->affinity-VAR_4 >= 0 );
    FUNC_1( VAR_14->affinity-VAR_4 < FUNC_0(VAR_15) );
    FUNC_9( VAR_14->affinity==VAR_4 );
    FUNC_9( VAR_14->affinity==VAR_1 );
    FUNC_9( VAR_14->affinity==VAR_2 );
    FUNC_9( VAR_14->affinity==VAR_0 );
    FUNC_9( VAR_14->affinity==VAR_3 );

    VAR_17 = VAR_15[VAR_14->affinity - VAR_4];
    VAR_16 = FUNC_7(VAR_17);
    FUNC_1( VAR_14->affinity==VAR_1
            || VAR_14->affinity==FUNC_5(VAR_17) );
    FUNC_4(&VAR_10[VAR_8], VAR_17, VAR_16);
    VAR_8 += VAR_16;
    FUNC_1( VAR_8<=VAR_9 );
  }
  FUNC_8(VAR_9-VAR_8, &VAR_10[VAR_8], "%s", VAR_13);
  return VAR_10;
}
