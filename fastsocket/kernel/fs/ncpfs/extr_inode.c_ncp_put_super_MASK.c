
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int * s_fs_info; } ;
struct TYPE_6__ {struct ncp_server* object_name; } ;
struct TYPE_5__ {struct ncp_server* data; } ;
struct TYPE_4__ {int wdog_pid; } ;
struct ncp_server {int packet; int txbuf; int rxbuf; TYPE_3__ auth; TYPE_2__ priv; TYPE_1__ m; scalar_t__ ncp_filp; scalar_t__ info_filp; int nls_io; int nls_vol; } ;


 struct ncp_server* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ncp_server*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ncp_server*) ;
 int FUNC_6 (struct ncp_server*) ;
 int FUNC_7 (struct ncp_server*) ;
 int FUNC_8 (struct ncp_server*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct super_block *VAR_1)
{
 struct ncp_server *VAR_2 = FUNC_0(VAR_1);

 FUNC_4();

 FUNC_6(VAR_2);
 FUNC_5(VAR_2);
 FUNC_8(VAR_2);

 FUNC_7(VAR_2);







 if (VAR_2->info_filp)
  FUNC_1(VAR_2->info_filp);
 FUNC_1(VAR_2->ncp_filp);
 FUNC_3(VAR_2->m.wdog_pid, VAR_0, 1);
 FUNC_9(VAR_2->m.wdog_pid);

 FUNC_2(VAR_2->priv.data);
 FUNC_2(VAR_2->auth.object_name);
 FUNC_12(VAR_2->rxbuf);
 FUNC_12(VAR_2->txbuf);
 FUNC_12(VAR_2->packet);
 VAR_1->s_fs_info = ((void*)0);
 FUNC_2(VAR_2);

 FUNC_11();
}
