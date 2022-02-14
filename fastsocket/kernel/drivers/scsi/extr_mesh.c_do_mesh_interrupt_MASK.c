
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_state {struct Scsi_Host* host; } ;
struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct mesh_state*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 unsigned long VAR_3;
 struct mesh_state *VAR_4 = VAR_2;
 struct Scsi_Host *VAR_5 = VAR_4->host;

 FUNC_1(VAR_5->host_lock, VAR_3);
 FUNC_0(VAR_4);
 FUNC_2(VAR_5->host_lock, VAR_3);
 return VAR_0;
}
