
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tOrderDescriptor ;
typedef int int32_t ;
typedef int (* __ext_compar_fn_t ) (void*,void*,int *) ;


 int VAR_0 ;
 int FUNC_0 (void**,size_t,int,int,int *,int (*) (void*,void*,int *)) ;
 int FUNC_1 (void**,size_t,int,int,int *,int (*) (void*,void*,int *)) ;
 int FUNC_2 (void**,void**,int ,size_t) ;

void FUNC_3(void **VAR_1, size_t VAR_2, int32_t VAR_3, int32_t VAR_4, void *VAR_5, __ext_compar_fn_t VAR_6) {
  tOrderDescriptor *VAR_7 = (tOrderDescriptor *)VAR_5;


  if (VAR_4 - VAR_3 + 1 <= 8) {
    FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7, VAR_6);
    return;
  }

  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7, VAR_6);

  int32_t VAR_8 = VAR_3, VAR_9 = VAR_4;
  int32_t VAR_10 = VAR_4, VAR_11 = VAR_3;

  while (VAR_8 < VAR_9) {
    while (VAR_9 > VAR_8) {
      int32_t VAR_12 = VAR_6(VAR_1[VAR_9], VAR_1[VAR_8], VAR_7);
      if (VAR_12 < 0) {
        break;
      }




      if (VAR_12 == 0 && VAR_9 != VAR_10) {
        FUNC_2(&VAR_1[VAR_9], &VAR_1[VAR_10--], VAR_0, VAR_2);
      }

      VAR_9--;
    }

    if (VAR_9 != VAR_8) {
      FUNC_2(&VAR_1[VAR_9], &VAR_1[VAR_8], VAR_0, VAR_2);
    }

    while (VAR_8 < VAR_9) {
      int32_t VAR_13 = VAR_6(VAR_1[VAR_8], VAR_1[VAR_9], VAR_7);
      if (VAR_13 > 0) {
        break;
      }

      if (VAR_13 == 0 && VAR_8 != VAR_11) {
        FUNC_2(&VAR_1[VAR_8], &VAR_1[VAR_11++], VAR_0, VAR_2);
      }
        VAR_8++;
    }

      if (VAR_9 != VAR_8) {
        FUNC_2(&VAR_1[VAR_8], &VAR_1[VAR_9], VAR_0, VAR_2);
      }
  }

  int32_t VAR_14 = VAR_9 + 1;
  if (VAR_10 != VAR_4 && VAR_9 < VAR_4) {
    int32_t VAR_15 = VAR_14;
    int32_t VAR_16 = VAR_4;

    while (VAR_16 > VAR_10 && VAR_15 <= VAR_10) {
      FUNC_2(&VAR_1[VAR_15++], &VAR_1[VAR_16--], VAR_0, VAR_2);
    }

    VAR_14 += (VAR_4 - VAR_10);
  }

  int32_t VAR_17 = VAR_9 - 1;
  if (VAR_11 != VAR_4 && VAR_8 > VAR_3) {
    int32_t VAR_18 = VAR_3;
    int32_t VAR_19 = VAR_17;

    while (VAR_18 < VAR_11 && VAR_19 >= VAR_11) {
      FUNC_2(&VAR_1[VAR_18++], &VAR_1[VAR_19--], VAR_0, VAR_2);
    }

    VAR_17 -= (VAR_11 - VAR_3);
  }

  if (VAR_17 > VAR_3) {
    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_17, VAR_7, VAR_6);
  }

  if (VAR_14 < VAR_4) {
    FUNC_3(VAR_1, VAR_2, VAR_14, VAR_4, VAR_7, VAR_6);
  }
}
