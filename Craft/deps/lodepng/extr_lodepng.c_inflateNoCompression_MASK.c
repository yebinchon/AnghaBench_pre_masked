
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; unsigned char* data; } ;
typedef TYPE_1__ ucvector ;


 int FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static unsigned FUNC_1(ucvector* VAR_0, const unsigned char* VAR_1, size_t* VAR_2, size_t* VAR_3, size_t VAR_4)
{

  size_t VAR_5;
  unsigned VAR_6, VAR_7, VAR_8, VAR_9 = 0;
  while(((*VAR_2) & 0x7) != 0) (*VAR_2)++;
  VAR_5 = (*VAR_2) / 8;


  if(VAR_5 >= VAR_4 - 4) return 52;
  VAR_6 = VAR_1[VAR_5] + 256 * VAR_1[VAR_5 + 1]; VAR_5 += 2;
  VAR_7 = VAR_1[VAR_5] + 256 * VAR_1[VAR_5 + 1]; VAR_5 += 2;


  if(VAR_6 + VAR_7 != 65535) return 21;

  if((*VAR_3) + VAR_6 >= VAR_0->size)
  {
    if(!FUNC_0(VAR_0, (*VAR_3) + VAR_6)) return 83;
  }


  if(VAR_5 + VAR_6 > VAR_4) return 23;
  for(VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) VAR_0->data[(*VAR_3)++] = VAR_1[VAR_5++];

  (*VAR_2) = VAR_5 * 8;

  return VAR_9;
}
