
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zlib {int* header; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static const char *
FUNC_1(struct zlib *VAR_1)
{
   switch (VAR_1->header[1] >> 6)
   {
      case 0: return "supfast";
      case 1: return "stdfast";
      case 2: return "default";
      case 3: return "maximum";
      default: FUNC_0(VAR_0);
   }

   return "COMPILER BUG";
}
