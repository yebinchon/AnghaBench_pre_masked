
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ VCHIQ_HEADER_T ;
typedef int RPC_RECV_FLAG_T ;
typedef int CLIENT_THREAD_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (void*,int,int,int,int,int,void*) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 void* VAR_5 ;

uint32_t FUNC_10(CLIENT_THREAD_STATE_T *VAR_6, void *VAR_7, uint32_t *VAR_8, RPC_RECV_FLAG_T VAR_9)
{
   uint32_t VAR_10 = 0;
   uint32_t VAR_11;
   bool VAR_12;

   if (!VAR_8) { VAR_8 = &VAR_11; }

   VAR_12 = VAR_9 & (VAR_4 | VAR_2 | VAR_3);
   FUNC_9(VAR_12 || (VAR_9 & VAR_0));
   FUNC_9(!(VAR_9 & VAR_2) || !(VAR_9 & VAR_0));

   if (VAR_12 || VAR_8[0]) {
      FUNC_4(VAR_6);

      if (VAR_12) {
         VCHIQ_HEADER_T *VAR_13 = FUNC_8(FUNC_2(VAR_6));
         uint8_t *VAR_14 = (uint8_t *)VAR_13->data;
         FUNC_9(VAR_13->size >= (!!(VAR_9 & VAR_3)*4 + !!(VAR_9 & VAR_4)*4) );
         if (VAR_9 & VAR_3) {
            VAR_8[0] = *((uint32_t *)VAR_14);
            VAR_14 += 4;
         }
         if (VAR_9 & VAR_4) {
            VAR_10 = *((uint32_t *)VAR_14);
            VAR_14 += 4;
         }
         if (VAR_9 & VAR_2) {
            FUNC_3(VAR_7, VAR_14, VAR_8[0]);
            VAR_14 += VAR_8[0];
         }
         FUNC_9(VAR_14 == ((uint8_t *)VAR_13->data + VAR_13->size));
         FUNC_7(FUNC_1(VAR_6), VAR_13);
      }

      if ((VAR_9 & VAR_0) && VAR_8[0]) {
         if (VAR_9 & VAR_1) {
            if ((VAR_8[0] == VAR_8[1]) && !VAR_8[3] && !VAR_8[4]) {

               FUNC_5(VAR_6, VAR_7, VAR_8[2] * VAR_8[0]);
            } else {
               FUNC_0(VAR_8[2] * VAR_8[0]);
               FUNC_5(VAR_6, VAR_5, VAR_8[2] * VAR_8[0]);
               FUNC_6(VAR_7, VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3], VAR_8[4], VAR_5);
            }
         } else {
            FUNC_5(VAR_6, VAR_7, VAR_8[0]);
         }
      }
   }

   return VAR_10;
}
