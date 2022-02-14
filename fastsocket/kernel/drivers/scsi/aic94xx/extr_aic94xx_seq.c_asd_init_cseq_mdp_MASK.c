
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {scalar_t__ dma_handle; } ;
struct TYPE_8__ {TYPE_3__* actual_dl; TYPE_2__ next_scb; } ;
struct TYPE_5__ {scalar_t__ max_ddbs; } ;
struct asd_ha_struct {TYPE_4__ seq; TYPE_1__ hw_prof; } ;
struct TYPE_7__ {scalar_t__ dma_handle; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_2 (struct asd_ha_struct*,int ,scalar_t__) ;
 int FUNC_3 (struct asd_ha_struct*,scalar_t__,int ) ;
 int FUNC_4 (struct asd_ha_struct*,scalar_t__,int ) ;
 int FUNC_5 (struct asd_ha_struct*,scalar_t__,int) ;
 scalar_t__ VAR_27 ;

__attribute__((used)) static void FUNC_6(struct asd_ha_struct *VAR_28)
{
 int VAR_29;
 int VAR_30;

 VAR_30 = VAR_17 * 2;


 for (VAR_29 = 0; VAR_29 < 8; VAR_29++) {
  FUNC_5(VAR_28, VAR_29*VAR_30+VAR_14, 0);
  FUNC_5(VAR_28, VAR_29*VAR_30+VAR_12, 0);
  FUNC_5(VAR_28, VAR_29*VAR_30+VAR_18, 0xFFFF);
  FUNC_5(VAR_28, VAR_29*VAR_30+VAR_19, 0xFFFF);
  FUNC_3(VAR_28, VAR_29*VAR_30+VAR_13, 0);
 }




 FUNC_5(VAR_28, VAR_21, 0xFFFF);
 FUNC_5(VAR_28, VAR_22, 0);
 FUNC_5(VAR_28, VAR_23, 0);
 FUNC_5(VAR_28, VAR_2, 0);
 FUNC_5(VAR_28, VAR_20, 0);
 FUNC_5(VAR_28, VAR_26, 0);
 FUNC_5(VAR_28, VAR_6, 0);
 FUNC_5(VAR_28, VAR_5, 0);
 FUNC_5(VAR_28, VAR_1, 0);
 FUNC_3(VAR_28, VAR_25, 0);
 FUNC_3(VAR_28, VAR_24, 0);
 FUNC_5(VAR_28, VAR_11, 0);
 FUNC_5(VAR_28, VAR_4,
      (u16)VAR_27+1);
 FUNC_5(VAR_28, VAR_3,
      (u16)VAR_28->hw_prof.max_ddbs);


 FUNC_4(VAR_28, VAR_16, 0);
 FUNC_4(VAR_28, VAR_16 + 4, 0);
 FUNC_4(VAR_28, VAR_15, 0);
 FUNC_4(VAR_28, VAR_15 + 4, 0);



 FUNC_2(VAR_28, VAR_10,
      VAR_28->seq.next_scb.dma_handle);
 FUNC_1("First SCB dma_handle: 0x%llx\n",
      (unsigned long long)VAR_28->seq.next_scb.dma_handle);


 FUNC_2(VAR_28, VAR_7,
      VAR_28->seq.actual_dl->dma_handle);



 FUNC_4(VAR_28, VAR_9,
       FUNC_0(VAR_28->seq.actual_dl->dma_handle));

 FUNC_3(VAR_28, VAR_8, VAR_0);


}
