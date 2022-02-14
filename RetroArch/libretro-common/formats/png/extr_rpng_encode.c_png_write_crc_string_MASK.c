
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int intfstream_t ;
typedef int crc_raw ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_3(intfstream_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
   uint8_t VAR_3[4] = {0};
   uint32_t VAR_4 = FUNC_1(0, VAR_1, VAR_2);

   FUNC_0(VAR_3, VAR_4);
   return FUNC_2(VAR_0, VAR_3, sizeof(VAR_3)) == sizeof(VAR_3);
}
