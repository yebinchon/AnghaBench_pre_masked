
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_8__ {int mask; int name; } ;
struct TYPE_7__ {int mask; int name; } ;
struct TYPE_6__ {int mask; int name; } ;
struct TYPE_5__ {int mask; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (char*,...) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_4(struct Scsi_Host *VAR_9) {
    unsigned char VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    unsigned long VAR_16;

    FUNC_2(VAR_16);
    VAR_11 = FUNC_0(VAR_1);
    VAR_10 = FUNC_0(VAR_4);
    VAR_13 = FUNC_0(VAR_3);
    VAR_14 = FUNC_0(VAR_2);
    VAR_12 = FUNC_0(VAR_0);
    FUNC_1(VAR_16);
    FUNC_3("STATUS_REG: %02x ", VAR_10);
    for (VAR_15 = 0; VAR_8[VAR_15].mask ; ++VAR_15)
 if (VAR_10 & VAR_8[VAR_15].mask)
     FUNC_3(",%s", VAR_8[VAR_15].name);
    FUNC_3("\nBASR: %02x ", VAR_12);
    for (VAR_15 = 0; VAR_5[VAR_15].mask ; ++VAR_15)
 if (VAR_12 & VAR_5[VAR_15].mask)
     FUNC_3(",%s", VAR_5[VAR_15].name);
    FUNC_3("\nICR: %02x ", VAR_14);
    for (VAR_15 = 0; VAR_6[VAR_15].mask; ++VAR_15)
 if (VAR_14 & VAR_6[VAR_15].mask)
     FUNC_3(",%s", VAR_6[VAR_15].name);
    FUNC_3("\nMODE: %02x ", VAR_13);
    for (VAR_15 = 0; VAR_7[VAR_15].mask; ++VAR_15)
 if (VAR_13 & VAR_7[VAR_15].mask)
     FUNC_3(",%s", VAR_7[VAR_15].name);
    FUNC_3("\n");
}
