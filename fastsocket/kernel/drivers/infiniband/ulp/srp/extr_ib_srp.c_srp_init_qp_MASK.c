
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pkey; } ;
struct srp_target_port {TYPE_3__* srp_host; TYPE_2__ path; } ;
struct ib_qp_attr {int qp_access_flags; int port_num; int qp_state; int pkey_index; } ;
struct ib_qp {int dummy; } ;
struct TYPE_6__ {int port; TYPE_1__* srp_dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_3 (struct ib_qp_attr*) ;
 struct ib_qp_attr* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct srp_target_port *VAR_9,
         struct ib_qp *VAR_10)
{
 struct ib_qp_attr *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(sizeof *VAR_11, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_9->srp_host->srp_dev->dev,
      VAR_9->srp_host->port,
      FUNC_0(VAR_9->path.pkey),
      &VAR_11->pkey_index);
 if (VAR_12)
  goto out;

 VAR_11->qp_state = VAR_4;
 VAR_11->qp_access_flags = (VAR_2 |
        VAR_3);
 VAR_11->port_num = VAR_9->srp_host->port;

 VAR_12 = FUNC_2(VAR_10, VAR_11,
      VAR_8 |
      VAR_6 |
      VAR_5 |
      VAR_7);

out:
 FUNC_3(VAR_11);
 return VAR_12;
}
