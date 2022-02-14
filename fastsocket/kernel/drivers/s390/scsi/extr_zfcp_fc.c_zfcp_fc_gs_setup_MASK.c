
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_wka_ports {int ks; int as; int ds; int ts; int ms; } ;
struct zfcp_adapter {struct zfcp_wka_ports* gs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct zfcp_wka_ports* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,struct zfcp_adapter*) ;

int FUNC_2(struct zfcp_adapter *VAR_7)
{
 struct zfcp_wka_ports *VAR_8;

 VAR_8 = FUNC_0(sizeof(struct zfcp_wka_ports), VAR_6);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->gs = VAR_8;
 FUNC_1(&VAR_8->ms, VAR_3, VAR_7);
 FUNC_1(&VAR_8->ts, VAR_5, VAR_7);
 FUNC_1(&VAR_8->ds, VAR_2, VAR_7);
 FUNC_1(&VAR_8->as, VAR_1, VAR_7);
 FUNC_1(&VAR_8->ks, VAR_4, VAR_7);

 return 0;
}
