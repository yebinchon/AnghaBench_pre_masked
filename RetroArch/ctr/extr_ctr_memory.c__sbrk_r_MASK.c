
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _reent {int _errno; } ;
typedef int ptrdiff_t ;
typedef void* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int,int,int,int ,int) ;

void* FUNC_2(struct _reent *VAR_7, ptrdiff_t VAR_8)
{
   static u32 VAR_9 = 0;

   if (!VAR_9)
      VAR_9 = VAR_5;

   u32 VAR_10;

   int VAR_11 = ((VAR_9 + VAR_8 + 0xFFF) & ~0xFFF)
      - (VAR_5 + VAR_6);

   if (VAR_11 > 0)
   {
      FUNC_0(VAR_11 >> 12);

      if (FUNC_1(&VAR_10, VAR_5 + VAR_6,
               0x0, VAR_11, VAR_1, VAR_3 | VAR_4) < 0)
      {
         VAR_7->_errno = VAR_0;
         return (caddr_t) -1;
      }
   }

   VAR_6 += VAR_11;

   if (VAR_11 < 0)
      FUNC_1(&VAR_10, VAR_5 + VAR_6,
            0x0, -VAR_11, VAR_2, VAR_3 | VAR_4);

   VAR_9 += VAR_8;

   return (caddr_t)(VAR_9 - VAR_8);
}
