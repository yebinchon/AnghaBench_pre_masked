
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ SG_handle; int SGarray; } ;
struct ivtv {TYPE_1__ udma; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ivtv*) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;

void FUNC_2(struct ivtv *VAR_1)
{
 if (VAR_1->udma.SG_handle == 0) {

  VAR_1->udma.SG_handle = FUNC_1(VAR_1->pdev, VAR_1->udma.SGarray,
      sizeof(VAR_1->udma.SGarray), VAR_0);
  FUNC_0(VAR_1);
 }
}
