
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {struct adma_port_priv* private_data; } ;
struct ata_link {struct ata_port* ap; } ;
struct adma_port_priv {scalar_t__ state; } ;


 int FUNC_0 (struct ata_port*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ata_link*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ata_link *VAR_2, unsigned long VAR_3)
{
 struct ata_port *VAR_4 = VAR_2->ap;
 struct adma_port_priv *VAR_5 = VAR_4->private_data;

 if (VAR_5->state != VAR_0)
  VAR_5->state = VAR_1;
 FUNC_0(VAR_4);

 return FUNC_1(VAR_2, VAR_3);
}
