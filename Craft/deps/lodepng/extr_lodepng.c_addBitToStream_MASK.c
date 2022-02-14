
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* data; int size; } ;
typedef TYPE_1__ ucvector ;


 int FUNC_0 (TYPE_1__*,unsigned char) ;

__attribute__((used)) static void FUNC_1(size_t* VAR_0, ucvector* VAR_1, unsigned char VAR_2)
{

  if((*VAR_0) % 8 == 0) FUNC_0(VAR_1, (unsigned char)0);

  (VAR_1->data[VAR_1->size - 1]) |= (VAR_2 << ((*VAR_0) & 0x7));
  (*VAR_0)++;
}
