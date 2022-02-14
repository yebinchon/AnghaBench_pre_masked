
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct qla_hw_data {int hardware_lock; int * req_q_map; } ;
struct TYPE_22__ {int type; TYPE_1__* fcport; } ;
typedef TYPE_2__ srb_t ;
struct TYPE_23__ {struct qla_hw_data* hw; } ;
struct TYPE_21__ {TYPE_7__* vha; } ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_7__*,int,char*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,void*) ;
 int FUNC_4 (TYPE_2__*,void*) ;
 int FUNC_5 (TYPE_2__*,void*) ;
 int FUNC_6 (TYPE_2__*,void*) ;
 int FUNC_7 (TYPE_2__*,void*) ;
 int FUNC_8 (TYPE_2__*,void*) ;
 int FUNC_9 (TYPE_2__*,void*) ;
 void* FUNC_10 (TYPE_7__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,void*) ;
 int FUNC_12 (TYPE_2__*,void*) ;
 int FUNC_13 (TYPE_2__*,void*) ;
 int FUNC_14 (TYPE_7__*,int ) ;
 int FUNC_15 (TYPE_2__*,void*) ;
 int FUNC_16 (TYPE_2__*,void*) ;
 int FUNC_17 (TYPE_2__*,void*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 () ;

int
FUNC_21(srb_t *VAR_3)
{
 int VAR_4;
 struct qla_hw_data *VAR_5 = VAR_3->fcport->vha->hw;
 void *VAR_6;
 unsigned long VAR_7;

 VAR_4 = VAR_0;
 FUNC_18(&VAR_5->hardware_lock, VAR_7);
 VAR_6 = FUNC_10(VAR_3->fcport->vha, VAR_3);
 if (!VAR_6) {
  FUNC_2(VAR_2, VAR_3->fcport->vha, 0x700c,
      "qla2x00_alloc_iocbs failed.\n");
  goto done;
 }

 VAR_4 = VAR_1;
 switch (VAR_3->type) {
 case 130:
  FUNC_0(VAR_5) ?
      FUNC_6(VAR_3, VAR_6):
      FUNC_12(VAR_3, VAR_6);
  break;
 case 129:
  FUNC_0(VAR_5) ?
      FUNC_7(VAR_3, VAR_6):
      FUNC_13(VAR_3, VAR_6);
  break;
 case 133:
 case 134:
  FUNC_5(VAR_3, VAR_6);
  break;
 case 135:
  FUNC_0(VAR_5) ?
      FUNC_4(VAR_3, VAR_6) :
      FUNC_11(VAR_3, VAR_6);
  break;
 case 136:
  FUNC_0(VAR_5) ?
      FUNC_3(VAR_3, VAR_6):
      FUNC_9(VAR_3, VAR_6);
  break;
 case 128:
  FUNC_1(VAR_5) ?
      FUNC_17(VAR_3, VAR_6) :
      FUNC_8(VAR_3, VAR_6);
  break;
 case 131:
 case 132:
  FUNC_16(VAR_3, VAR_6);
  break;
 case 137:
  FUNC_15(VAR_3, VAR_6);
  break;
 default:
  break;
 }

 FUNC_20();
 FUNC_14(VAR_3->fcport->vha, VAR_5->req_q_map[0]);
done:
 FUNC_19(&VAR_5->hardware_lock, VAR_7);
 return VAR_4;
}
