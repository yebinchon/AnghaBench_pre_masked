
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ sc_data_direction; unsigned char const* cmnd; } ;
struct mscp {int din; int dout; struct scsi_cmnd* SCpnt; } ;
struct hostdata {int board_name; struct mscp* cp; } ;


 unsigned int FUNC_0 (unsigned char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4, struct hostdata *VAR_5)
{
 unsigned int VAR_6;

 static const unsigned char VAR_7[] = {
  0x0a, 0x2a, 0x15, 0x55, 0x04, 0x07, 0x18, 0x1d, 0x24, 0x2e,
  0x30, 0x31, 0x32, 0x38, 0x39, 0x3a, 0x3b, 0x3d, 0x3f, 0x40,
  0x41, 0x4c, 0xaa, 0xae, 0xb0, 0xb1, 0xb2, 0xb6, 0xea, 0x1b, 0x5d
 };

 static const unsigned char VAR_8[] = {
  0x01, 0x0b, 0x10, 0x11, 0x13, 0x16, 0x17, 0x19, 0x2b, 0x1e,
  0x2c, 0xac, 0x2f, 0xaf, 0x33, 0xb3, 0x35, 0x36, 0x45, 0x47,
  0x48, 0x49, 0xa9, 0x4b, 0xa5, 0xa6, 0xb5, 0x00
 };

 struct mscp *VAR_9;
 struct scsi_cmnd *VAR_10;

 VAR_9 = &VAR_5->cp[VAR_4];
 VAR_10 = VAR_9->SCpnt;

 if (VAR_10->sc_data_direction == VAR_1) {
  VAR_9->din = 1;
  VAR_9->dout = 0;
  return;
 } else if (VAR_10->sc_data_direction == VAR_3) {
  VAR_9->din = 0;
  VAR_9->dout = 1;
  return;
 } else if (VAR_10->sc_data_direction == VAR_2) {
  VAR_9->din = 0;
  VAR_9->dout = 0;
  return;
 }

 if (VAR_10->sc_data_direction != VAR_0)
  FUNC_1("%s: qcomm, invalid SCpnt->sc_data_direction.\n",
    VAR_5->board_name);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7); VAR_6++)
  if (VAR_10->cmnd[0] == VAR_7[VAR_6]) {
   VAR_9->dout = 1;
   break;
  }

 if ((VAR_9->din = !VAR_9->dout))
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_8); VAR_6++)
   if (VAR_10->cmnd[0] == VAR_8[VAR_6]) {
    VAR_9->din = 0;
    break;
   }

}
