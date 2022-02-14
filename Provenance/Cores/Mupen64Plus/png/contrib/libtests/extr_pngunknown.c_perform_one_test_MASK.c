
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int display ;
struct TYPE_2__ {scalar_t__ keep; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char const**,int*,int *,int) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int,int,int,int,char*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(FILE *VAR_3, int VAR_4, const char **VAR_5,
   png_uint_32 *VAR_6, display *VAR_7, int VAR_8)
{
   int VAR_9;
   png_uint_32 VAR_10[2][4];

   FUNC_5(VAR_3);
   FUNC_3();
   FUNC_4(VAR_10[0], VAR_6, sizeof VAR_10[0]);

   VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_10[1], VAR_7, VAR_8);
   if (VAR_2[0 ].keep != VAR_0 &&
       (VAR_10[1][3] & VAR_1) != 0)
      VAR_10[0][2] |= VAR_1;






   FUNC_1(VAR_7, (VAR_10[0][0]|VAR_10[0][2]) & (VAR_10[0][1]|VAR_10[0][3]),
      "chunk handled inconsistently in count tests");
   FUNC_1(VAR_7, (VAR_10[1][0]|VAR_10[1][2]) & (VAR_10[1][1]|VAR_10[1][3]),
      "chunk handled inconsistently in option tests");






   {
      png_uint_32 VAR_11;

      VAR_11 = VAR_10[1][0] & ~VAR_10[0][0];
      FUNC_1(VAR_7, VAR_11, "new known chunk before IDAT");
      VAR_11 = VAR_10[1][1] & ~(VAR_10[0][0] | VAR_10[0][1]);
      FUNC_1(VAR_7, VAR_11, "new unknown chunk before IDAT");
      VAR_11 = VAR_10[1][2] & ~VAR_10[0][2];
      FUNC_1(VAR_7, VAR_11, "new known chunk after IDAT");
      VAR_11 = VAR_10[1][3] & ~(VAR_10[0][2] | VAR_10[0][3]);
      FUNC_1(VAR_7, VAR_11, "new unknown chunk after IDAT");
   }





   FUNC_2(VAR_7, VAR_9, VAR_10[0][0] | VAR_10[0][1], VAR_10[1][0], VAR_10[1][1],
      "before IDAT", VAR_8);
   FUNC_2(VAR_7, VAR_9, VAR_10[0][2] | VAR_10[0][3], VAR_10[1][2], VAR_10[1][3],
      "after IDAT", VAR_8);
}
