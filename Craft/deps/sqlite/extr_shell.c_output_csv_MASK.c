
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {char const* nullvalue; char const* separator; int * out; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (char const,int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(struct callback_data *VAR_1, const char *VAR_2, int VAR_3){
  FILE *VAR_4 = VAR_1->out;
  if( VAR_2==0 ){
    FUNC_0(VAR_4,"%s",VAR_1->nullvalue);
  }else{
    int VAR_5;
    int VAR_6 = FUNC_3(VAR_1->separator);
    for(VAR_5=0; VAR_2[VAR_5]; VAR_5++){
      if( VAR_0[((unsigned char*)VAR_2)[VAR_5]]
         || (VAR_2[VAR_5]==VAR_1->separator[0] &&
             (VAR_6==1 || FUNC_1(VAR_2, VAR_1->separator, VAR_6)==0)) ){
        VAR_5 = 0;
        break;
      }
    }
    if( VAR_5==0 ){
      FUNC_2('"', VAR_4);
      for(VAR_5=0; VAR_2[VAR_5]; VAR_5++){
        if( VAR_2[VAR_5]=='"' ) FUNC_2('"', VAR_4);
        FUNC_2(VAR_2[VAR_5], VAR_4);
      }
      FUNC_2('"', VAR_4);
    }else{
      FUNC_0(VAR_4, "%s", VAR_2);
    }
  }
  if( VAR_3 ){
    FUNC_0(VAR_1->out, "%s", VAR_1->separator);
  }
}
