
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int width; unsigned int height; } ;
typedef TYPE_1__ CellVideoOutResolution ;


 int FUNC_0 (unsigned int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(unsigned VAR_0,
      unsigned *VAR_1, unsigned *VAR_2)
{
   CellVideoOutResolution VAR_3;
   FUNC_0(VAR_0, &VAR_3);

   *VAR_1 = VAR_3.width;
   *VAR_2 = VAR_3.height;
}
