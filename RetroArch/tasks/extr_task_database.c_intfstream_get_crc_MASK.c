
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int intfstream_t ;
typedef scalar_t__ int64_t ;
typedef int buffer ;


 int FUNC_0 (int ,int *,size_t) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(intfstream_t *VAR_0, uint32_t *VAR_1)
{
   int64_t VAR_2 = 0;
   uint32_t VAR_3 = 0;
   uint8_t VAR_4[4096];

   while ((VAR_2 = FUNC_1(VAR_0, VAR_4, sizeof(VAR_4))) > 0)
      VAR_3 = FUNC_0(VAR_3, VAR_4, (size_t)VAR_2);

   if (VAR_2 < 0)
      return 0;

   *VAR_1 = VAR_3;

   return 1;
}
