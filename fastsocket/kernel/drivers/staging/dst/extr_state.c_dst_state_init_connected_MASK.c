
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sa_data_len; } ;
struct dst_network_ctl {TYPE_1__ addr; } ;
struct dst_state {int socket; struct dst_network_ctl ctl; } ;


 int FUNC_0 (int ,struct sockaddr*,char*) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (struct dst_state*) ;
 int FUNC_3 (struct dst_state*) ;
 int FUNC_4 (int ,struct sockaddr*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dst_state *VAR_0)
{
 int VAR_1;
 struct dst_network_ctl *VAR_2 = &VAR_0->ctl;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto err_out_exit;

 VAR_1 = FUNC_4(VAR_0->socket, (struct sockaddr *)&VAR_0->ctl.addr,
   VAR_0->ctl.addr.sa_data_len, 0);
 if (VAR_1)
  goto err_out_release;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto err_out_release;

 FUNC_0(VAR_0->socket, (struct sockaddr *)&VAR_2->addr,
   "Connected to peer");

 return 0;

err_out_release:
 FUNC_3(VAR_0);
err_out_exit:
 return VAR_1;
}
