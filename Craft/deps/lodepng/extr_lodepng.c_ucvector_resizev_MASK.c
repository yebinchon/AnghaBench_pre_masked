
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; unsigned char* data; } ;
typedef TYPE_1__ ucvector ;


 int FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static unsigned FUNC_1(ucvector* VAR_0, size_t VAR_1, unsigned char VAR_2)
{
  size_t VAR_3 = VAR_0->size, VAR_4;
  if(!FUNC_0(VAR_0, VAR_1)) return 0;
  for(VAR_4 = VAR_3; VAR_4 < VAR_1; VAR_4++) VAR_0->data[VAR_4] = VAR_2;
  return 1;
}
