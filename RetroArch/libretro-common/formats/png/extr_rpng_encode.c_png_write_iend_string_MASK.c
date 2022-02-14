
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef int intfstream_t ;
typedef int data ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static bool FUNC_2(intfstream_t* VAR_0)
{
   const uint8_t VAR_1[] = {
      0, 0, 0, 0,
      'I', 'E', 'N', 'D',
   };

   if (FUNC_0(VAR_0, VAR_1, sizeof(VAR_1)) != sizeof(VAR_1))
      return 0;

   return FUNC_1(VAR_0, VAR_1 + sizeof(uint32_t),
         sizeof(VAR_1) - sizeof(uint32_t));
}
