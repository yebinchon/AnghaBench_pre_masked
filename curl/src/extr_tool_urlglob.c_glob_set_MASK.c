
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; char** elements; scalar_t__ ptr_s; } ;
struct TYPE_7__ {TYPE_1__ Set; } ;
struct TYPE_8__ {int globindex; TYPE_2__ content; int type; } ;
typedef TYPE_3__ URLPattern ;
struct TYPE_9__ {char* glob_buffer; size_t size; TYPE_3__* pattern; } ;
typedef TYPE_4__ URLGlob ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,size_t,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 char** FUNC_1 (int) ;
 int FUNC_2 (unsigned long*,int) ;
 char** FUNC_3 (char**,int) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static CURLcode FUNC_5(URLGlob *VAR_6, char **VAR_7,
                         size_t *VAR_8, unsigned long *VAR_9,
                         int VAR_10)
{



  URLPattern *VAR_11;
  bool VAR_12 = VAR_3;
  char *VAR_13 = VAR_6->glob_buffer;
  char *VAR_14 = *VAR_7;
  char *VAR_15 = VAR_14;
  size_t VAR_16 = *VAR_8-1;

  VAR_11 = &VAR_6->pattern[VAR_6->size];

  VAR_11->type = VAR_5;
  VAR_11->content.Set.size = 0;
  VAR_11->content.Set.ptr_s = 0;
  VAR_11->content.Set.elements = ((void*)0);
  VAR_11->globindex = VAR_10;

  while(!VAR_12) {
    switch (*VAR_14) {
    case '\0':
      return FUNC_0("unmatched brace", VAR_16, VAR_2);

    case '{':
    case '[':
      return FUNC_0("nested brace", *VAR_8, VAR_2);

    case '}':
      if(VAR_15 == VAR_14)
        return FUNC_0("empty string within braces", *VAR_8,
                         VAR_2);


      if(FUNC_2(VAR_9, VAR_11->content.Set.size + 1))
        return FUNC_0("range overflow", 0, VAR_2);


    case ',':

      *VAR_13 = '\0';
      if(VAR_11->content.Set.elements) {
        char **VAR_17 = FUNC_3(VAR_11->content.Set.elements,
                                 (VAR_11->content.Set.size + 1) * sizeof(char *));
        if(!VAR_17)
          return FUNC_0("out of memory", 0, VAR_1);

        VAR_11->content.Set.elements = VAR_17;
      }
      else
        VAR_11->content.Set.elements = FUNC_1(sizeof(char *));

      if(!VAR_11->content.Set.elements)
        return FUNC_0("out of memory", 0, VAR_1);

      VAR_11->content.Set.elements[VAR_11->content.Set.size] =
        FUNC_4(VAR_6->glob_buffer);
      if(!VAR_11->content.Set.elements[VAR_11->content.Set.size])
        return FUNC_0("out of memory", 0, VAR_1);
      ++VAR_11->content.Set.size;

      if(*VAR_14 == '}') {
        VAR_14++;
        VAR_12 = VAR_4;
        continue;
      }

      VAR_13 = VAR_6->glob_buffer;
      ++VAR_14;
      ++(*VAR_8);
      break;

    case ']':
      return FUNC_0("unexpected close bracket", *VAR_8, VAR_2);

    case '\\':
      if(VAR_14[1]) {
        ++VAR_14;
        ++(*VAR_8);
      }

    default:
      *VAR_13++ = *VAR_14++;
      ++(*VAR_8);
    }
  }

  *VAR_7 = VAR_14;
  return VAR_0;
}
