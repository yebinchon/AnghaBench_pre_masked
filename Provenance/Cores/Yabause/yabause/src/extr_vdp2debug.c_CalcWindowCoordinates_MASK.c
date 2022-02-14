
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xstart; int ystart; int xend; int yend; } ;
typedef TYPE_1__ clipping_struct ;


 int FUNC_0 (int,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(int VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5)
{
   clipping_struct VAR_6;
   FUNC_0(VAR_1, &VAR_6, VAR_0);
   *VAR_2 = VAR_6.xstart;
   *VAR_3 = VAR_6.ystart;
   *VAR_4 = VAR_6.xend;
   *VAR_5 = VAR_6.yend;
}
