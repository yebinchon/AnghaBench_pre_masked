
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int track_num_buf ;
typedef scalar_t__ VC_CONTAINER_FOURCC_T ;


 scalar_t__ FUNC_0 (char,char,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(VC_CONTAINER_FOURCC_T *VAR_0,
   unsigned int VAR_1 )
{
   VC_CONTAINER_FOURCC_T VAR_2 = 0;
   char VAR_3[3];

   VAR_2 = FUNC_0('i','x','0','0');

   FUNC_2(VAR_3, sizeof(VAR_3), "%02d", VAR_1);
   FUNC_1(((uint8_t*)&VAR_2) + 2, VAR_3, 2);

   *VAR_0 = VAR_2;
}
