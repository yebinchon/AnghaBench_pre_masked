
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nic {int netdev; TYPE_2__* csr; int cuc_cmd; struct cb* cb_to_clean; } ;
struct firmware {int dummy; } ;
struct cb {int status; } ;
struct TYPE_3__ {int stat_ack; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct nic*,void*,int ) ;
 struct firmware* FUNC_4 (struct nic*) ;
 int VAR_4 ;
 int FUNC_5 (struct nic*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct nic*,int ,int ,char*,...) ;
 int VAR_5 ;
 int FUNC_9 (int) ;

__attribute__((used)) static inline int FUNC_10(struct nic *VAR_6)
{
 const struct firmware *VAR_7;
 int VAR_8 = 0, VAR_9 = 50;
 struct cb *VAR_10 = VAR_6->cb_to_clean;

 VAR_7 = FUNC_4(VAR_6);

 if (!VAR_7 || FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if ((VAR_8 = FUNC_3(VAR_6, (void *)VAR_7, VAR_4)))
  FUNC_8(VAR_6, VAR_5, VAR_6->netdev,
     "ucode cmd failed with error %d\n", VAR_8);


 VAR_6->cuc_cmd = VAR_3;


 FUNC_5(VAR_6);
 FUNC_9(10);


 while (!(VAR_10->status & FUNC_2(VAR_1))) {
  FUNC_7(10);
  if (!--VAR_9) break;
 }


 FUNC_6(~0, &VAR_6->csr->scb.stat_ack);


 if (!VAR_9 || !(VAR_10->status & FUNC_2(VAR_2))) {
  FUNC_8(VAR_6, VAR_5, VAR_6->netdev, "ucode load failed\n");
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
