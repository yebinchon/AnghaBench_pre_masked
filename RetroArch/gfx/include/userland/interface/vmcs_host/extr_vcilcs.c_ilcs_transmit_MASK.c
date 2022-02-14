
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xid ;
typedef unsigned char const uint32_t ;
typedef int int32_t ;
typedef int cmd ;
struct TYPE_5__ {unsigned char const* data; int size; } ;
typedef TYPE_1__ VCHIQ_ELEMENT_T ;
struct TYPE_6__ {int fourcc; int vchiq; int service; } ;
typedef TYPE_2__ ILCS_SERVICE_T ;


 int FUNC_0 (int ,TYPE_1__*,...) ;

__attribute__((used)) static void FUNC_1(ILCS_SERVICE_T *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
                          const unsigned char *VAR_3, int VAR_4,
                          const unsigned char *VAR_5, int VAR_6)
{
   VCHIQ_ELEMENT_T VAR_7[4];
   int32_t VAR_8 = 3;

   VAR_7[0].data = &VAR_1;
   VAR_7[0].size = sizeof(VAR_1);
   VAR_7[1].data = &VAR_2;
   VAR_7[1].size = sizeof(VAR_2);
   VAR_7[2].data = VAR_3;
   VAR_7[2].size = VAR_4;

   if(VAR_5)
   {
      VAR_7[3].data = VAR_5;
      VAR_7[3].size = VAR_6;
      VAR_8++;
   }




   FUNC_0(VAR_0->vchiq, VAR_0->fourcc, VAR_7, VAR_8);

}
