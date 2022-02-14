
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {int flags; int nsect; int protocol; int feature; int command; } ;
struct ata_device {int xfer_mode; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ata_device*) ;
 int FUNC_4 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static unsigned int FUNC_5(struct ata_device *VAR_7)
{
 struct ata_taskfile VAR_8;
 unsigned int VAR_9;


 FUNC_0("set features - xfer mode\n");




 FUNC_4(VAR_7, &VAR_8);
 VAR_8.command = VAR_0;
 VAR_8.feature = VAR_6;
 VAR_8.flags |= VAR_3 | VAR_2 | VAR_4;
 VAR_8.protocol = VAR_1;

 if (FUNC_3(VAR_7))
  VAR_8.nsect = VAR_7->xfer_mode;

  else if (FUNC_2(VAR_7->id))
  VAR_8.nsect = 0x01;
 else
  return 0;

 VAR_9 = FUNC_1(VAR_7, &VAR_8, ((void*)0), VAR_5, ((void*)0), 0, 0);

 FUNC_0("EXIT, err_mask=%x\n", VAR_9);
 return VAR_9;
}
