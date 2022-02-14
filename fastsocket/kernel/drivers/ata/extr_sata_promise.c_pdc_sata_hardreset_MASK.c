
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ata_link {TYPE_1__* ap; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ata_link*,unsigned int*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ata_link *VAR_1, unsigned int *VAR_2,
         unsigned long VAR_3)
{
 if (VAR_1->ap->flags & VAR_0)
  FUNC_1(VAR_1->ap);

 FUNC_0(VAR_1->ap);
 FUNC_2(VAR_1->ap);





 return FUNC_3(VAR_1, VAR_2, VAR_3);
}
