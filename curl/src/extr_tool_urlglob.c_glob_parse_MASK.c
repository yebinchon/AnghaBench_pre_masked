
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* glob_buffer; scalar_t__ size; } ;
typedef TYPE_1__ URLGlob ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,size_t) ;
 int FUNC_2 (TYPE_1__*,char**,size_t*,unsigned long*,int ) ;
 int FUNC_3 (TYPE_1__*,char**,size_t*,unsigned long*,int ) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,size_t*) ;

__attribute__((used)) static CURLcode FUNC_6(URLGlob *VAR_3, char *VAR_4,
                           size_t VAR_5, unsigned long *VAR_6)
{



  CURLcode VAR_7 = VAR_0;
  int VAR_8 = 0;

  *VAR_6 = 1;

  while(*VAR_4 && !VAR_7) {
    char *VAR_9 = VAR_3->glob_buffer;
    size_t VAR_10 = 0;
    while(*VAR_4 && *VAR_4 != '{') {
      if(*VAR_4 == '[') {

        size_t VAR_11 = 0;
        if(!FUNC_5(VAR_4, &VAR_11) && (VAR_4[1] == ']'))
          VAR_11 = 2;
        if(VAR_11) {
          FUNC_4(VAR_9, VAR_4, VAR_11);
          VAR_9 += VAR_11;
          VAR_4 += VAR_11;
          VAR_10 += VAR_11;
          continue;
        }
        break;
      }
      if(*VAR_4 == '}' || *VAR_4 == ']')
        return FUNC_0("unmatched close brace/bracket", VAR_5,
                         VAR_1);


      if(*VAR_4 == '\\' &&
         (*(VAR_4 + 1) == '{' || *(VAR_4 + 1) == '[' ||
          *(VAR_4 + 1) == '}' || *(VAR_4 + 1) == ']') ) {


        ++VAR_4;
        ++VAR_5;
      }
      *VAR_9++ = *VAR_4++;
      ++VAR_5;
      VAR_10++;
    }
    if(VAR_10) {

      *VAR_9 = '\0';
      VAR_7 = FUNC_1(VAR_3, VAR_3->glob_buffer, VAR_10);
    }
    else {
      switch (*VAR_4) {
      case '\0':
        break;

      case '{':

        VAR_4++;
        VAR_5++;
        VAR_7 = FUNC_3(VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_8++);
        break;

      case '[':

        VAR_4++;
        VAR_5++;
        VAR_7 = FUNC_2(VAR_3, &VAR_4, &VAR_5, VAR_6, VAR_8++);
        break;
      }
    }

    if(++VAR_3->size >= VAR_2)
      return FUNC_0("too many globs", VAR_5, VAR_1);
  }
  return VAR_7;
}
