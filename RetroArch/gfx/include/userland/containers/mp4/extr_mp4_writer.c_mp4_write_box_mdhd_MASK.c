
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int duration; } ;
typedef TYPE_1__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,char*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (TYPE_1__*,unsigned int,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_2 )
{
   unsigned int VAR_3 = VAR_0;

   FUNC_5(VAR_2, VAR_3, "version");
   FUNC_2(VAR_2, 0, "flags");


   if(VAR_3)
   {
      FUNC_4(VAR_2, 0, "creation_time");
      FUNC_4(VAR_2, 0, "modification_time");
      FUNC_3(VAR_2, VAR_1, "timescale");
      FUNC_4(VAR_2, VAR_2->duration * VAR_1 / 1000000, "duration");
   }
   else
   {
      FUNC_3(VAR_2, 0, "creation_time");
      FUNC_3(VAR_2, 0, "modification_time");
      FUNC_3(VAR_2, VAR_1, "timescale");
      FUNC_3(VAR_2, VAR_2->duration * VAR_1 / 1000000, "duration");
   }

   FUNC_1(VAR_2, 0x55c4, "language");
   FUNC_1(VAR_2, 0, "pre_defined");

   return FUNC_0(VAR_2);
}
