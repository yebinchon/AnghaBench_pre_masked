
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,int*,int const*,int) ;
 int FUNC_1 (unsigned char const*,int const*,int*,int*,int*,int) ;
 int FUNC_2 (unsigned char const*,int const*,int*,int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char const*,int const*,int*,int*,int) ;
 int FUNC_5 (unsigned char const*,int const*,int*,int*,int*,int*,int,int) ;

__attribute__((used)) static
void
FUNC_6(const unsigned char *VAR_1, const int *VAR_2,
       int *VAR_3, int *VAR_4,
       int *VAR_5, int VAR_6,
       int VAR_7, int VAR_8, int VAR_9) {
  int *VAR_10;




  int VAR_11;

  if(VAR_9 != 0) { ++VAR_3; }


  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
  if(VAR_9 != 0) {

    int VAR_12[2]; VAR_12[0] = VAR_2[*(VAR_3 - 1)], VAR_12[1] = VAR_8 - 2;
    for(VAR_10 = VAR_3, VAR_11 = *(VAR_3 - 1);
        (VAR_10 < VAR_4) && ((*VAR_10 < 0) || (0 < FUNC_0(VAR_1, &(VAR_12[0]), VAR_2 + *VAR_10, VAR_7)));
        ++VAR_10) {
      *(VAR_10 - 1) = *VAR_10;
    }
    *(VAR_10 - 1) = VAR_11;
  }
}
