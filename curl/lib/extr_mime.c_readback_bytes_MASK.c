
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t offset; } ;
typedef TYPE_1__ mime_state ;


 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static size_t FUNC_2(mime_state *VAR_0,
                             char *VAR_1, size_t VAR_2,
                             const char *VAR_3, size_t VAR_4,
                             const char *VAR_5)
{
  size_t VAR_6;

  if(VAR_4 > VAR_0->offset) {
    VAR_6 = VAR_4 - VAR_0->offset;
    VAR_3 += VAR_0->offset;
  }
  else {
    size_t VAR_7 = FUNC_1(VAR_5);

    VAR_6 = VAR_0->offset - VAR_4;
    if(VAR_6 >= VAR_7)
      return 0;
    VAR_3 = VAR_5 + VAR_6;
    VAR_6 = VAR_7 - VAR_6;
  }

  if(VAR_6 > VAR_2)
    VAR_6 = VAR_2;

  FUNC_0(VAR_1, VAR_3, VAR_6);
  VAR_0->offset += VAR_6;
  return VAR_6;
}
