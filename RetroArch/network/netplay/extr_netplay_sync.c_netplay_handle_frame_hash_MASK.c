
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct delta_frame {int frame; scalar_t__ crc; } ;
struct TYPE_6__ {scalar_t__ check_frames; int crcs_valid; int crc_validity_checked; scalar_t__ is_server; } ;
typedef TYPE_1__ netplay_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,struct delta_frame*) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (TYPE_1__*,struct delta_frame*) ;

__attribute__((used)) static void FUNC_5(netplay_t *VAR_0,
      struct delta_frame *VAR_1)
{
   if (VAR_0->is_server)
   {
      if (VAR_0->check_frames &&
          VAR_1->frame % FUNC_1(VAR_0->check_frames) == 0)
      {
         VAR_1->crc = FUNC_4(VAR_0, VAR_1);
         FUNC_2(VAR_0, VAR_1);
      }
   }
   else if (VAR_1->crc && VAR_0->crcs_valid)
   {

      uint32_t VAR_2 = FUNC_4(VAR_0, VAR_1);
      if (VAR_2 != VAR_1->crc)
      {


         if (!VAR_0->crc_validity_checked)
            VAR_0->crcs_valid = 0;
         else if (VAR_0->crcs_valid)
         {

            if (VAR_0->check_frames < 0)
            {

               FUNC_0("Netplay CRCs mismatch!\n");
            }
            else
               FUNC_3(VAR_0);
         }
      }
      else if (!VAR_0->crc_validity_checked)
         VAR_0->crc_validity_checked = 1;
   }
}
