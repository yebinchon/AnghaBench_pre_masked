
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {char* zDbFilename; char* separator; char* nullvalue; int showHeader; int echoOn; int statsOn; scalar_t__ db; int mode; int out; } ;
typedef int sqlite3_vfs ;
typedef int sqlite3_int64 ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_10 ;
 char* FUNC_1 (int,char**,int) ;
 int FUNC_2 (char*,struct callback_data*) ;
 int FUNC_3 (int) ;
 char* FUNC_4 () ;
 int FUNC_5 (void*,char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct callback_data*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (struct callback_data*) ;
 int FUNC_13 (char*,char*,char*) ;
 int FUNC_14 (struct callback_data*,int ) ;
 int FUNC_15 (struct callback_data*,char const*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct callback_data*,int ) ;
 int VAR_13 ;
 int FUNC_18 (scalar_t__,char*,int ,struct callback_data*,char**) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int ,...) ;
 char* FUNC_22 () ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int,char*,char*,char*) ;
 char* FUNC_25 () ;
 int * FUNC_26 (char*) ;
 int FUNC_27 (int *,int) ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_28 (int) ;
 scalar_t__ FUNC_29 (char*,char*) ;
 int FUNC_30 (char*) ;
 int FUNC_31 (int) ;
 int FUNC_32 (char*) ;

int FUNC_33(int VAR_18, char **VAR_19){
  char *VAR_20 = 0;
  struct callback_data VAR_21;
  const char *VAR_22 = 0;
  char *VAR_23 = 0;
  int VAR_24;
  int VAR_25 = 0;

  if( FUNC_29(FUNC_25(),VAR_9)!=0 ){
    FUNC_5(VAR_14, "SQLite header and source version mismatch\n%s\n%s\n",
            FUNC_25(), VAR_9);
    FUNC_3(1);
  }
  VAR_0 = VAR_19[0];
  FUNC_9(&VAR_21);
  VAR_16 = FUNC_8(0);
  for(VAR_24=1; VAR_24<VAR_18; VAR_24++){
    char *VAR_26;
    VAR_26 = VAR_19[VAR_24];
    if( VAR_26[0]!='-' ){
      if( VAR_21.zDbFilename==0 ){
        VAR_21.zDbFilename = VAR_26;
        continue;
      }
      if( VAR_23==0 ){
        VAR_23 = VAR_26;
        continue;
      }
      FUNC_5(VAR_14,"%s: Error: too many options: \"%s\"\n", VAR_0, VAR_19[VAR_24]);
      FUNC_5(VAR_14,"Use -help for a list of options.\n");
      return 1;
    }
    if( VAR_26[1]=='-' ) VAR_26++;
    if( FUNC_29(VAR_26,"-separator")==0
     || FUNC_29(VAR_26,"-nullvalue")==0
     || FUNC_29(VAR_26,"-cmd")==0
    ){
      (void)FUNC_1(VAR_18, VAR_19, ++VAR_24);
    }else if( FUNC_29(VAR_26,"-init")==0 ){
      VAR_22 = FUNC_1(VAR_18, VAR_19, ++VAR_24);
    }else if( FUNC_29(VAR_26,"-batch")==0 ){




      VAR_16 = 0;
    }else if( FUNC_29(VAR_26,"-heap")==0 ){
    }else if( FUNC_29(VAR_26,"-mmap")==0 ){
      sqlite3_int64 VAR_27 = FUNC_7(FUNC_1(VAR_18,VAR_19,++VAR_24));
      FUNC_21(VAR_8, VAR_27, VAR_27);
    }else if( FUNC_29(VAR_26,"-vfs")==0 ){
      sqlite3_vfs *VAR_28 = FUNC_26(FUNC_1(VAR_18,VAR_19,++VAR_24));
      if( VAR_28 ){
        FUNC_27(VAR_28, 1);
      }else{
        FUNC_5(VAR_14, "no such VFS: \"%s\"\n", VAR_19[VAR_24]);
        FUNC_3(1);
      }
    }
  }
  if( VAR_21.zDbFilename==0 ){

    VAR_21.zDbFilename = ":memory:";




  }
  VAR_21.out = VAR_17;






  if( FUNC_0(VAR_21.zDbFilename, 0)==0 ){
    FUNC_12(&VAR_21);
  }





  VAR_25 = FUNC_15(&VAR_21,VAR_22);
  if( VAR_25>0 ){
    return VAR_25;
  }






  for(VAR_24=1; VAR_24<VAR_18; VAR_24++){
    char *VAR_29 = VAR_19[VAR_24];
    if( VAR_29[0]!='-' ) continue;
    if( VAR_29[1]=='-' ){ VAR_29++; }
    if( FUNC_29(VAR_29,"-init")==0 ){
      VAR_24++;
    }else if( FUNC_29(VAR_29,"-html")==0 ){
      VAR_21.mode = VAR_3;
    }else if( FUNC_29(VAR_29,"-list")==0 ){
      VAR_21.mode = VAR_5;
    }else if( FUNC_29(VAR_29,"-line")==0 ){
      VAR_21.mode = VAR_4;
    }else if( FUNC_29(VAR_29,"-column")==0 ){
      VAR_21.mode = VAR_1;
    }else if( FUNC_29(VAR_29,"-csv")==0 ){
      VAR_21.mode = VAR_2;
      FUNC_11(VAR_21.separator,",",2);
    }else if( FUNC_29(VAR_29,"-separator")==0 ){
      FUNC_24(sizeof(VAR_21.separator), VAR_21.separator,
                       "%s",FUNC_1(VAR_18,VAR_19,++VAR_24));
    }else if( FUNC_29(VAR_29,"-nullvalue")==0 ){
      FUNC_24(sizeof(VAR_21.nullvalue), VAR_21.nullvalue,
                       "%s",FUNC_1(VAR_18,VAR_19,++VAR_24));
    }else if( FUNC_29(VAR_29,"-header")==0 ){
      VAR_21.showHeader = 1;
    }else if( FUNC_29(VAR_29,"-noheader")==0 ){
      VAR_21.showHeader = 0;
    }else if( FUNC_29(VAR_29,"-echo")==0 ){
      VAR_21.echoOn = 1;
    }else if( FUNC_29(VAR_29,"-stats")==0 ){
      VAR_21.statsOn = 1;
    }else if( FUNC_29(VAR_29,"-bail")==0 ){
      VAR_10 = 1;
    }else if( FUNC_29(VAR_29,"-version")==0 ){
      FUNC_13("%s %s\n", FUNC_22(), FUNC_25());
      return 0;
    }else if( FUNC_29(VAR_29,"-interactive")==0 ){
      VAR_16 = 1;
    }else if( FUNC_29(VAR_29,"-batch")==0 ){
      VAR_16 = 0;
    }else if( FUNC_29(VAR_29,"-heap")==0 ){
      VAR_24++;
    }else if( FUNC_29(VAR_29,"-mmap")==0 ){
      VAR_24++;
    }else if( FUNC_29(VAR_29,"-vfs")==0 ){
      VAR_24++;
    }else if( FUNC_29(VAR_29,"-help")==0 ){
      FUNC_31(1);
    }else if( FUNC_29(VAR_29,"-cmd")==0 ){
      if( VAR_24==VAR_18-1 ) break;
      VAR_29 = FUNC_1(VAR_18,VAR_19,++VAR_24);
      if( VAR_29[0]=='.' ){
        VAR_25 = FUNC_2(VAR_29, &VAR_21);
        if( VAR_25 && VAR_10 ) return VAR_25==2 ? 0 : VAR_25;
      }else{
        FUNC_12(&VAR_21);
        VAR_25 = FUNC_18(VAR_21.db, VAR_29, VAR_13, &VAR_21, &VAR_20);
        if( VAR_20!=0 ){
          FUNC_5(VAR_14,"Error: %s\n", VAR_20);
          if( VAR_10 ) return VAR_25!=0 ? VAR_25 : 1;
        }else if( VAR_25!=0 ){
          FUNC_5(VAR_14,"Error: unable to process SQL \"%s\"\n", VAR_29);
          if( VAR_10 ) return VAR_25;
        }
      }
    }else{
      FUNC_5(VAR_14,"%s: Error: unknown option: %s\n", VAR_0, VAR_29);
      FUNC_5(VAR_14,"Use -help for a list of options.\n");
      return 1;
    }
  }

  if( VAR_23 ){


    if( VAR_23[0]=='.' ){
      VAR_25 = FUNC_2(VAR_23, &VAR_21);
      if( VAR_25==2 ) VAR_25 = 0;
    }else{
      FUNC_12(&VAR_21);
      VAR_25 = FUNC_18(VAR_21.db, VAR_23, VAR_13, &VAR_21, &VAR_20);
      if( VAR_20!=0 ){
        FUNC_5(VAR_14,"Error: %s\n", VAR_20);
        return VAR_25!=0 ? VAR_25 : 1;
      }else if( VAR_25!=0 ){
        FUNC_5(VAR_14,"Error: unable to process SQL \"%s\"\n", VAR_23);
        return VAR_25;
      }
    }
  }else{


    if( VAR_16 ){
      char *VAR_30;
      char *VAR_31 = 0;
      int VAR_32;
      FUNC_13(
        "SQLite version %s %.19s\n"
        "Enter \".help\" for instructions\n"
        "Enter SQL statements terminated with a \";\"\n",
        FUNC_22(), FUNC_25()
      );
      VAR_30 = FUNC_4();
      if( VAR_30 ){
        VAR_32 = FUNC_30(VAR_30) + 20;
        if( (VAR_31 = FUNC_10(VAR_32))!=0 ){
          FUNC_24(VAR_32, VAR_31,"%s/.sqlite_history", VAR_30);
        }
      }



      VAR_25 = FUNC_14(&VAR_21, 0);
      if( VAR_31 ){
        FUNC_28(100);
        FUNC_32(VAR_31);
        FUNC_6(VAR_31);
      }
    }else{
      VAR_25 = FUNC_14(&VAR_21, VAR_15);
    }
  }
  FUNC_17(&VAR_21, 0);
  if( VAR_21.db ){
    FUNC_20(VAR_21.db);
  }
  return VAR_25;
}
