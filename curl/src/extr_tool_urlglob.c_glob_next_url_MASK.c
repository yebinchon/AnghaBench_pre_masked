
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ptr_n; int padlength; int min_n; int max_n; int step; } ;
struct TYPE_9__ {char ptr_c; char max_c; char min_c; int step; } ;
struct TYPE_8__ {size_t ptr_s; size_t size; int * elements; } ;
struct TYPE_11__ {TYPE_3__ NumRange; TYPE_2__ CharRange; TYPE_1__ Set; } ;
struct TYPE_12__ {int type; TYPE_4__ content; } ;
typedef TYPE_5__ URLPattern ;
struct TYPE_13__ {int urllen; char* glob_buffer; int beenhere; size_t size; TYPE_5__* pattern; } ;
typedef TYPE_6__ URLGlob ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (char*,size_t,char*,int ,...) ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (char*) ;
 size_t FUNC_3 (char*) ;

CURLcode FUNC_4(char **VAR_5, URLGlob *VAR_6)
{
  URLPattern *VAR_7;
  size_t VAR_8;
  size_t VAR_9;
  size_t VAR_10 = VAR_6->urllen + 1;
  char *VAR_11 = VAR_6->glob_buffer;

  *VAR_5 = ((void*)0);

  if(!VAR_6->beenhere)
    VAR_6->beenhere = 1;
  else {
    bool VAR_12 = VAR_4;



    for(VAR_8 = 0; VAR_12 && (VAR_8 < VAR_6->size); VAR_8++) {
      VAR_12 = VAR_3;
      VAR_7 = &VAR_6->pattern[VAR_6->size - 1 - VAR_8];
      switch(VAR_7->type) {
      case 128:
        if((VAR_7->content.Set.elements) &&
           (++VAR_7->content.Set.ptr_s == VAR_7->content.Set.size)) {
          VAR_7->content.Set.ptr_s = 0;
          VAR_12 = VAR_4;
        }
        break;
      case 130:
        VAR_7->content.CharRange.ptr_c =
          (char)(VAR_7->content.CharRange.step +
                 (int)((unsigned char)VAR_7->content.CharRange.ptr_c));
        if(VAR_7->content.CharRange.ptr_c > VAR_7->content.CharRange.max_c) {
          VAR_7->content.CharRange.ptr_c = VAR_7->content.CharRange.min_c;
          VAR_12 = VAR_4;
        }
        break;
      case 129:
        VAR_7->content.NumRange.ptr_n += VAR_7->content.NumRange.step;
        if(VAR_7->content.NumRange.ptr_n > VAR_7->content.NumRange.max_n) {
          VAR_7->content.NumRange.ptr_n = VAR_7->content.NumRange.min_n;
          VAR_12 = VAR_4;
        }
        break;
      default:
        FUNC_1("internal error: invalid pattern type (%d)\n", (int)VAR_7->type);
        return VAR_0;
      }
    }
    if(VAR_12) {
      return VAR_1;
    }
  }

  for(VAR_8 = 0; VAR_8 < VAR_6->size; ++VAR_8) {
    VAR_7 = &VAR_6->pattern[VAR_8];
    switch(VAR_7->type) {
    case 128:
      if(VAR_7->content.Set.elements) {
        FUNC_0(VAR_11, VAR_10, "%s",
                  VAR_7->content.Set.elements[VAR_7->content.Set.ptr_s]);
        VAR_9 = FUNC_3(VAR_11);
        VAR_11 += VAR_9;
        VAR_10 -= VAR_9;
      }
      break;
    case 130:
      if(VAR_10) {
        *VAR_11++ = VAR_7->content.CharRange.ptr_c;
        *VAR_11 = '\0';
        VAR_10--;
      }
      break;
    case 129:
      FUNC_0(VAR_11, VAR_10, "%0*lu",
                VAR_7->content.NumRange.padlength,
                VAR_7->content.NumRange.ptr_n);
      VAR_9 = FUNC_3(VAR_11);
      VAR_11 += VAR_9;
      VAR_10 -= VAR_9;
      break;
    default:
      FUNC_1("internal error: invalid pattern type (%d)\n", (int)VAR_7->type);
      return VAR_0;
    }
  }

  *VAR_5 = FUNC_2(VAR_6->glob_buffer);
  if(!*VAR_5)
    return VAR_2;

  return VAR_1;
}
