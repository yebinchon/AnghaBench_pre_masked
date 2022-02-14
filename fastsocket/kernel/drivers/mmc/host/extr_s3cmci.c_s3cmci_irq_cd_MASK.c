
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3cmci_host {int mmc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct s3cmci_host*,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct s3cmci_host *VAR_4 = (struct s3cmci_host *)VAR_3;

 FUNC_0(VAR_4, VAR_1, "card detect\n");

 FUNC_1(VAR_4->mmc, FUNC_2(500));

 return VAR_0;
}
