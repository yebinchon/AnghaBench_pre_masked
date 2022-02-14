
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* data; size_t size; } ;
typedef TYPE_1__ ucvector ;
typedef int LodePNGCompressSettings ;


 unsigned int FUNC_0 (TYPE_1__*,char*,unsigned char*,size_t) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,unsigned char) ;
 unsigned int FUNC_5 (unsigned char**,size_t*,unsigned char*,size_t,int *) ;

__attribute__((used)) static unsigned FUNC_6(ucvector* VAR_0, unsigned VAR_1, const char* VAR_2, const char* VAR_3,
                              const char* VAR_4, const char* VAR_5, LodePNGCompressSettings* VAR_6)
{
  unsigned VAR_7 = 0;
  ucvector VAR_8;
  size_t VAR_9, VAR_10 = FUNC_1(VAR_5);

  FUNC_3(&VAR_8);

  for(VAR_9 = 0; VAR_2[VAR_9] != 0; VAR_9++) FUNC_4(&VAR_8, (unsigned char)VAR_2[VAR_9]);
  if(VAR_9 < 1 || VAR_9 > 79) return 89;
  FUNC_4(&VAR_8, 0);
  FUNC_4(&VAR_8, VAR_1 ? 1 : 0);
  FUNC_4(&VAR_8, 0);
  for(VAR_9 = 0; VAR_3[VAR_9] != 0; VAR_9++) FUNC_4(&VAR_8, (unsigned char)VAR_3[VAR_9]);
  FUNC_4(&VAR_8, 0);
  for(VAR_9 = 0; VAR_4[VAR_9] != 0; VAR_9++) FUNC_4(&VAR_8, (unsigned char)VAR_4[VAR_9]);
  FUNC_4(&VAR_8, 0);

  if(VAR_1)
  {
    ucvector VAR_11;
    FUNC_3(&VAR_11);
    VAR_7 = FUNC_5(&VAR_11.data, &VAR_11.size,
                          (unsigned char*)VAR_5, VAR_10, VAR_6);
    if(!VAR_7)
    {
      for(VAR_9 = 0; VAR_9 < VAR_11.size; VAR_9++) FUNC_4(&VAR_8, VAR_11.data[VAR_9]);
    }
    FUNC_2(&VAR_11);
  }
  else
  {
    for(VAR_9 = 0; VAR_5[VAR_9] != 0; VAR_9++) FUNC_4(&VAR_8, (unsigned char)VAR_5[VAR_9]);
  }

  if(!VAR_7) VAR_7 = FUNC_0(VAR_0, "iTXt", VAR_8.data, VAR_8.size);
  FUNC_2(&VAR_8);
  return VAR_7;
}
