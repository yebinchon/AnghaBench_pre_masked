
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* dma_mask; int coherent_dma_mask; int * bus; struct device* parent; } ;
struct TYPE_3__ {int hw_type; } ;
struct parisc_device {char hw_path; int dma_mask; TYPE_2__ dev; TYPE_1__ id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct parisc_device*) ;
 struct parisc_device* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct parisc_device*) ;

struct parisc_device * FUNC_4(char VAR_3, struct device *VAR_4)
{
 struct parisc_device *VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->hw_path = VAR_3;
 VAR_5->id.hw_type = VAR_1;

 VAR_5->dev.parent = VAR_4;
 FUNC_3(VAR_5);

 VAR_5->dev.bus = &VAR_2;
 VAR_5->dma_mask = 0xffffffffUL;


 VAR_5->dev.dma_mask = &VAR_5->dma_mask;
 VAR_5->dev.coherent_dma_mask = VAR_5->dma_mask;
 if (FUNC_0(&VAR_5->dev)) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
