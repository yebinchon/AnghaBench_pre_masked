
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_9__ {scalar_t__ size; int data; } ;
typedef TYPE_1__ VCHIQ_ELEMENT_T ;
struct TYPE_10__ {scalar_t__ merge_pos; int merge_buffer; } ;
typedef TYPE_2__ CLIENT_THREAD_STATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(CLIENT_THREAD_STATE_T *VAR_2)
{
   FUNC_7("merge_flush start");

   FUNC_6(VAR_2->merge_pos >= VAR_0);







   if (VAR_2->merge_pos > VAR_0) {
      VCHIQ_ELEMENT_T VAR_3;

      FUNC_3(VAR_2);

      VAR_3.data = VAR_2->merge_buffer;
      VAR_3.size = VAR_2->merge_pos;

      VCHIQ_STATUS_T VAR_4 = FUNC_5(FUNC_2(VAR_2), &VAR_3, 1);
      FUNC_0(VAR_4);
      FUNC_6(VAR_4 == VAR_1);

      VAR_2->merge_pos = 0;

      FUNC_1(VAR_2);

      FUNC_6(VAR_2->merge_pos == VAR_0);

      FUNC_4(VAR_2);
   }
   FUNC_7( "merge_flush end");

}
