
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned long ptr_n; unsigned long min_n; unsigned long max_n; unsigned long step; scalar_t__ padlength; } ;
struct TYPE_7__ {int step; char ptr_c; char min_c; char max_c; } ;
struct TYPE_9__ {TYPE_2__ NumRange; TYPE_1__ CharRange; } ;
struct TYPE_10__ {int globindex; TYPE_3__ content; int type; } ;
typedef TYPE_4__ URLPattern ;
struct TYPE_11__ {size_t size; TYPE_4__* pattern; } ;
typedef TYPE_5__ URLGlob ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (unsigned long*,int) ;
 int FUNC_5 (char*,char*,char*,char*,char*) ;
 unsigned long FUNC_6 (char*,char**,int) ;

__attribute__((used)) static CURLcode FUNC_7(URLGlob *VAR_6, char **VAR_7,
                           size_t *VAR_8, unsigned long *VAR_9,
                           int VAR_10)
{






  URLPattern *VAR_11;
  int VAR_12;
  char *VAR_13 = *VAR_7;
  char *VAR_14;

  VAR_11 = &VAR_6->pattern[VAR_6->size];
  VAR_11->globindex = VAR_10;

  if(FUNC_1(*VAR_13)) {

    char VAR_15;
    char VAR_16;
    char VAR_17;
    unsigned long VAR_18 = 1;

    VAR_11->type = VAR_3;

    VAR_12 = FUNC_5(VAR_13, "%c-%c%c", &VAR_15, &VAR_16, &VAR_17);

    if(VAR_12 == 3) {
      if(VAR_17 == ':') {
        char *VAR_19;
        VAR_5 = 0;
        VAR_18 = FUNC_6(&VAR_13[4], &VAR_19, 10);
        if(VAR_5 || &VAR_13[4] == VAR_19 || *VAR_19 != ']')
          VAR_18 = 0;
        else
          VAR_13 = VAR_19 + 1;
      }
      else if(VAR_17 != ']')

        VAR_12 = 0;
      else

        VAR_13 += 4;
    }

    *VAR_8 += (VAR_13 - *VAR_7);

    if(VAR_12 != 3 || !VAR_18 || VAR_18 > (unsigned)VAR_2 ||
       (VAR_15 == VAR_16 && VAR_18 != 1) ||
       (VAR_15 != VAR_16 && (VAR_15 > VAR_16 || VAR_18 > (unsigned)(VAR_16 - VAR_15) ||
                           (VAR_16 - VAR_15) > ('z' - 'a'))))

      return FUNC_0("bad range", *VAR_8, VAR_1);


    VAR_11->content.CharRange.step = (int)VAR_18;
    VAR_11->content.CharRange.ptr_c = VAR_11->content.CharRange.min_c = VAR_15;
    VAR_11->content.CharRange.max_c = VAR_16;

    if(FUNC_4(VAR_9, ((VAR_11->content.CharRange.max_c -
                          VAR_11->content.CharRange.min_c) /
                         VAR_11->content.CharRange.step + 1)))
      return FUNC_0("range overflow", *VAR_8, VAR_1);
  }
  else if(FUNC_3(*VAR_13)) {

    unsigned long VAR_20;
    unsigned long VAR_21 = 0;
    unsigned long VAR_22 = 0;
    char *VAR_23;

    VAR_11->type = VAR_4;
    VAR_11->content.NumRange.padlength = 0;

    if(*VAR_13 == '0') {

      VAR_14 = VAR_13;
      while(FUNC_3(*VAR_14)) {
        VAR_14++;
        ++VAR_11->content.NumRange.padlength;

      }
    }

    VAR_5 = 0;
    VAR_20 = FUNC_6(VAR_13, &VAR_23, 10);
    if(VAR_5 || (VAR_23 == VAR_13))
      VAR_23 = ((void*)0);
    else {
      if(*VAR_23 != '-')
        VAR_23 = ((void*)0);
      else {
        VAR_13 = VAR_23 + 1;
        while(*VAR_13 && FUNC_2(*VAR_13))
          VAR_13++;
        if(!FUNC_3(*VAR_13)) {
          VAR_23 = ((void*)0);
          goto fail;
        }
        VAR_5 = 0;
        VAR_21 = FUNC_6(VAR_13, &VAR_23, 10);
        if(VAR_5)

          VAR_23 = ((void*)0);
        else if(*VAR_23 == ':') {
          VAR_13 = VAR_23 + 1;
          VAR_5 = 0;
          VAR_22 = FUNC_6(VAR_13, &VAR_23, 10);
          if(VAR_5)

            VAR_23 = ((void*)0);
        }
        else
          VAR_22 = 1;
        if(VAR_23 && (*VAR_23 == ']')) {
          VAR_13 = VAR_23 + 1;
        }
        else
          VAR_23 = ((void*)0);
      }
    }

    fail:
    *VAR_8 += (VAR_13 - *VAR_7);

    if(!VAR_23 || !VAR_22 ||
       (VAR_20 == VAR_21 && VAR_22 != 1) ||
       (VAR_20 != VAR_21 && (VAR_20 > VAR_21 || VAR_22 > (VAR_21 - VAR_20))))

      return FUNC_0("bad range", *VAR_8, VAR_1);



    VAR_11->content.NumRange.ptr_n = VAR_11->content.NumRange.min_n = VAR_20;
    VAR_11->content.NumRange.max_n = VAR_21;
    VAR_11->content.NumRange.step = VAR_22;

    if(FUNC_4(VAR_9, ((VAR_11->content.NumRange.max_n -
                          VAR_11->content.NumRange.min_n) /
                         VAR_11->content.NumRange.step + 1)))
      return FUNC_0("range overflow", *VAR_8, VAR_1);
  }
  else
    return FUNC_0("bad range specification", *VAR_8, VAR_1);

  *VAR_7 = VAR_13;
  return VAR_0;
}
