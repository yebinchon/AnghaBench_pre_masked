
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5, int *VAR_6){
  int VAR_7;
  int VAR_8 = -1;
  char VAR_9[VAR_0+1];

  FUNC_2(VAR_0, VAR_9, "%s", VAR_5);
  for(VAR_7=(int)FUNC_3(VAR_9); VAR_7>1 && VAR_9[VAR_7]!='/'; VAR_7--);
  if( VAR_7>0 ){
    VAR_9[VAR_7] = '\0';
    VAR_8 = FUNC_1(VAR_9, VAR_2|VAR_1, 0);
    if( VAR_8>=0 ){
      FUNC_0(("OPENDIR %-3d %s\n", VAR_8, VAR_9));
    }
  }
  *VAR_6 = VAR_8;
  return (VAR_8>=0?VAR_4:FUNC_4(VAR_3, "open", VAR_9));
}
