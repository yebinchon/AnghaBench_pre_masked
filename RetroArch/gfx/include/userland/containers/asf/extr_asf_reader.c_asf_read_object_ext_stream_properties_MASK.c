
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *,int,char*) ;
 unsigned int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int,unsigned int) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int *,unsigned int,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_10( VC_CONTAINER_T *VAR_4, int64_t VAR_5 )
{
   VC_CONTAINER_STATUS_T VAR_6 = VAR_3;
   VC_CONTAINER_TRACK_T *VAR_7;
   unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

   FUNC_6(VAR_4, VAR_5, "Start Time");
   FUNC_6(VAR_4, VAR_5, "End Time");
   FUNC_5(VAR_4, VAR_5, "Data Bitrate");
   FUNC_5(VAR_4, VAR_5, "Buffer Size");
   FUNC_5(VAR_4, VAR_5, "Initial Buffer Fullness");
   FUNC_5(VAR_4, VAR_5, "Alternate Data Bitrate");
   FUNC_5(VAR_4, VAR_5, "Alternate Buffer Size");
   FUNC_5(VAR_4, VAR_5, "Alternate Initial Buffer Fullness");
   FUNC_5(VAR_4, VAR_5, "Maximum Object Size");
   FUNC_5(VAR_4, VAR_5, "Flags");
   VAR_12 = FUNC_0(VAR_4, VAR_5, "Stream Number");
   FUNC_4(VAR_4, VAR_5, "Stream Language ID Index");
   FUNC_6(VAR_4, VAR_5, "Average Time Per Frame");
   VAR_9 = FUNC_0(VAR_4, VAR_5, "Stream Name Count");
   VAR_10 = FUNC_0(VAR_4, VAR_5, "Payload Extension System Count");

   FUNC_7(VAR_4, VAR_5);

   VAR_7 = FUNC_9( VAR_4, VAR_12, 1);
   if(!VAR_7) return VAR_2;


   for(VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   {
      if(VAR_5 < 4) return VAR_1;
      FUNC_4(VAR_4, VAR_5, "Language ID Index");
      VAR_11 = FUNC_0(VAR_4, VAR_5, "Stream Name Length");
      if(VAR_5 < VAR_11) return VAR_1;
      FUNC_2(VAR_4, VAR_5, VAR_11);
   }

   FUNC_7(VAR_4, VAR_5);


   for(VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
   {
      if(VAR_5 < 22) return VAR_1;
      FUNC_3(VAR_4, VAR_5, "Extension System ID");
      FUNC_4(VAR_4, VAR_5, "Extension Data Size");
      VAR_11 = FUNC_1(VAR_4, VAR_5, "Extension System Info Length");
      if(VAR_5 < VAR_11) return VAR_1;
      FUNC_2(VAR_4, VAR_5, VAR_11);
   }

   FUNC_7(VAR_4, VAR_5);


   if(VAR_5 >= VAR_0)
      VAR_6 = FUNC_8(VAR_4, VAR_5);

   return VAR_6;
}
