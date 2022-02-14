
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ flags; int queue; scalar_t__ user_data; } ;
struct TYPE_6__ {int sema; } ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(MMAL_CONNECTION_T *VAR_1)
{
   MMAL_GRAPH_PRIVATE_T *VAR_2 = (MMAL_GRAPH_PRIVATE_T *)VAR_1->user_data;
   MMAL_BUFFER_HEADER_T *VAR_3;

   if (VAR_1->flags == VAR_0 &&
       (VAR_3 = FUNC_1(VAR_1->queue)) != ((void*)0))
   {
      FUNC_0(VAR_2, VAR_1, VAR_3);
      return;
   }

   FUNC_2(&VAR_2->sema);
}
