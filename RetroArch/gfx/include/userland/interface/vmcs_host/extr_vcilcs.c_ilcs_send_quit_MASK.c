
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; char* data; } ;
typedef TYPE_2__ VCHIQ_HEADER_T ;
struct TYPE_8__ {int wait_event; TYPE_1__* wait; int queue; scalar_t__ header_array; } ;
struct TYPE_6__ {int event; scalar_t__ resp; } ;
typedef TYPE_3__ ILCS_SERVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ILCS_SERVICE_T *VAR_2)
{

   VCHIQ_HEADER_T *VAR_3 = (VCHIQ_HEADER_T *)VAR_2->header_array;
   char *VAR_4;
   int VAR_5;
   VAR_3->size = 8;
   VAR_4 = VAR_3->data;
   VAR_4[0] = VAR_1 & 0xff;
   VAR_4[1] = (VAR_1 >> 8) & 0xff;
   VAR_4[2] = (VAR_1 >> 16) & 0xff;
   VAR_4[3] = VAR_1 >> 24;

   FUNC_0(&VAR_2->queue, VAR_3);


   for(VAR_5=0; VAR_5<VAR_0; VAR_5++)
      if(VAR_2->wait[VAR_5].resp)
         FUNC_1(&VAR_2->wait[VAR_5].event);

   FUNC_1(&VAR_2->wait_event);
}
