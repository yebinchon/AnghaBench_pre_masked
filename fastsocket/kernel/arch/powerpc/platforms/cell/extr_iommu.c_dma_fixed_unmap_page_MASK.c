
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* unmap_page ) (struct device*,int ,size_t,int,struct dma_attrs*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct dma_attrs*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,size_t,int,struct dma_attrs*) ;
 int FUNC_3 (struct device*,int ,size_t,int,struct dma_attrs*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_3, dma_addr_t VAR_4,
     size_t VAR_5, enum dma_data_direction VAR_6,
     struct dma_attrs *VAR_7)
{
 if (VAR_2 == FUNC_1(VAR_0, VAR_7))
  VAR_1.unmap_page(VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7);
 else
  FUNC_2(FUNC_0(VAR_3), VAR_4, VAR_5,
     VAR_6, VAR_7);
}
