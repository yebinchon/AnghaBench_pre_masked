
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int,void*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_0, void *VAR_1)
{
 unsigned long VAR_2;
 struct Scsi_Host *VAR_3 = VAR_1;
 irqreturn_t VAR_4;

 FUNC_1(VAR_3->host_lock, VAR_2);
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_3->host_lock, VAR_2);
 return VAR_4;
}
