
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_port {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sff_check_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct ata_port*,int) ;
 int FUNC_3 (struct ata_port*,int ,char*,int,...) ;
 int FUNC_4 (struct ata_port*,int,int) ;
 unsigned long VAR_5 ;
 int FUNC_5 (struct ata_port*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

int FUNC_7(struct ata_port *VAR_6,
         unsigned long VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10;
 u8 VAR_11;

 VAR_11 = FUNC_4(VAR_6, VAR_0, 300);
 VAR_9 = VAR_5;
 VAR_10 = FUNC_1(VAR_9, VAR_7);
 while (VAR_11 != 0xff && (VAR_11 & VAR_0) &&
        FUNC_6(VAR_5, VAR_10)) {
  FUNC_2(VAR_6, 50);
  VAR_11 = FUNC_4(VAR_6, VAR_0, 3);
 }

 if (VAR_11 != 0xff && (VAR_11 & VAR_0))
  FUNC_3(VAR_6, VAR_4,
    "port is slow to respond, please be patient "
    "(Status 0x%x)\n", VAR_11);

 VAR_10 = FUNC_1(VAR_9, VAR_8);
 while (VAR_11 != 0xff && (VAR_11 & VAR_0) &&
        FUNC_6(VAR_5, VAR_10)) {
  FUNC_2(VAR_6, 50);
  VAR_11 = VAR_6->ops->sff_check_status(VAR_6);
 }

 if (VAR_11 == 0xff)
  return -VAR_2;

 if (VAR_11 & VAR_0) {
  FUNC_3(VAR_6, VAR_3, "port failed to respond "
    "(%lu secs, Status 0x%x)\n",
    FUNC_0(VAR_8, 1000), VAR_11);
  return -VAR_1;
 }

 return 0;
}
