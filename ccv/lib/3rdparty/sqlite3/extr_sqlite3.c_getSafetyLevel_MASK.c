
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static u8 FUNC_5(const char *VAR_0, int VAR_1, u8 VAR_2){

  static const char VAR_3[] = "onoffalseyestruextrafull";
  static const u8 VAR_4[] = {0, 1, 2, 4, 9, 12, 15, 20};
  static const u8 VAR_5[] = {2, 2, 3, 5, 3, 4, 5, 4};
  static const u8 VAR_6[] = {1, 0, 0, 0, 1, 1, 3, 2};

  int VAR_7, VAR_8;
  if( FUNC_2(*VAR_0) ){
    return (u8)FUNC_1(VAR_0);
  }
  VAR_8 = FUNC_4(VAR_0);
  for(VAR_7=0; VAR_7<FUNC_0(VAR_5); VAR_7++){
    if( VAR_5[VAR_7]==VAR_8 && FUNC_3(&VAR_3[VAR_4[VAR_7]],VAR_0,VAR_8)==0
     && (!VAR_1 || VAR_6[VAR_7]<=1)
    ){
      return VAR_6[VAR_7];
    }
  }
  return VAR_2;
}
