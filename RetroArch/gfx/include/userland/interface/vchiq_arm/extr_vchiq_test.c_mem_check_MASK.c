
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void const*,void const*,int) ;
 int FUNC_1 (char*,unsigned int,int,...) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1, int VAR_2)
{
   if (FUNC_0(VAR_0, VAR_1, VAR_2) != 0)
   {
      int VAR_3;
      for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
      {
         int VAR_4 = ((const char *)VAR_0)[VAR_3];
         int VAR_5 = ((const char *)VAR_1)[VAR_3];
         if (VAR_5 != VAR_4)
            FUNC_1("%08x,%x: %02x <-> %02x\n", VAR_3 + (unsigned int)VAR_1, VAR_3, VAR_4, VAR_5);
      }
      FUNC_1("mem_check failed - buffer %x, size %d\n", (unsigned int)VAR_1, VAR_2);
      return 1;
   }
   return 0;
}
