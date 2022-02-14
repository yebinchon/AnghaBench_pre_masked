
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_data {int pdev; } ;
struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct sym_data* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4;
 struct sym_data *VAR_6 = FUNC_2(VAR_5);
 irqreturn_t VAR_7;


 if (FUNC_0(VAR_6->pdev))
  return VAR_2;

 if (VAR_0 & VAR_1) FUNC_1 ("[");

 FUNC_3(VAR_5->host_lock);
 VAR_7 = FUNC_5(VAR_5);
 FUNC_4(VAR_5->host_lock);

 if (VAR_0 & VAR_1) FUNC_1 ("]\n");

 return VAR_7;
}
