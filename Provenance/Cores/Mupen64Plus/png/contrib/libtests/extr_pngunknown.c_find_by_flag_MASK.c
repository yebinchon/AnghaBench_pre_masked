
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
struct TYPE_2__ {scalar_t__ flag; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(png_uint_32 VAR_3)
{
   int VAR_4 = VAR_0;

   while (--VAR_4 >= 0) if (VAR_1[VAR_4].flag == VAR_3) return VAR_4;

   FUNC_1(VAR_2, "pngunknown: internal error\n");
   FUNC_0(4);
}
