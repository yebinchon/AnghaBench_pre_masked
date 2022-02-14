
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {double X; double Y; double Z; } ;
struct TYPE_7__ {double X; double Y; double Z; } ;
struct TYPE_6__ {double X; double Y; double Z; } ;
struct TYPE_9__ {TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
typedef TYPE_4__ color_encoding ;


 size_t FUNC_0 (char*,size_t,size_t,char*) ;
 size_t FUNC_1 (char*,size_t,size_t,double,int) ;

__attribute__((used)) static size_t
FUNC_2(char *VAR_0, size_t VAR_1, size_t VAR_2,
   const color_encoding *VAR_3, double VAR_4)
{
   if (VAR_3 != 0)
   {
      if (VAR_4 != 0)
         VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, "(");
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, "R(");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->red.X, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, ",");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->red.Y, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, ",");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->red.Z, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, "),G(");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->green.X, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, ",");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->green.Y, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, ",");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->green.Z, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, "),B(");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->blue.X, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, ",");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->blue.Y, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, ",");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->blue.Z, 4);
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, ")");
      if (VAR_4 != 0)
         VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, ")");
   }

   if (VAR_4 != 0)
   {
      VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2, "^");
      VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, 5);
   }

   return VAR_2;
}
