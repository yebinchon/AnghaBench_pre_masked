
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t allocsize; unsigned char* data; size_t size; } ;
typedef TYPE_1__ ucvector ;


 void* FUNC_0 (unsigned char*,size_t) ;

__attribute__((used)) static unsigned FUNC_1(ucvector* VAR_0, size_t VAR_1)
{
  if(VAR_1 * sizeof(unsigned char) > VAR_0->allocsize)
  {
    size_t VAR_2 = VAR_1 * sizeof(unsigned char) * 2;
    void* VAR_3 = FUNC_0(VAR_0->data, VAR_2);
    if(VAR_3)
    {
      VAR_0->allocsize = VAR_2;
      VAR_0->data = (unsigned char*)VAR_3;
      VAR_0->size = VAR_1;
    }
    else return 0;
  }
  else VAR_0->size = VAR_1;
  return 1;
}
