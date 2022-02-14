
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int allocsize; int data; } ;
typedef TYPE_1__ ucvector ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,unsigned int,char const*,unsigned char const*) ;

__attribute__((used)) static unsigned FUNC_2(ucvector* VAR_0, const char* VAR_1, const unsigned char* VAR_2, size_t VAR_3)
{
  FUNC_0(FUNC_1(&VAR_0->data, &VAR_0->size, (unsigned)VAR_3, VAR_1, VAR_2));
  VAR_0->allocsize = VAR_0->size;
  return 0;
}
