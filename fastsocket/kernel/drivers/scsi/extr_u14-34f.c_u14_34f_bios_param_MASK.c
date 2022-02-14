
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef unsigned int sector_t ;
struct TYPE_2__ {int heads; int sectors; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ,int,int,int) ;
 scalar_t__ FUNC_2 (struct block_device*,unsigned int,int*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_3,
                 struct block_device *VAR_4, sector_t VAR_5, int *VAR_6) {
   unsigned int VAR_7 = 0;
   unsigned int VAR_8 = VAR_5;

   VAR_6[0] = FUNC_0(VAR_7)->heads;
   VAR_6[1] = FUNC_0(VAR_7)->sectors;
   VAR_6[2] = VAR_8 / (FUNC_0(VAR_7)->heads * FUNC_0(VAR_7)->sectors);

   if (VAR_2 && (FUNC_2(VAR_4, VAR_5, VAR_6) < 0)) {
      VAR_6[0] = 255;
      VAR_6[1] = 63;
      VAR_6[2] = VAR_8 / (VAR_6[0] * VAR_6[1]);
      }






   return VAR_0;
}
