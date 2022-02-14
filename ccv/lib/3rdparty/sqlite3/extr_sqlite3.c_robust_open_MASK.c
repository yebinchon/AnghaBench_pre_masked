
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int mode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (char const*,int,int) ;
 int FUNC_5 (int ,char*,char const*,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_9, int VAR_10, mode_t VAR_11){
  int VAR_12;
  mode_t VAR_13 = VAR_11 ? VAR_11 : VAR_5;
  while(1){



    VAR_12 = FUNC_4(VAR_9,VAR_10,VAR_13);

    if( VAR_12<0 ){
      if( VAR_8==VAR_0 ) continue;
      break;
    }
    if( VAR_12>=VAR_6 ) break;
    FUNC_0(VAR_12);
    FUNC_5(VAR_7,
                "attempt to open \"%s\" as file descriptor %d", VAR_9, VAR_12);
    VAR_12 = -1;
    if( FUNC_4("/dev/null", VAR_10, VAR_11)<0 ) break;
  }
  if( VAR_12>=0 ){
    if( VAR_11!=0 ){
      struct stat VAR_14;
      if( FUNC_3(VAR_12, &VAR_14)==0
       && VAR_14.st_size==0
       && (VAR_14.st_mode&0777)!=VAR_11
      ){
        FUNC_1(VAR_12, VAR_11);
      }
    }



  }
  return VAR_12;
}
