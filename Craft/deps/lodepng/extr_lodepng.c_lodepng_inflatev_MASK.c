
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucvector ;
typedef int LodePNGDecompressSettings ;


 unsigned int FUNC_0 (int *,unsigned char const*,size_t*,size_t*,size_t,unsigned int) ;
 unsigned int FUNC_1 (int *,unsigned char const*,size_t*,size_t*,size_t) ;
 int FUNC_2 (size_t*,unsigned char const*) ;
 int FUNC_3 (int *,size_t) ;

__attribute__((used)) static unsigned FUNC_4(ucvector* VAR_0,
                                 const unsigned char* VAR_1, size_t VAR_2,
                                 const LodePNGDecompressSettings* VAR_3)
{

  size_t VAR_4 = 0;
  unsigned VAR_5 = 0;
  size_t VAR_6 = 0;

  unsigned VAR_7 = 0;

  (void)VAR_3;

  while(!VAR_5)
  {
    unsigned VAR_8;
    if(VAR_4 + 2 >= VAR_2 * 8) return 52;
    VAR_5 = FUNC_2(&VAR_4, VAR_1);
    VAR_8 = 1 * FUNC_2(&VAR_4, VAR_1);
    VAR_8 += 2 * FUNC_2(&VAR_4, VAR_1);

    if(VAR_8 == 3) return 20;
    else if(VAR_8 == 0) VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_4, &VAR_6, VAR_2);
    else VAR_7 = FUNC_0(VAR_0, VAR_1, &VAR_4, &VAR_6, VAR_2, VAR_8);

    if(VAR_7) return VAR_7;
  }


  if(!FUNC_3(VAR_0, VAR_6)) VAR_7 = 83;

  return VAR_7;
}
