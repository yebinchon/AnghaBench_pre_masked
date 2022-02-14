
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int CNTR; } ;


 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static irqreturn_t FUNC_4 (int VAR_3, void *VAR_4)
{
    unsigned long VAR_5;
    unsigned int VAR_6;
    struct Scsi_Host *VAR_7 = (struct Scsi_Host *)VAR_4;

    VAR_6 = FUNC_0(VAR_7)->CNTR;
    if (!(VAR_6 & VAR_0))
 return VAR_2;

    FUNC_1(VAR_7->host_lock, VAR_5);
    FUNC_3(VAR_7);
    FUNC_2(VAR_7->host_lock, VAR_5);
    return VAR_1;
}
