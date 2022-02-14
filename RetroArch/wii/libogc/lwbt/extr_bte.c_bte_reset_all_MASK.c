
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_err; scalar_t__ num_founddevs; scalar_t__ hci_cmddone; scalar_t__ hci_inited; int * info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2()
{
 FUNC_0(&VAR_2);
 FUNC_0(&VAR_1);

 if(VAR_3.info!=((void*)0)) FUNC_1(VAR_3.info);

 VAR_3.info = ((void*)0);
 VAR_3.hci_inited = 0;
 VAR_3.hci_cmddone = 0;
 VAR_3.num_founddevs = 0;
 VAR_3.last_err = VAR_0;
}
