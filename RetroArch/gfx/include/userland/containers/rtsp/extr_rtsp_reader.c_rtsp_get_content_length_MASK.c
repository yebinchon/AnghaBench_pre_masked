
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_3__ {int value; int name; } ;
typedef TYPE_1__ RTSP_HEADER_T ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static uint32_t FUNC_2( VC_CONTAINERS_LIST_T *VAR_1 )
{
   unsigned int VAR_2 = 0;
   RTSP_HEADER_T VAR_3;

   VAR_3.name = VAR_0;
   if (VAR_1 && FUNC_1(VAR_1, &VAR_3))

      FUNC_0(VAR_3.value, "%u", &VAR_2);

   return VAR_2;
}
