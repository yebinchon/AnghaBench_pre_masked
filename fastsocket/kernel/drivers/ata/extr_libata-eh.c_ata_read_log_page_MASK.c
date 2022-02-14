
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct ata_taskfile {unsigned int lbal; unsigned int nsect; unsigned int hob_nsect; int flags; int protocol; int command; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,void*,unsigned int,int ) ;
 int FUNC_2 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_device *VAR_7,
          u8 VAR_8, void *VAR_9, unsigned int VAR_10)
{
 struct ata_taskfile VAR_11;
 unsigned int VAR_12;

 FUNC_0("read log page - page %d\n", VAR_8);

 FUNC_2(VAR_7, &VAR_11);
 VAR_11.command = VAR_0;
 VAR_11.lbal = VAR_8;
 VAR_11.nsect = VAR_10;
 VAR_11.hob_nsect = VAR_10 >> 8;
 VAR_11.flags |= VAR_4 | VAR_5 | VAR_3;
 VAR_11.protocol = VAR_1;

 VAR_12 = FUNC_1(VAR_7, &VAR_11, ((void*)0), VAR_6,
         VAR_9, VAR_10 * VAR_2, 0);

 FUNC_0("EXIT, err_mask=%x\n", VAR_12);
 return VAR_12;
}
