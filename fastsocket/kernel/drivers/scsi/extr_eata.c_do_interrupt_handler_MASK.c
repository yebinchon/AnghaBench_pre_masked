
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*) ;
 unsigned int VAR_1 ;
 struct Scsi_Host** VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct Scsi_Host *VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;
 irqreturn_t VAR_9;


 if ((VAR_7 = (unsigned int)((char *)VAR_5 - VAR_3)) >= VAR_1)
  return VAR_0;
 VAR_6 = VAR_2[VAR_7];

 FUNC_1(VAR_6->host_lock, VAR_8);
 VAR_9 = FUNC_0(VAR_6);
 FUNC_2(VAR_6->host_lock, VAR_8);
 return VAR_9;
}
