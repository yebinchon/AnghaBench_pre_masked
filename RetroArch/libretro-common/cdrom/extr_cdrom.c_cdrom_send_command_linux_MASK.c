
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char interface_id; size_t cmd_len; unsigned char* cmdp; size_t dxfer_len; unsigned char* sbp; size_t mx_sb_len; int timeout; int info; void* dxferp; int dxfer_direction; int member_0; } ;
typedef TYPE_1__ sg_io_hdr_t ;
struct TYPE_6__ {int fp; } ;
typedef TYPE_2__ libretro_vfs_implementation_file ;
typedef int CDROM_CMD_Direction ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(const libretro_vfs_implementation_file *VAR_5, CDROM_CMD_Direction VAR_6, void *VAR_7, size_t VAR_8, unsigned char *VAR_9, size_t VAR_10, unsigned char *VAR_11, size_t VAR_12)
{
   sg_io_hdr_t VAR_13 = {0};
   int VAR_14;

   switch (VAR_6)
   {
      case 130:
         VAR_13.dxfer_direction = VAR_0;
         break;
      case 128:
         VAR_13.dxfer_direction = VAR_2;
         break;
      case 129:
      default:
         VAR_13.dxfer_direction = VAR_1;
         break;
   }

   VAR_13.interface_id = 'S';
   VAR_13.cmd_len = VAR_10;
   VAR_13.cmdp = VAR_9;
   VAR_13.dxferp = VAR_7;
   VAR_13.dxfer_len = VAR_8;
   VAR_13.sbp = VAR_11;
   VAR_13.mx_sb_len = VAR_12;
   VAR_13.timeout = 5000;

   VAR_14 = FUNC_1(FUNC_0(VAR_5->fp), VAR_4, &VAR_13);

   if (VAR_14 == -1 || VAR_13.info & VAR_3)
      return 1;

   return 0;
}
