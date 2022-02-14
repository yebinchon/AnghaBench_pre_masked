
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ ssize_t ;
typedef int intfstream_t ;


 scalar_t__ FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;

__attribute__((used)) static bool FUNC_2(intfstream_t* VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
   if (FUNC_0(VAR_0, VAR_1, VAR_2) != (ssize_t)VAR_2)
      return 0;

   return FUNC_1(VAR_0, VAR_1 + sizeof(uint32_t), VAR_2 - sizeof(uint32_t));
}
