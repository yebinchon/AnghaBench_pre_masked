
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int model; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10 ()
{
   FUNC_0();
   FUNC_7("Note: ensure you have sufficient gpu_mem configured\n");


   FUNC_6( VAR_0, 0, sizeof( *VAR_0 ) );


   FUNC_3(VAR_0);


   FUNC_2(VAR_0);


   FUNC_4(VAR_0);


   VAR_0->model = FUNC_5("/opt/vc/src/hello_pi/hello_teapot/teapot.obj.dat", ((void*)0));

   while (!VAR_1)
   {
      FUNC_9(VAR_0);
      FUNC_8(VAR_0);
   }
   FUNC_1();
   return 0;
}
