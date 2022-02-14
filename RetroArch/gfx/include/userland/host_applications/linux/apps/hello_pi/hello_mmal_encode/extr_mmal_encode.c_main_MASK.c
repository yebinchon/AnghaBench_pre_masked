
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_8 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(int VAR_11, const char** VAR_12)
{
   FUNC_0();

   if (FUNC_6(&VAR_9, "encoder sem", 0) != VAR_6) {
      FUNC_2(VAR_10, "Failed to create semaphore\n");
      FUNC_1(1);
   }

   if (FUNC_4(&VAR_7, VAR_0)
       != VAR_5) {
      FUNC_2(VAR_10, "Failed to create mmal component\n");
      FUNC_1(1);
   }
   VAR_7->callback = VAR_8;


   FUNC_3(VAR_4, "out.png");
   FUNC_3(VAR_3, "out.jpg");
   FUNC_3(VAR_2, "out.gif");
   FUNC_3(VAR_1, "out.bmp");

   FUNC_5(VAR_7);
   FUNC_7(&VAR_9);

   return 0;
}
