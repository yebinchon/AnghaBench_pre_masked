
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int dev; struct ata_port* ap; } ;
struct ata_port {int dummy; } ;


 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*,int ) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;

 FUNC_3(100);
 FUNC_2(VAR_1);
 FUNC_3(100);


 FUNC_1(VAR_1, VAR_0->dev);

 FUNC_0(VAR_0);
}
