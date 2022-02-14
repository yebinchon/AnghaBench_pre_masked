
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ sc_data_direction; unsigned char const* cmnd; } ;
struct mscp {scalar_t__ xdir; struct scsi_cmnd* SCpnt; } ;
struct TYPE_2__ {struct mscp* cp; } ;


 unsigned int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_7, unsigned int VAR_8) {
   unsigned int VAR_9;

   static const unsigned char VAR_10[] = {
      0x0a, 0x2a, 0x15, 0x55, 0x04, 0x07, 0x18, 0x1d, 0x24, 0x2e,
      0x30, 0x31, 0x32, 0x38, 0x39, 0x3a, 0x3b, 0x3d, 0x3f, 0x40,
      0x41, 0x4c, 0xaa, 0xae, 0xb0, 0xb1, 0xb2, 0xb6, 0xea, 0x1b, 0x5d
      };

   static const unsigned char VAR_11[] = {
      0x01, 0x0b, 0x10, 0x11, 0x13, 0x16, 0x17, 0x19, 0x2b, 0x1e,
      0x2c, 0xac, 0x2f, 0xaf, 0x33, 0xb3, 0x35, 0x36, 0x45, 0x47,
      0x48, 0x49, 0xa9, 0x4b, 0xa5, 0xa6, 0xb5, 0x00
      };

   struct mscp *VAR_12;
   struct scsi_cmnd *VAR_13;

   VAR_12 = &FUNC_2(VAR_8)->cp[VAR_7]; VAR_13 = VAR_12->SCpnt;

   if (VAR_13->sc_data_direction == VAR_1) {
      VAR_12->xdir = VAR_4;
      return;
      }
   else if (VAR_13->sc_data_direction == VAR_3) {
      VAR_12->xdir = VAR_6;
      return;
      }
   else if (VAR_13->sc_data_direction == VAR_2) {
      VAR_12->xdir = VAR_5;
      return;
      }

   if (VAR_13->sc_data_direction != VAR_0)
      FUNC_3("%s: qcomm, invalid SCpnt->sc_data_direction.\n", FUNC_1(VAR_8));

   VAR_12->xdir = VAR_4;

   for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_10); VAR_9++)
      if (VAR_13->cmnd[0] == VAR_10[VAR_9]) {
         VAR_12->xdir = VAR_6;
         break;
         }

   if (VAR_12->xdir == VAR_4)
      for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_11); VAR_9++)
         if (VAR_13->cmnd[0] == VAR_11[VAR_9]) {
            VAR_12->xdir = VAR_5;
            break;
            }

}
