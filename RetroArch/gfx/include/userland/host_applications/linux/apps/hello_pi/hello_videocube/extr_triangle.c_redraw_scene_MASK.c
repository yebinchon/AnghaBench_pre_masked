
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int surface; int display; } ;
typedef TYPE_1__ CUBE_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (float,float,float,float) ;

__attribute__((used)) static void FUNC_4(CUBE_STATE_T *VAR_3)
{

   FUNC_1( VAR_0 | VAR_1 );


   FUNC_3(270.f, 0.f, 0.f, 1.f );


   FUNC_2( VAR_2, 0, 4);


   FUNC_3(90.f, 0.f, 0.f, 1.f );
   FUNC_2( VAR_2, 4, 4);

   FUNC_3(90.f, 1.f, 0.f, 0.f );
   FUNC_2( VAR_2, 8, 4);

   FUNC_3(90.f, 1.f, 0.f, 0.f );
   FUNC_2( VAR_2, 12, 4);

   FUNC_3(270.f, 0.f, 1.f, 0.f );
   FUNC_2( VAR_2, 16, 4);

   FUNC_3(90.f, 0.f, 1.f, 0.f );
   FUNC_2( VAR_2, 20, 4);

   FUNC_0(VAR_3->display, VAR_3->surface);
}
