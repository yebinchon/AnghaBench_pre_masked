
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_link {TYPE_1__* ap; } ;
struct TYPE_2__ {int cbl; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_link*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct ata_link *VAR_1, unsigned long VAR_2)
{
 VAR_1->ap->cbl = VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
