
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_7__ {int alloc; int used; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3 (mp_int * VAR_4, mp_int * VAR_5, mp_int * VAR_6, int VAR_7)
{
  int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  mp_digit VAR_13[VAR_3];
  register mp_word VAR_14;


  if (VAR_6->alloc < VAR_7) {
    if ((VAR_9 = FUNC_2 (VAR_6, VAR_7)) != VAR_2) {
      return VAR_9;
    }
  }


  VAR_10 = FUNC_0(VAR_7, VAR_4->used + VAR_5->used);


  VAR_14 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
      int VAR_15, VAR_16;
      int VAR_17;
      mp_digit *VAR_18, *VAR_19;


      VAR_16 = FUNC_0(VAR_5->used-1, VAR_11);
      VAR_15 = VAR_11 - VAR_16;


      VAR_18 = VAR_4->dp + VAR_15;
      VAR_19 = VAR_5->dp + VAR_16;




      VAR_17 = FUNC_0(VAR_4->used-VAR_15, VAR_16+1);


      for (VAR_12 = 0; VAR_12 < VAR_17; ++VAR_12) {
         VAR_14 += ((mp_word)*VAR_18++)*((mp_word)*VAR_19--);

      }


      VAR_13[VAR_11] = ((mp_digit)VAR_14) & VAR_1;


      VAR_14 = VAR_14 >> ((mp_word)VAR_0);
 }


  VAR_8 = VAR_6->used;
  VAR_6->used = VAR_10;

  {
    register mp_digit *VAR_20;
    VAR_20 = VAR_6->dp;
    for (VAR_11 = 0; VAR_11 < VAR_10+1; VAR_11++) {

      *VAR_20++ = VAR_13[VAR_11];
    }


    for (; VAR_11 < VAR_8; VAR_11++) {
      *VAR_20++ = 0;
    }
  }
  FUNC_1 (VAR_6);
  return VAR_2;
}
