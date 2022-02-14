
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {int flags; int ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_link*) ;
 scalar_t__ FUNC_1 (struct ata_link*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_2,
           int VAR_3, const unsigned int *VAR_4)
{
 if ((VAR_2->flags & VAR_0) || FUNC_1(VAR_2))
  return 0;
 if (VAR_3 == -VAR_1)
  return 1;
 if (FUNC_2(VAR_2->ap) && FUNC_0(VAR_2))
  return 1;
 return 0;
}
