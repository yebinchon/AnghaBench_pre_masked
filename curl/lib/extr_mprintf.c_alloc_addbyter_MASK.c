
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asprintf {char* buffer; int fail; int alloc; int len; } ;
typedef int FILE ;


 char* FUNC_0 (int) ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static int FUNC_2(int VAR_0, FILE *VAR_1)
{
  struct asprintf *VAR_2 = (struct asprintf *)VAR_1;
  unsigned char VAR_3 = (unsigned char)VAR_0;

  if(!VAR_2->buffer) {
    VAR_2->buffer = FUNC_0(32);
    if(!VAR_2->buffer) {
      VAR_2->fail = 1;
      return -1;
    }
    VAR_2->alloc = 32;
    VAR_2->len = 0;
  }
  else if(VAR_2->len + 1 >= VAR_2->alloc) {
    char *VAR_4 = ((void*)0);
    size_t VAR_5 = VAR_2->alloc*2;


    if(VAR_5 > VAR_2->alloc)
      VAR_4 = FUNC_1(VAR_2->buffer, VAR_5);

    if(!VAR_4) {
      VAR_2->fail = 1;
      return -1;
    }
    VAR_2->buffer = VAR_4;
    VAR_2->alloc = VAR_5;
  }

  VAR_2->buffer[ VAR_2->len ] = VAR_3;

  VAR_2->len++;

  return VAR_3;
}
