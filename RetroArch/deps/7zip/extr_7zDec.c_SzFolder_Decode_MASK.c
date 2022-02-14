
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef int ILookInStream ;
typedef int CSzFolder ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int const*,int const*,int *,int ,int *,size_t,int *,int **) ;

SRes FUNC_2(const CSzFolder *VAR_0, const uint64_t *VAR_1,
    ILookInStream *VAR_2, uint64_t VAR_3,
    uint8_t *VAR_4, size_t VAR_5, ISzAlloc *VAR_6)
{
  uint8_t *VAR_7[3] = { 0, 0, 0};
  int VAR_8;
  SRes VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4, (size_t)VAR_5, VAR_6, VAR_7);
  for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
    FUNC_0(VAR_6, VAR_7[VAR_8]);
  return VAR_9;
}
