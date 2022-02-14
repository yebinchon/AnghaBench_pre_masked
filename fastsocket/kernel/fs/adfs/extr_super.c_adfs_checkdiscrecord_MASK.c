
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adfs_discrecord {int log2secsize; int idlen; scalar_t__* unused52; int disc_size_high; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct adfs_discrecord *VAR_0)
{
 int VAR_1;


 if (VAR_0->log2secsize != 8 &&
     VAR_0->log2secsize != 9 &&
     VAR_0->log2secsize != 10)
  return 1;


 if (VAR_0->idlen < VAR_0->log2secsize + 3)
  return 1;





 if (FUNC_0(VAR_0->disc_size_high) >> VAR_0->log2secsize)
  return 1;


 if (VAR_0->idlen > 19)
  return 1;


 for (VAR_1 = 0; VAR_1 < sizeof(VAR_0->unused52); VAR_1++)
  if (VAR_0->unused52[VAR_1] != 0)
   return 1;

 return 0;
}
