
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, char const *VAR_1, char VAR_2){
  int VAR_3;
  int VAR_4;
  int VAR_5 = FUNC_3(VAR_1);
  int VAR_6 = (VAR_0?FUNC_3(VAR_0):0);

  VAR_3 = VAR_5+VAR_6+1;
  if( VAR_2 ){
    VAR_3 += 2;
    for(VAR_4=0; VAR_4<VAR_5; VAR_4++){
      if( VAR_1[VAR_4]==VAR_2 ) VAR_3++;
    }
  }

  VAR_0 = (char *)FUNC_2(VAR_0, VAR_3);
  if( !VAR_0 ){
    return 0;
  }

  if( VAR_2 ){
    char *VAR_7 = &VAR_0[VAR_6];
    *VAR_7++ = VAR_2;
    for(VAR_4=0; VAR_4<VAR_5; VAR_4++){
      *VAR_7++ = VAR_1[VAR_4];
      if( VAR_1[VAR_4]==VAR_2 ) *VAR_7++ = VAR_2;
    }
    *VAR_7++ = VAR_2;
    *VAR_7++ = '\0';
    FUNC_0( (VAR_7-VAR_0)==VAR_3 );
  }else{
    FUNC_1(&VAR_0[VAR_6], VAR_1, VAR_5);
    VAR_0[VAR_3-1] = '\0';
  }

  return VAR_0;
}
