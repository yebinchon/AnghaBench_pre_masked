
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bufsize; int dma; } ;
struct saa7134_dev {TYPE_1__ dmasound; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct saa7134_dev *VAR_3)
{
 int VAR_4;

 FUNC_0(!VAR_3->dmasound.bufsize);

 FUNC_1(&VAR_3->dmasound.dma);
 VAR_4 = FUNC_2(&VAR_3->dmasound.dma, VAR_2,
           (VAR_3->dmasound.bufsize + VAR_1) >> VAR_0);
 if (0 != VAR_4)
  return VAR_4;
 return 0;
}
