
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_port {scalar_t__ wwpn; int status; scalar_t__ wwnn; } ;
struct zfcp_ls_adisc {scalar_t__ wwpn; scalar_t__ wwnn; } ;
struct TYPE_3__ {scalar_t__ status; struct zfcp_port* port; } ;
struct zfcp_els_adisc {TYPE_1__ els; struct zfcp_ls_adisc ls_adisc_acc; } ;
struct TYPE_4__ {int adisc_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct zfcp_els_adisc*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (struct zfcp_port*,int ,char*,int *) ;
 int FUNC_4 (struct zfcp_port*,int ,char*,int *) ;
 int FUNC_5 (struct zfcp_port*) ;
 int FUNC_6 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_4)
{
 struct zfcp_els_adisc *VAR_5 = (struct zfcp_els_adisc *) VAR_4;
 struct zfcp_port *VAR_6 = VAR_5->els.port;
 struct zfcp_ls_adisc *VAR_7 = &VAR_5->ls_adisc_acc;

 if (VAR_5->els.status) {

  FUNC_3(VAR_6, VAR_0,
         "fcadh_1", ((void*)0));
  goto out;
 }

 if (!VAR_6->wwnn)
  VAR_6->wwnn = VAR_7->wwnn;

 if ((VAR_6->wwpn != VAR_7->wwpn) ||
     !(FUNC_1(&VAR_6->status) & VAR_1)) {
  FUNC_4(VAR_6, VAR_0,
         "fcadh_2", ((void*)0));
  goto out;
 }


 FUNC_6(VAR_6);
 out:
 FUNC_0(VAR_2, &VAR_6->status);
 FUNC_5(VAR_6);
 FUNC_2(VAR_3.adisc_cache, VAR_5);
}
