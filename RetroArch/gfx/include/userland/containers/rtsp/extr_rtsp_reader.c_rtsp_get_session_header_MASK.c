
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_3__ {char const* value; int name; } ;
typedef TYPE_1__ RTSP_HEADER_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static const char *FUNC_1(VC_CONTAINERS_LIST_T *VAR_1)
{
   RTSP_HEADER_T VAR_2;

   VAR_2.name = VAR_0;
   if (VAR_1 && FUNC_0(VAR_1, &VAR_2))
      return VAR_2.value;

   return "";
}
