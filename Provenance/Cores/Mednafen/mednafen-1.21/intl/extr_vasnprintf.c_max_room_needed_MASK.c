
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {TYPE_2__* arg; } ;
typedef TYPE_3__ arguments ;
typedef int arg_type ;
struct TYPE_5__ {char* a_string; int * a_wide_string; } ;
struct TYPE_6__ {TYPE_1__ a; } ;
typedef int FCHAR_T ;


 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;
 size_t FUNC_1 (char const*,size_t) ;
 size_t FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*,size_t) ;
 size_t FUNC_4 (char const*) ;
 size_t FUNC_5 (size_t,int) ;

__attribute__((used)) static inline size_t
FUNC_6 (const arguments *VAR_13, size_t VAR_14, FCHAR_T VAR_15,
                 arg_type VAR_16, int VAR_17, size_t VAR_18, int VAR_19,
                 size_t VAR_20, int VAR_21)
{
  size_t VAR_22;

  switch (VAR_15)
    {
    case 'd': case 'i': case 'u':
      if (VAR_16 == VAR_7 || VAR_16 == VAR_9)
        VAR_22 =
          (unsigned int) (sizeof (unsigned long) * VAR_0
                          * 0.30103
                         )
          + 1;
      else
        VAR_22 =
          (unsigned int) (sizeof (unsigned int) * VAR_0
                          * 0.30103
                         )
          + 1;
      if (VAR_22 < VAR_20)
        VAR_22 = VAR_20;

      VAR_22 = FUNC_5 (VAR_22, VAR_22);

      VAR_22 = FUNC_5 (VAR_22, 1);
      break;

    case 'o':
      if (VAR_16 == VAR_7 || VAR_16 == VAR_9)
        VAR_22 =
          (unsigned int) (sizeof (unsigned long) * VAR_0
                          * 0.333334
                         )
          + 1;
      else
        VAR_22 =
          (unsigned int) (sizeof (unsigned int) * VAR_0
                          * 0.333334
                         )
          + 1;
      if (VAR_22 < VAR_20)
        VAR_22 = VAR_20;

      VAR_22 = FUNC_5 (VAR_22, 1);
      break;

    case 'x': case 'X':
      if (VAR_16 == VAR_7 || VAR_16 == VAR_9)
        VAR_22 =
          (unsigned int) (sizeof (unsigned long) * VAR_0
                          * 0.25
                         )
          + 1;
      else
        VAR_22 =
          (unsigned int) (sizeof (unsigned int) * VAR_0
                          * 0.25
                         )
          + 1;
      if (VAR_22 < VAR_20)
        VAR_22 = VAR_20;

      VAR_22 = FUNC_5 (VAR_22, 2);
      break;

    case 'f': case 'F':
      if (VAR_16 == VAR_6)
        VAR_22 =
          (unsigned int) (VAR_4
                          * 0.30103
                          * 2
                         )
          + 1
          + 10;
      else
        VAR_22 =
          (unsigned int) (VAR_2
                          * 0.30103
                          * 2
                         )
          + 1
          + 10;
      VAR_22 = FUNC_5 (VAR_22, VAR_20);
      break;

    case 'e': case 'E': case 'g': case 'G':
      VAR_22 =
        12;
      VAR_22 = FUNC_5 (VAR_22, VAR_20);
      break;

    case 'a': case 'A':
      if (VAR_16 == VAR_6)
        VAR_22 =
          (unsigned int) (VAR_3
                          * 0.831
                         )
          + 1;
      else
        VAR_22 =
          (unsigned int) (VAR_1
                          * 0.831
                         )
          + 1;
      if (VAR_22 < VAR_20)
        VAR_22 = VAR_20;

      VAR_22 = FUNC_5 (VAR_22, 12);
      break;

    case 'c':





        VAR_22 = 1;
      break;

    case 's':
        {
          const char *VAR_23 = VAR_13->arg[VAR_14].a.a_string;

          if (VAR_19)
            VAR_22 = FUNC_1 (VAR_23, VAR_20);
          else
            VAR_22 = FUNC_4 (VAR_23);

        }
      break;

    case 'p':
      VAR_22 =
        (unsigned int) (sizeof (void *) * VAR_0
                        * 0.25
                       )
          + 1
          + 2;
      break;

    default:
      FUNC_0 ();
    }

  if (!VAR_21)
    {
      if (VAR_22 < VAR_18)
        VAR_22 = VAR_18;

    }

  VAR_22 = FUNC_5 (VAR_22, 1);

  return VAR_22;
}
