
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct scsi_disk {TYPE_1__* disk; int device; } ;
struct TYPE_2__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int const,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int,unsigned char*,int const) ;

__attribute__((used)) static void FUNC_5(struct scsi_disk *VAR_2)
{
 unsigned char *VAR_3;
 u16 VAR_4;
 const int VAR_5 = 64;

 VAR_3 = FUNC_2(VAR_5, VAR_0);

 if (!VAR_3 ||

     FUNC_4(VAR_2->device, 0xb1, VAR_3, VAR_5))
  goto out;

 VAR_4 = FUNC_0(&VAR_3[4]);

 if (VAR_4 == 1)
  FUNC_3(VAR_1, VAR_2->disk->queue);

 out:
 FUNC_1(VAR_3);
}
