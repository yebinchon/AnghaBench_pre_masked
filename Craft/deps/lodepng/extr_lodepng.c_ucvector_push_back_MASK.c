
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; unsigned char* data; } ;
typedef TYPE_1__ ucvector ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static unsigned FUNC_1(ucvector* VAR_0, unsigned char VAR_1)
{
  if(!FUNC_0(VAR_0, VAR_0->size + 1)) return 0;
  VAR_0->data[VAR_0->size - 1] = VAR_1;
  return 1;
}
