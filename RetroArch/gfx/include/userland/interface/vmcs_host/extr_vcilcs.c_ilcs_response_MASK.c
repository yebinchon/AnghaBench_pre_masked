
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int wait_mtx; TYPE_1__* wait; } ;
struct TYPE_4__ {scalar_t__ xid; int* rlen; int event; scalar_t__ resp; } ;
typedef TYPE_1__ ILCS_WAIT_T ;
typedef TYPE_2__ ILCS_SERVICE_T ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(ILCS_SERVICE_T *VAR_1, uint32_t VAR_2, const unsigned char *VAR_3, int VAR_4)
{
   ILCS_WAIT_T *VAR_5 = ((void*)0);
   int VAR_6, VAR_7 = VAR_4;


   FUNC_3(&VAR_1->wait_mtx);
   for (VAR_6=0; VAR_6<VAR_0; VAR_6++) {
      VAR_5 = &VAR_1->wait[VAR_6];
      if(VAR_5->resp && VAR_5->xid == VAR_2)
         break;
   }
   FUNC_4(&VAR_1->wait_mtx);

   if(VAR_6 == VAR_0) {


      FUNC_1(0);
      return;
   }



   if(VAR_4 > *VAR_5->rlen)
      VAR_7 = *VAR_5->rlen;

   *VAR_5->rlen = VAR_4;


   FUNC_0(VAR_5->resp, VAR_3, VAR_7);

   FUNC_2(&VAR_5->event);
}
