
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_port {struct zfcp_adapter* adapter; } ;
struct zfcp_gid_pn_data {int dummy; } ;
struct TYPE_3__ {int gid_pn_data; } ;
struct zfcp_adapter {TYPE_1__ pool; TYPE_2__* gs; } ;
struct TYPE_4__ {int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zfcp_gid_pn_data* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct zfcp_gid_pn_data*,int ) ;
 int FUNC_2 (struct zfcp_gid_pn_data*,int ,int) ;
 int FUNC_3 (struct zfcp_port*,struct zfcp_gid_pn_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct zfcp_port *VAR_2)
{
 int VAR_3;
 struct zfcp_gid_pn_data *VAR_4;
 struct zfcp_adapter *VAR_5 = VAR_2->adapter;

 VAR_4 = FUNC_0(VAR_5->pool.gid_pn_data, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 VAR_3 = FUNC_4(&VAR_5->gs->ds);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_3(VAR_2, VAR_4);

 FUNC_5(&VAR_5->gs->ds);
out:
 FUNC_1(VAR_4, VAR_5->pool.gid_pn_data);
 return VAR_3;
}
