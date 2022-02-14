
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnamestore {char* alloc; size_t allocsize; size_t len; } ;
typedef int DOHcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,unsigned char*,size_t) ;
 char* FUNC_3 (char*,size_t) ;

__attribute__((used)) static DOHcode FUNC_4(struct cnamestore *VAR_2,
                           unsigned char *VAR_3,
                           size_t VAR_4)
{
  if(!VAR_2->alloc) {
    VAR_2->allocsize = VAR_4 + 1;
    VAR_2->alloc = FUNC_1(VAR_2->allocsize);
    if(!VAR_2->alloc)
      return VAR_1;
  }
  else if(VAR_2->allocsize < (VAR_2->allocsize + VAR_4 + 1)) {
    char *VAR_5;
    VAR_2->allocsize += VAR_4 + 1;
    VAR_5 = FUNC_3(VAR_2->alloc, VAR_2->allocsize);
    if(!VAR_5) {
      FUNC_0(VAR_2->alloc);
      return VAR_1;
    }
    VAR_2->alloc = VAR_5;
  }
  FUNC_2(&VAR_2->alloc[VAR_2->len], VAR_3, VAR_4);
  VAR_2->len += VAR_4;
  VAR_2->alloc[VAR_2->len] = 0;
  return VAR_0;
}
