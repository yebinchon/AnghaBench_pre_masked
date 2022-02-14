
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

uint32_t FUNC_2(void)
{
   if (VAR_1)
   {
      VAR_1 = 0;
      VAR_0 = FUNC_1(0,
            (const char*)VAR_2);
      FUNC_0("CRC32: 0x%x .\n", (unsigned)VAR_0);
   }
   return VAR_0;
}
