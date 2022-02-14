
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; size_t allocsize; size_t size; } ;
typedef TYPE_1__ ucvector ;



__attribute__((used)) static void FUNC_0(ucvector* VAR_0, unsigned char* VAR_1, size_t VAR_2)
{
  VAR_0->data = VAR_1;
  VAR_0->allocsize = VAR_0->size = VAR_2;
}
