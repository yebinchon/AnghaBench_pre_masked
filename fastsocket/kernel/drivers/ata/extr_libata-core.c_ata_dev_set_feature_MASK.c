
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ata_taskfile {int flags; void* nsect; int protocol; void* feature; int command; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_2 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_device *VAR_5, u8 VAR_6,
     u8 VAR_7)
{
 struct ata_taskfile VAR_8;
 unsigned int VAR_9;


 FUNC_0("set features - SATA features\n");

 FUNC_2(VAR_5, &VAR_8);
 VAR_8.command = VAR_0;
 VAR_8.feature = VAR_6;
 VAR_8.flags |= VAR_3 | VAR_2;
 VAR_8.protocol = VAR_1;
 VAR_8.nsect = VAR_7;

 VAR_9 = FUNC_1(VAR_5, &VAR_8, ((void*)0), VAR_4, ((void*)0), 0, 0);

 FUNC_0("EXIT, err_mask=%x\n", VAR_9);
 return VAR_9;
}
