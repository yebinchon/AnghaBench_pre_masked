
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_portdata {int port_cnt; int port_seq_cnt; int * port_pkeys; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipath_portdata* FUNC_0 (int,int ) ;

__attribute__((used)) static struct ipath_portdata *FUNC_1(struct ipath_devdata *VAR_2)
{
 struct ipath_portdata *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  VAR_3->port_dd = VAR_2;
  VAR_3->port_cnt = 1;

  VAR_3->port_pkeys[0] = VAR_1;
  VAR_3->port_seq_cnt = 1;
 }
 return VAR_3;
}
