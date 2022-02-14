
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_23__ {int upper; int lower; } ;
struct TYPE_26__ {int val; TYPE_4__ val32; } ;
typedef TYPE_7__ u64bit ;
struct request {scalar_t__ cmd_type; scalar_t__ errors; int resid_len; TYPE_10__* completion_data; } ;
struct TYPE_27__ {int lock; TYPE_11__* pdev; TYPE_9__** cmd_sg_list; } ;
typedef TYPE_8__ ctlr_info_t ;
struct TYPE_24__ {int upper; int lower; } ;
struct TYPE_28__ {scalar_t__ Ext; int Len; TYPE_5__ Addr; } ;
struct TYPE_25__ {int ResidualCnt; } ;
struct TYPE_22__ {int SGList; } ;
struct TYPE_20__ {scalar_t__ Direction; } ;
struct TYPE_21__ {TYPE_1__ Type; } ;
struct TYPE_19__ {int dev; } ;
struct TYPE_18__ {size_t ctlr; size_t cmdindex; TYPE_6__* err_info; TYPE_3__ Header; TYPE_2__ Request; TYPE_9__* SG; } ;
typedef TYPE_9__ SGDescriptor_struct ;
typedef TYPE_10__ CommandList_struct ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_10__*) ;
 int FUNC_3 (TYPE_8__*,TYPE_10__*) ;
 int FUNC_4 (int *,char*,struct request*) ;
 TYPE_8__** VAR_6 ;
 int FUNC_5 (TYPE_11__*,int ,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct request *VAR_7)
{
 CommandList_struct *VAR_8 = VAR_7->completion_data;
 ctlr_info_t *VAR_9 = VAR_6[VAR_8->ctlr];
 SGDescriptor_struct *VAR_10 = VAR_8->SG;
 unsigned long VAR_11;
 u64bit VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 if (VAR_8->Request.Type.Direction == VAR_5)
  VAR_14 = VAR_2;
 else
  VAR_14 = VAR_3;



 for (VAR_13 = 0; VAR_13 < VAR_8->Header.SGList; VAR_13++) {
  if (VAR_10[VAR_15].Ext == VAR_0) {
   FUNC_2(VAR_9, VAR_8);

   VAR_10 = VAR_9->cmd_sg_list[VAR_8->cmdindex];
   VAR_15 = 0;
  }
  VAR_12 = VAR_10[VAR_15].Addr.lower;
  VAR_12 = VAR_10[VAR_15].Addr.upper;
  FUNC_5(VAR_9->pdev, VAR_12, VAR_10[VAR_15].Len,
    VAR_14);
  ++VAR_15;
 }

 FUNC_4(&VAR_9->pdev->dev, "Done with %p\n", VAR_7);


 if (VAR_7->cmd_type == VAR_4)
  VAR_7->resid_len = VAR_8->err_info->ResidualCnt;

 FUNC_0(VAR_7, (VAR_7->errors == 0) ? 0 : -VAR_1);

 FUNC_6(&VAR_9->lock, VAR_11);
 FUNC_3(VAR_9, VAR_8);
 FUNC_1(VAR_9);
 FUNC_7(&VAR_9->lock, VAR_11);
}
