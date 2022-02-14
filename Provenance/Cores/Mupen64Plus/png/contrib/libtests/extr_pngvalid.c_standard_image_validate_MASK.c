
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ h; TYPE_2__* ps; } ;
typedef TYPE_1__ standard_display ;
typedef scalar_t__ png_uint_32 ;
typedef int png_const_structp ;
struct TYPE_6__ {int validated; } ;


 int FUNC_0 (TYPE_1__*,int ,int,int,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(standard_display *VAR_0, png_const_structp VAR_1, int VAR_2,
    int VAR_3)
{
   png_uint_32 VAR_4;

   if (VAR_2 >= 0)
      FUNC_1(VAR_0->ps, VAR_1, VAR_2);

   if (VAR_3 >= 0)
      FUNC_1(VAR_0->ps, VAR_1, VAR_3);

   for (VAR_4=0; VAR_4<VAR_0->h; ++VAR_4)
      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);


   VAR_0->ps->validated = 1;
}
