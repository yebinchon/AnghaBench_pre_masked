
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx; } ;
struct TYPE_4__ {TYPE_1__ icount; } ;
struct nwpserial_port {TYPE_2__ port; int dcr_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned char) ;
 int FUNC_1 (struct nwpserial_port*,int ) ;

__attribute__((used)) static void FUNC_2(struct nwpserial_port *VAR_2, unsigned char VAR_3)
{

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_2->dcr_host, VAR_1, VAR_3);
 VAR_2->port.icount.tx++;
}
