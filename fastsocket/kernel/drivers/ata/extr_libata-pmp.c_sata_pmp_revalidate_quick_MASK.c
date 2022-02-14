
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ata_device {scalar_t__* gscr; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ata_device*,int ,char*,...) ;
 unsigned int FUNC_1 (int ,size_t,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct ata_device *VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_1(VAR_3->link, VAR_2, &VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_3, VAR_1, "failed to read PMP product ID "
          "(Emask=0x%x)\n", VAR_4);
  return -VAR_0;
 }

 if (VAR_5 != VAR_3->gscr[VAR_2]) {
  FUNC_0(VAR_3, VAR_1, "PMP product ID mismatch\n");

  return -VAR_0;
 }

 return 0;
}
