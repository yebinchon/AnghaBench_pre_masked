
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char,char,char,char) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_T *VAR_5,
   VC_CONTAINER_FOURCC_T *VAR_6, int *VAR_7)
{
   uint8_t VAR_8 = FUNC_0(VAR_5, "FrameType/CodecID");

   if(VAR_7)
      *VAR_7 = (VAR_8 >> 4) == 1 ? VAR_1 :
         (VAR_8 >> 4) == 3 ? VAR_0 : 0;

   switch(VAR_8 &0xF)
   {
   case 2: *VAR_6 = VAR_3; break;
   case 3: *VAR_6 = FUNC_2('s','c','r','1'); break;
   case 4: *VAR_6 = VAR_4; break;
   case 5: *VAR_6 = FUNC_2('v','p','6','a'); break;
   case 6: *VAR_6 = FUNC_2('s','c','r','2'); break;
   case 7: *VAR_6 = VAR_2; break;
   default: *VAR_6 = 0; break;
   }

   return FUNC_1(VAR_5);
}
