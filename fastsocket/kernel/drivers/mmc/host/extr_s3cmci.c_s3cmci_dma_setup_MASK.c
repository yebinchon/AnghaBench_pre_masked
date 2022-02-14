
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3cmci_host {int dma; scalar_t__ sdidata; TYPE_1__* mem; } ;
typedef enum s3c2410_dmasrc { ____Placeholder_s3c2410_dmasrc } s3c2410_dmasrc ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct s3cmci_host *VAR_2,
        enum s3c2410_dmasrc VAR_3)
{
 static enum s3c2410_dmasrc VAR_4 = -1;
 static int VAR_5;

 if (VAR_4 == VAR_3)
  return;

 VAR_4 = VAR_3;

 FUNC_1(VAR_2->dma, VAR_3,
         VAR_2->mem->start + VAR_2->sdidata);

 if (!VAR_5) {
  FUNC_0(VAR_2->dma, 4);
  FUNC_2(VAR_2->dma,
         VAR_1);
  FUNC_3(VAR_2->dma, VAR_0);
  VAR_5 = 1;
 }
}
