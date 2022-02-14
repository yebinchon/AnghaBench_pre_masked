
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Format; } ;
typedef int D3DFORMAT ;
typedef TYPE_1__ D3DDISPLAYMODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static D3DFORMAT FUNC_2(bool VAR_2, bool VAR_3)
{
   D3DFORMAT VAR_4 = VAR_0;




   if (VAR_3)
   {
      D3DDISPLAYMODE VAR_5;
      if (FUNC_0(VAR_1, 0, &VAR_5))
         VAR_4 = VAR_5.Format;
   }

   return VAR_4;
}
