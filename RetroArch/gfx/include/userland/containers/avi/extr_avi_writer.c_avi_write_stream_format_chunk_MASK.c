
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__* format; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_6__ {scalar_t__ es_type; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char,char,char,float) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7(VC_CONTAINER_T *VAR_3,
   VC_CONTAINER_TRACK_T *VAR_4, uint32_t VAR_5)
{
   VC_CONTAINER_STATUS_T VAR_6;

   FUNC_3(VAR_3, FUNC_2('s','t','r','f'), "Chunk ID");
   FUNC_4(VAR_3, VAR_5, "Chunk Size");

   if ((VAR_6 = FUNC_1(VAR_3)) != VAR_2) return VAR_6;

   if(VAR_4->format->es_type == VAR_1)
      VAR_6 = FUNC_5(VAR_3, VAR_4->format);
   else if(VAR_4->format->es_type == VAR_0)
      VAR_6 = FUNC_6(VAR_3, VAR_4->format);

   if (VAR_6 != VAR_2) return VAR_6;

   FUNC_0(VAR_3);

   return FUNC_1(VAR_3);
}
