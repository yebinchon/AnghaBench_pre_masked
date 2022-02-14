
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int ISTR; } ;


 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static irqreturn_t FUNC_4 (int VAR_5, void *VAR_6)
{
    unsigned long VAR_7;
    unsigned int VAR_8;
    struct Scsi_Host *VAR_9 = (struct Scsi_Host *)VAR_6;

    VAR_8 = FUNC_0(VAR_9)->ISTR;
    if (!(VAR_8 & (VAR_3|VAR_4)) || !(VAR_8 & VAR_2))
 return VAR_1;

    FUNC_1(VAR_9->host_lock, VAR_7);
    FUNC_3(VAR_9);
    FUNC_2(VAR_9->host_lock, VAR_7);
    return VAR_0;
}
