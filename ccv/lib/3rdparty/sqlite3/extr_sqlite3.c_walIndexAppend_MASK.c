
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int volatile u32 ;
typedef int ht_slot ;
typedef int Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int volatile) ;
 int FUNC_4 (int volatile) ;
 int FUNC_5 (int *,int ,int volatile**,int volatile**,int volatile*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(Wal *VAR_3, u32 VAR_4, u32 VAR_5){
  int VAR_6;
  u32 VAR_7 = 0;
  volatile u32 *VAR_8 = 0;
  volatile ht_slot *VAR_9 = 0;

  VAR_6 = FUNC_5(VAR_3, FUNC_3(VAR_4), &VAR_9, &VAR_8, &VAR_7);




  if( VAR_6==VAR_2 ){
    int VAR_10;
    int VAR_11;
    int VAR_12;

    VAR_11 = VAR_4 - VAR_7;
    FUNC_0( VAR_11 <= VAR_0/2 + 1 );




    if( VAR_11==1 ){
      int VAR_13 = (int)((u8 *)&VAR_9[VAR_0] - (u8 *)&VAR_8[1]);
      FUNC_1((void*)&VAR_8[1], 0, VAR_13);
    }







    if( VAR_8[VAR_11] ){
      FUNC_2(VAR_3);
      FUNC_0( !VAR_8[VAR_11] );
    }


    VAR_12 = VAR_11;
    for(VAR_10=FUNC_4(VAR_5); VAR_9[VAR_10]; VAR_10=FUNC_6(VAR_10)){
      if( (VAR_12--)==0 ) return VAR_1;
    }
    VAR_8[VAR_11] = VAR_5;
    VAR_9[VAR_10] = (ht_slot)VAR_11;
  }


  return VAR_6;
}
