
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_port {scalar_t__ cbl; } ;
struct ata_device {int id; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u8 FUNC_2(struct ata_device *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->link->ap;

 if (FUNC_0(VAR_2) & VAR_1)
  return 0;

 return ((VAR_3->cbl == VAR_0) && (!FUNC_1(VAR_2->id)));
}
