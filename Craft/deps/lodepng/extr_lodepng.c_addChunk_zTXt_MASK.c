
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

__attribute__((used)) static unsigned FUNC_6(ucvector* VAR_0, const char* VAR_1, const char* VAR_2,
                              LodePNGCompressSettings* VAR_3)
{
  unsigned VAR_4 = 0;
  ucvector VAR_5, VAR_6;
  size_t VAR_7, VAR_8 = FUNC_1(VAR_2);

  FUNC_3(&VAR_5);
  FUNC_3(&VAR_6);
  for(VAR_7 = 0; VAR_1[VAR_7] != 0; VAR_7++) FUNC_4(&VAR_5, (unsigned char)VAR_1[VAR_7]);
  if(VAR_7 < 1 || VAR_7 > 79) return 89;
  FUNC_4(&VAR_5, 0);
  FUNC_4(&VAR_5, 0);

  VAR_4 = FUNC_5(&VAR_6.data, &VAR_6.size,
                        (unsigned char*)VAR_2, VAR_8, VAR_3);
  if(!VAR_4)
  {
    for(VAR_7 = 0; VAR_7 < VAR_6.size; VAR_7++) FUNC_4(&VAR_5, VAR_6.data[VAR_7]);
    VAR_4 = FUNC_0(VAR_0, "zTXt", VAR_5.data, VAR_5.size);
  }

  FUNC_2(&VAR_6);
  FUNC_2(&VAR_5);
  return VAR_4;
}
