
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int allocsize; int data; } ;
typedef TYPE_1__ ucvector ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char*) ;

__attribute__((used)) static unsigned FUNC_3(ucvector* VAR_0, unsigned char* VAR_1, size_t VAR_2)
{
  unsigned char* VAR_3 = VAR_1;
  while((size_t)(VAR_3 - VAR_1) < VAR_2)
  {
    FUNC_0(FUNC_1(&VAR_0->data, &VAR_0->size, VAR_3));
    VAR_0->allocsize = VAR_0->size;
    VAR_3 = FUNC_2(VAR_3);
  }
  return 0;
}
