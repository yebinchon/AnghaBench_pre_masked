
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int eeh_config_addr; int eeh_pe_config_addr; TYPE_1__* phb; } ;
struct TYPE_2__ {int buid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int,int,int *,int,int ,int ,int ,size_t,int ,int ,int) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct pci_dn *VAR_5, int VAR_6,
                                   char *VAR_7, size_t VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 int VAR_11;


 FUNC_5(&VAR_4, VAR_10);
 FUNC_3(VAR_3, 0, VAR_1);


 VAR_9 = VAR_5->eeh_config_addr;
 if (VAR_5->eeh_pe_config_addr)
  VAR_9 = VAR_5->eeh_pe_config_addr;

 VAR_11 = FUNC_4(VAR_2,
                8, 1, ((void*)0), VAR_9,
                FUNC_0(VAR_5->phb->buid),
                FUNC_1(VAR_5->phb->buid),
                FUNC_7(VAR_7), VAR_8,
                FUNC_7(VAR_3),
                VAR_1,
                VAR_6);

 if (VAR_11 == 0)
  FUNC_2(VAR_3, VAR_0, 0);
 FUNC_6(&VAR_4, VAR_10);
}
