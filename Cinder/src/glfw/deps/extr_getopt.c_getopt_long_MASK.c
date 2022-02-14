
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* const name; int* flag; int val; scalar_t__ has_arg; } ;


 int FUNC_0 (int,char* const*,char const*) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (char* const,char) ;
 size_t FUNC_2 (char const*,char*) ;
 int FUNC_3 (char* const) ;
 scalar_t__ FUNC_4 (char* const,char const*,size_t) ;

int FUNC_5(int VAR_5, char* const VAR_6[], const char* VAR_7,
  const struct option* VAR_8, int* VAR_9) {
  const struct option* VAR_10 = VAR_8;
  const struct option* VAR_11 = ((void*)0);
  int VAR_12 = 0;
  size_t VAR_13 = 0;
  const char* VAR_14 = ((void*)0);
  int VAR_15 = -1;

  VAR_1 = ((void*)0);
  VAR_3 = 0;

  if (VAR_2 >= VAR_5)
    return -1;

  if (FUNC_3(VAR_6[VAR_2]) < 3 || FUNC_4(VAR_6[VAR_2], "--", 2) != 0)
    return FUNC_0(VAR_5, VAR_6, VAR_7);


  VAR_14 = VAR_6[VAR_2] + 2;
  VAR_13 = FUNC_2(VAR_14, "=");
  for (; VAR_10->name; ++VAR_10) {
    if (FUNC_4(VAR_10->name, VAR_14, VAR_13) == 0) {
      VAR_11 = VAR_10;
      ++VAR_12;
    }
  }

  if (VAR_12 == 1) {


    if (VAR_9)
      *VAR_9 = (int) (VAR_11 - VAR_8);





    if (VAR_11->flag)
      *(VAR_11->flag) = VAR_11->val;

    VAR_15 = VAR_11->flag ? 0 : VAR_11->val;

    if (VAR_11->has_arg != VAR_0) {
      VAR_1 = FUNC_1(VAR_6[VAR_2], '=');
      if (VAR_1 != ((void*)0))
        ++VAR_1;

      if (VAR_11->has_arg == VAR_4) {


        if (VAR_1 == ((void*)0) && ++VAR_2 < VAR_5) {
          VAR_1 = VAR_6[VAR_2];
        }

        if (VAR_1 == ((void*)0))
          VAR_15 = ':';
      }
    } else if (FUNC_1(VAR_6[VAR_2], '=')) {




      VAR_15 = '?';
    }
  } else {

    VAR_15 = '?';
  }

  ++VAR_2;
  return VAR_15;
}
