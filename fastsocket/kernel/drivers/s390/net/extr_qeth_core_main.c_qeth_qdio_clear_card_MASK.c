
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {int type; } ;
struct qeth_card {int state; TYPE_1__ qdio; TYPE_2__ info; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct qeth_card*,int) ;

int FUNC_7(struct qeth_card *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 FUNC_1(VAR_5, 3, "qdioclr");
 switch (FUNC_3(&VAR_6->qdio.state, 128,
  129)) {
 case 128:
  if (VAR_6->info.type == VAR_3)
   VAR_8 = FUNC_5(FUNC_0(VAR_6),
    VAR_2);
  else
   VAR_8 = FUNC_5(FUNC_0(VAR_6),
    VAR_1);
  if (VAR_8)
   FUNC_2(VAR_5, 3, "1err%d", VAR_8);
  FUNC_4(&VAR_6->qdio.state, VAR_4);
  break;
 case 129:
  return VAR_8;
 default:
  break;
 }
 VAR_8 = FUNC_6(VAR_6, VAR_7);
 if (VAR_8)
  FUNC_2(VAR_5, 3, "2err%d", VAR_8);
 VAR_6->state = VAR_0;
 return VAR_8;
}
