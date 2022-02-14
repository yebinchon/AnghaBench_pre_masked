
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
    unsigned long VAR_3;
    struct Scsi_Host *VAR_4 = VAR_2;

    FUNC_0(VAR_4->host_lock, VAR_3);
    FUNC_2(VAR_2);
    FUNC_1(VAR_4->host_lock, VAR_3);
    return VAR_0;
}
