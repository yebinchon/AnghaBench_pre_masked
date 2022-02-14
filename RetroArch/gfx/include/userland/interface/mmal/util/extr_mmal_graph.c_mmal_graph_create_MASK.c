
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct MMAL_GRAPH_USERDATA_T {int dummy; } ;
struct TYPE_8__ {struct MMAL_GRAPH_USERDATA_T* userdata; } ;
struct TYPE_9__ {int sema; TYPE_1__ graph; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_GRAPH_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;


 int FUNC_0 (char*,TYPE_1__**) ;
 int FUNC_1 (char*,TYPE_1__**,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_2 (int,int,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,char*,int ) ;

MMAL_STATUS_T FUNC_5(MMAL_GRAPH_T **VAR_5, unsigned int VAR_6)
{
   MMAL_GRAPH_PRIVATE_T *VAR_7;

   FUNC_1("graph %p, userdata_size %u", VAR_5, VAR_6);


   if (!VAR_5)
      return VAR_0;

   VAR_7 = FUNC_2(1, sizeof(MMAL_GRAPH_PRIVATE_T) + VAR_6, "mmal connection graph");
   if (!VAR_7)
      return VAR_1;
   *VAR_5 = &VAR_7->graph;
   if (VAR_6)
      (*VAR_5)->userdata = (struct MMAL_GRAPH_USERDATA_T *)&VAR_7[1];

   if (FUNC_4(&VAR_7->sema, "mmal graph sema", 0) != VAR_4)
   {
      FUNC_0("failed to create semaphore %p", VAR_5);
      FUNC_3(VAR_7);
      return VAR_2;
   }

   return VAR_3;
}
