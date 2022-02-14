
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,int*,int*,int*,int,int) ;
 int FUNC_1 (unsigned char const*,int*,int*,int*,int,int,unsigned char*,int*) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned char const*,int*,int*,int*,int,int) ;

int
FUNC_5(const unsigned char *VAR_2, unsigned char *VAR_3, int *VAR_4, int VAR_5, unsigned char * VAR_6, int * VAR_7, int VAR_8) {
  int *VAR_9;
  int *VAR_10, *VAR_11;
  int VAR_12, VAR_13, VAR_14;


  if((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_5 < 0)) { return -1; }
  else if(VAR_5 <= 1) { if(VAR_5 == 1) { VAR_3[0] = VAR_2[0]; } return VAR_5; }

  if((VAR_9 = VAR_4) == ((void*)0)) { VAR_9 = (int *)FUNC_3((size_t)(VAR_5 + 1) * sizeof(int)); }
  VAR_10 = (int *)FUNC_3(VAR_0 * sizeof(int));
  VAR_11 = (int *)FUNC_3(VAR_1 * sizeof(int));


  if((VAR_9 != ((void*)0)) && (VAR_10 != ((void*)0)) && (VAR_11 != ((void*)0))) {
    VAR_12 = FUNC_4(VAR_2, VAR_9, VAR_10, VAR_11, VAR_5, VAR_8);

    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        VAR_13 = FUNC_0(VAR_2, VAR_9, VAR_10, VAR_11, VAR_5, VAR_12);
    } else {
        VAR_13 = FUNC_1(VAR_2, VAR_9, VAR_10, VAR_11, VAR_5, VAR_12, VAR_6, VAR_7);
    }


    VAR_3[0] = VAR_2[VAR_5 - 1];
    for(VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) { VAR_3[VAR_14 + 1] = (unsigned char)VAR_9[VAR_14]; }
    for(VAR_14 += 1; VAR_14 < VAR_5; ++VAR_14) { VAR_3[VAR_14] = (unsigned char)VAR_9[VAR_14]; }
    VAR_13 += 1;
  } else {
    VAR_13 = -2;
  }

  FUNC_2(VAR_11);
  FUNC_2(VAR_10);
  if(VAR_4 == ((void*)0)) { FUNC_2(VAR_9); }

  return VAR_13;
}
