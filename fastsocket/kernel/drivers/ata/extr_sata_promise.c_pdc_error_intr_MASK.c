
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ata_queued_cmd {unsigned int err_mask; } ;
struct ata_eh_info {int serror; } ;
struct TYPE_3__ {struct ata_eh_info eh_info; } ;
struct ata_port {TYPE_1__ link; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ata_eh_info*) ;
 int FUNC_1 (struct ata_eh_info*,char*,int) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_16, struct ata_queued_cmd *VAR_17,
      u32 VAR_18, u32 VAR_19)
{
 struct ata_eh_info *VAR_20 = &VAR_16->link.eh_info;
 unsigned int VAR_21 = 0;

 FUNC_0(VAR_20);
 FUNC_1(VAR_20, "port_status 0x%08x", VAR_18);
 VAR_18 &= VAR_19;

 if (VAR_18 & VAR_9)
  VAR_21 |= VAR_1;
 if (VAR_18 & (VAR_10 | VAR_14))
  VAR_21 |= VAR_3;
 if (VAR_18 & (VAR_6 | VAR_5))
  VAR_21 |= VAR_0;
 if (VAR_18 & (VAR_12 | VAR_13 | VAR_8 | VAR_7
      | VAR_11 | VAR_4))
  VAR_21 |= VAR_2;

 if (FUNC_5(&VAR_16->link)) {
  u32 VAR_22;

  FUNC_4(&VAR_16->link, VAR_15, &VAR_22);
  VAR_20->serror |= VAR_22;
 }

 VAR_17->err_mask |= VAR_21;

 FUNC_3(VAR_16);

 FUNC_2(VAR_16);
}
