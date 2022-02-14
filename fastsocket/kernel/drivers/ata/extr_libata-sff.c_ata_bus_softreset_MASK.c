
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_ioports {int ctl_addr; } ;
struct ata_port {int ctl; int last_ctl; int link; int print_id; struct ata_ioports ioaddr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,unsigned int,unsigned long) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ata_port *VAR_1, unsigned int VAR_2,
        unsigned long VAR_3)
{
 struct ata_ioports *VAR_4 = &VAR_1->ioaddr;

 FUNC_0("ata%u: bus reset via SRST\n", VAR_1->print_id);


 FUNC_2(VAR_1->ctl, VAR_4->ctl_addr);
 FUNC_3(20);
 FUNC_2(VAR_1->ctl | VAR_0, VAR_4->ctl_addr);
 FUNC_3(20);
 FUNC_2(VAR_1->ctl, VAR_4->ctl_addr);
 VAR_1->last_ctl = VAR_1->ctl;


 return FUNC_1(&VAR_1->link, VAR_2, VAR_3);
}
