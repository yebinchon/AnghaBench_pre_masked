
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_page ;


 long* FUNC_0 (int) ;
 long* FUNC_1 (long*,int) ;
 long FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ogg_page *VAR_0,long **VAR_1, int *VAR_2){
  long VAR_3 = FUNC_2(VAR_0);
  (*VAR_2)++;

  if(*VAR_1){
    *VAR_1 = FUNC_1(*VAR_1, sizeof(**VAR_1)*(*VAR_2));
  }else{
    *VAR_1 = FUNC_0(sizeof(**VAR_1));
  }

  (*VAR_1)[(*VAR_2)-1] = VAR_3;
}
