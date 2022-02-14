
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zPrefix ;
struct callback_data {int db; scalar_t__ cnt; scalar_t__ echoOn; int out; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int VAR_2 ;
 int FUNC_5 (char*,struct callback_data*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char*,char*,int) ;
 char* FUNC_12 (char*,int *) ;
 int FUNC_13 (struct callback_data*) ;
 int FUNC_14 (char*,...) ;
 char* FUNC_15 (char*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int ,char*,int ,struct callback_data*,char**) ;
 scalar_t__ FUNC_17 (char*) ;
 char* FUNC_18 (int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int,char*,char*,...) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_21 (char*) ;

__attribute__((used)) static int FUNC_22(struct callback_data *VAR_7, FILE *VAR_8){
  char *VAR_9 = 0;
  char *VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;
  char *VAR_13;
  int VAR_14;
  int VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17 = 0;

  while( VAR_15==0 || !VAR_2 || (VAR_8==0 && VAR_6) ){
    FUNC_7(VAR_7->out);
    FUNC_9(VAR_9);
    VAR_9 = FUNC_12(VAR_10, VAR_8);
    if( VAR_9==0 ){

      if( VAR_6 ) FUNC_14("\n");
      break;
    }
    if( VAR_3 ){
      if( VAR_8!=0 ) break;
      VAR_3 = 0;
    }
    VAR_16++;
    if( (VAR_10==0 || VAR_10[0]==0) && FUNC_1(VAR_9) ) continue;
    if( VAR_9 && VAR_9[0]=='.' && VAR_11==0 ){
      if( VAR_7->echoOn ) FUNC_14("%s\n", VAR_9);
      VAR_14 = FUNC_5(VAR_9, VAR_7);
      if( VAR_14==2 ){
        break;
      }else if( VAR_14 ){
        VAR_15++;
      }
      continue;
    }
    if( FUNC_3(VAR_9) && FUNC_4(VAR_10, VAR_11) ){
      FUNC_11(VAR_9,";",2);
    }
    VAR_12 = VAR_11;
    if( VAR_10==0 ){
      int VAR_18;
      for(VAR_18=0; VAR_9[VAR_18] && FUNC_0(VAR_9[VAR_18]); VAR_18++){}
      if( VAR_9[VAR_18]!=0 ){
        VAR_11 = FUNC_21(VAR_9);
        VAR_10 = FUNC_10( VAR_11+3 );
        if( VAR_10==0 ){
          FUNC_8(VAR_5, "Error: out of memory\n");
          FUNC_6(1);
        }
        FUNC_11(VAR_10, VAR_9, VAR_11+1);
        VAR_17 = VAR_16;
      }
    }else{
      int VAR_19 = FUNC_21(VAR_9);
      VAR_10 = FUNC_15( VAR_10, VAR_11 + VAR_19 + 4 );
      if( VAR_10==0 ){
        FUNC_8(VAR_5,"Error: out of memory\n");
        FUNC_6(1);
      }
      VAR_10[VAR_11++] = '\n';
      FUNC_11(&VAR_10[VAR_11], VAR_9, VAR_19+1);
      VAR_11 += VAR_19;
    }
    if( VAR_10 && FUNC_2(&VAR_10[VAR_12], VAR_11-VAR_12)
                && FUNC_17(VAR_10) ){
      VAR_7->cnt = 0;
      FUNC_13(VAR_7);
      VAR_0;
      VAR_14 = FUNC_16(VAR_7->db, VAR_10, VAR_4, VAR_7, &VAR_13);
      VAR_1;
      if( VAR_14 || VAR_13 ){
        char VAR_20[100];
        if( VAR_8!=0 || !VAR_6 ){
          FUNC_20(sizeof(VAR_20), VAR_20,
                           "Error: near line %d:", VAR_17);
        }else{
          FUNC_20(sizeof(VAR_20), VAR_20, "Error:");
        }
        if( VAR_13!=0 ){
          FUNC_8(VAR_5, "%s %s\n", VAR_20, VAR_13);
          FUNC_19(VAR_13);
          VAR_13 = 0;
        }else{
          FUNC_8(VAR_5, "%s %s\n", VAR_20, FUNC_18(VAR_7->db));
        }
        VAR_15++;
      }
      FUNC_9(VAR_10);
      VAR_10 = 0;
      VAR_11 = 0;
    }else if( VAR_10 && FUNC_1(VAR_10) ){
      FUNC_9(VAR_10);
      VAR_10 = 0;
      VAR_11 = 0;
    }
  }
  if( VAR_10 ){
    if( !FUNC_1(VAR_10) ){
      FUNC_8(VAR_5, "Error: incomplete SQL: %s\n", VAR_10);
    }
    FUNC_9(VAR_10);
  }
  FUNC_9(VAR_9);
  return VAR_15>0;
}
