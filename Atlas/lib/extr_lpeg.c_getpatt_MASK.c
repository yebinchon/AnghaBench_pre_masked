
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int * FUNC_0 (int *,int,int,int*) ;
 int * FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,int,int) ;
 int FUNC_12 (int *,int ,int ,int ,int ) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static Instruction *FUNC_14 (lua_State *VAR_10, int VAR_11, int *VAR_12) {
  Instruction *VAR_13;
  switch (FUNC_7(VAR_10, VAR_11)) {
    case 129: {
      size_t VAR_14, VAR_15;
      const char *VAR_16 = FUNC_6(VAR_10, VAR_11, &VAR_15);
      VAR_13 = FUNC_8(VAR_10, VAR_15);
      for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
        FUNC_11(VAR_13 + VAR_14, VAR_2, 0, (unsigned char)VAR_16[VAR_14]);
      FUNC_3(VAR_10, VAR_11);
      break;
    }
    case 130: {
      int VAR_17 = FUNC_5(VAR_10, VAR_11);
      if (VAR_17 == 0)
        VAR_13 = FUNC_8(VAR_10, 0);
      else if (VAR_17 > 0)
        VAR_13 = FUNC_0(VAR_10, VAR_17, 0, ((void*)0));
      else if (-VAR_17 <= VAR_9) {
        VAR_13 = FUNC_8(VAR_10, 2);
        FUNC_11(VAR_13, VAR_8, 2, -VAR_17);
        FUNC_10(VAR_13 + 1, VAR_5, 0);
      }
      else {
        int VAR_18 = 2;
        VAR_13 = FUNC_0(VAR_10, -VAR_17 - VAR_9, 3, &VAR_18);
        FUNC_11(VAR_13, VAR_8, VAR_18 + 1, VAR_9);
        FUNC_11(VAR_13 + 1, VAR_3, VAR_18, VAR_9);
        FUNC_10(VAR_13 + VAR_18, VAR_6, 0);
      }
      FUNC_3(VAR_10, VAR_11);
      break;
    }
    case 132: {
      if (FUNC_4(VAR_10, VAR_11))
        VAR_13 = FUNC_8(VAR_10, 0);
      else {
        VAR_13 = FUNC_8(VAR_10, 1);
        FUNC_10(VAR_13, VAR_5, 0);
      }
      FUNC_3(VAR_10, VAR_11);
      break;
    }
    case 128: {
      VAR_13 = FUNC_2(VAR_10, VAR_11);
      break;
    }
    case 131: {
      VAR_13 = FUNC_8(VAR_10, 2);
      FUNC_12(VAR_13, VAR_7, FUNC_13(VAR_10, VAR_11), VAR_1, 0);
      FUNC_12(VAR_13 + 1, VAR_4, 0, VAR_0, 0);
      FUNC_3(VAR_10, VAR_11);
      break;
    }
    default: {
      VAR_13 = FUNC_1(VAR_10, VAR_11);
      break;
    }
  }
  if (VAR_12) *VAR_12 = FUNC_9(VAR_10, VAR_11);
  return VAR_13;
}
