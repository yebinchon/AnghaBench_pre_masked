
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ max_seq_num; scalar_t__ probation; scalar_t__ bad_seq; int received; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_MODULE_T ;


 int FUNC_0 (int ,char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(VC_CONTAINER_TRACK_MODULE_T *VAR_4,
      uint16_t VAR_5)
{
   uint16_t VAR_6 = VAR_5 - VAR_4->max_seq_num;





   if (VAR_4->probation)
   {

      if (VAR_5 == VAR_4->max_seq_num + 1)
      {
         VAR_4->probation--;
         VAR_4->max_seq_num = VAR_5;
         FUNC_0(0, "RTP: Probation, %u more packet(s) to go at 0x%4.4hx", VAR_4->probation, VAR_5);

         if (!VAR_4->probation)
         {
            FUNC_1(VAR_4, VAR_5);
            VAR_4->received++;
            return 1;
         }
      } else {
         VAR_4->probation = VAR_2 - 1;
         VAR_4->max_seq_num = VAR_5;
         FUNC_0(0, "RTP: Probation reset, wait for %u packet(s) at 0x%4.4hx", VAR_4->probation, VAR_5);
      }
      return 0;
   } else if (VAR_6 < VAR_0)
   {
      if (!VAR_6)
      {

         FUNC_0(0, "RTP: Drop duplicate packet at 0x%4.4hx", VAR_5);
         return 0;
      }
      if (VAR_6 > 1)
      {
         FUNC_0(0, "RTP: Jumped by %hu packets to 0x%4.4hx", VAR_6, VAR_5);
      }

      VAR_4->max_seq_num = VAR_5;
   } else




      {

         if (VAR_5 == VAR_4->bad_seq)
         {
            FUNC_0(0, "RTP: Misorder restart at 0x%4.4hx", VAR_5);



            FUNC_1(VAR_4, VAR_5);
         } else {
            FUNC_0(0, "RTP: Misorder at 0x%4.4hx, expected 0x%4.4hx", VAR_5, VAR_4->max_seq_num);
            VAR_4->bad_seq = (VAR_5 + 1) & (VAR_3-1);
            return 0;
         }
      }







   VAR_4->received++;
   return 1;
}
