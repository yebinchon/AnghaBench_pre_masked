
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int name; } ;
struct omap_ep {TYPE_1__ ep; } ;


 int FUNC_0 (char*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_0, u16 VAR_1, void *VAR_2)
{
 struct omap_ep *VAR_3 = VAR_2;



 FUNC_0("%s dma error, lch %d status %02x\n", VAR_3->ep.name, VAR_0, VAR_1);


}
