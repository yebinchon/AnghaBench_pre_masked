
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initio_host {int dummy; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct initio_host*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct Scsi_Host *VAR_4 = VAR_3;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(VAR_4->host_lock, VAR_5);
 VAR_6 = FUNC_0((struct initio_host *)VAR_4->hostdata);
 FUNC_2(VAR_4->host_lock, VAR_5);
 if (VAR_6)
  return VAR_0;
 else
  return VAR_1;
}
