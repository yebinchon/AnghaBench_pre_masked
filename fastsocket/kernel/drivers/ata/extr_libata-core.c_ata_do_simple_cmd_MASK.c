
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {int protocol; int flags; int command; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_1 (struct ata_device*,struct ata_taskfile*) ;

unsigned int FUNC_2(struct ata_device *VAR_3, u8 VAR_4)
{
 struct ata_taskfile VAR_5;

 FUNC_1(VAR_3, &VAR_5);

 VAR_5.command = VAR_4;
 VAR_5.flags |= VAR_1;
 VAR_5.protocol = VAR_0;

 return FUNC_0(VAR_3, &VAR_5, ((void*)0), VAR_2, ((void*)0), 0, 0);
}
