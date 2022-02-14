
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t* unknown_chunks_size; unsigned char** unknown_chunks_data; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (size_t) ;

__attribute__((used)) static unsigned FUNC_2(LodePNGInfo* VAR_0, const LodePNGInfo* VAR_1)
{
  unsigned VAR_2;

  FUNC_0(VAR_0);

  for(VAR_2 = 0; VAR_2 < 3; VAR_2++)
  {
    size_t VAR_3;
    VAR_0->unknown_chunks_size[VAR_2] = VAR_1->unknown_chunks_size[VAR_2];
    VAR_0->unknown_chunks_data[VAR_2] = (unsigned char*)FUNC_1(VAR_1->unknown_chunks_size[VAR_2]);
    if(!VAR_0->unknown_chunks_data[VAR_2] && VAR_0->unknown_chunks_size[VAR_2]) return 83;
    for(VAR_3 = 0; VAR_3 < VAR_1->unknown_chunks_size[VAR_2]; VAR_3++)
    {
      VAR_0->unknown_chunks_data[VAR_2][VAR_3] = VAR_1->unknown_chunks_data[VAR_2][VAR_3];
    }
  }

  return 0;
}
