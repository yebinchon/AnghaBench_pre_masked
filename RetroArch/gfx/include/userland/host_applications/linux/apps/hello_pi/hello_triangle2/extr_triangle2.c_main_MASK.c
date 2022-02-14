
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int screen_width; int screen_height; } ;
typedef int GLfloat ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int,int,double) ;
 int FUNC_2 (TYPE_1__*,int,int,double,int,int) ;
 int FUNC_3 (TYPE_1__*,int*,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_0 ;

int FUNC_7 ()
{
   int VAR_1 = 0;
   GLfloat VAR_2, VAR_3;
   FUNC_0();


   FUNC_6( VAR_0, 0, sizeof( *VAR_0 ) );


   FUNC_4(VAR_0);
   FUNC_5(VAR_0);
   VAR_2 = VAR_0->screen_width/2;
   VAR_3 = VAR_0->screen_height/2;

   FUNC_1(VAR_0, VAR_2, VAR_3, 0.003);
   while (!VAR_1)
   {
      int VAR_4, VAR_5, VAR_6;
      VAR_6 = FUNC_3(VAR_0, &VAR_4, &VAR_5);
      if (VAR_6) break;
      FUNC_2(VAR_0, VAR_2, VAR_3, 0.003, VAR_4, VAR_5);
   }
   return 0;
}
