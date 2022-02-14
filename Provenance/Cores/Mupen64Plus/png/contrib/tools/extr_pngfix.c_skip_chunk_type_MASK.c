
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct global {int skip; } ;
typedef int png_uint_32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
__attribute__((used)) static int
FUNC_2(const struct global *VAR_5, png_uint_32 VAR_6)




{

   if (FUNC_0(VAR_6))
      return 0;

   switch (VAR_6)
   {



      case 129: case 136:
         return 0;




      case 146: case 133:
         if (VAR_5->skip >= VAR_0)
            return 1;
         return 0;





      case 148: case 141:
         if (VAR_5->skip >= VAR_1)
            return 1;
         return 0;





      case 149:
         if (VAR_5->skip >= VAR_2)
            return 1;
         return 0;





      case 147: case 145: case 144: case 143: case 142:
      case 140: case 139: case 138: case 137: case 135:
      case 134: case 132: case 131: case 130: case 128:
         if (VAR_5->skip >= VAR_4)
            return 1;
         return 0;





      default:
         if (FUNC_1(VAR_6))
         {
            if (VAR_5->skip >= VAR_4)
               return 1;
         }

         else if (VAR_5->skip >= VAR_3)
            return 1;

         return 0;
   }
}
