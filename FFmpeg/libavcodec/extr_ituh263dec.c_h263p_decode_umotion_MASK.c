
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avctx; int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(MpegEncContext * VAR_0, int VAR_1)
{
   int VAR_2 = 0, VAR_3;

   if (FUNC_2(&VAR_0->gb))
      return VAR_1;

   VAR_2 = 2 + FUNC_2(&VAR_0->gb);

   while (FUNC_2(&VAR_0->gb))
   {
      VAR_2 <<= 1;
      VAR_2 += FUNC_2(&VAR_0->gb);
      if (VAR_2 >= 32768) {
          FUNC_0(VAR_0->avctx, "Huge DMV");
          return 0xffff;
      }
   }
   VAR_3 = VAR_2 & 1;
   VAR_2 >>= 1;

   VAR_2 = (VAR_3) ? (VAR_1 - VAR_2) : (VAR_1 + VAR_2);
   FUNC_1(VAR_0->avctx,"H.263+ UMV Motion = %d\n", VAR_2);
   return VAR_2;

}
