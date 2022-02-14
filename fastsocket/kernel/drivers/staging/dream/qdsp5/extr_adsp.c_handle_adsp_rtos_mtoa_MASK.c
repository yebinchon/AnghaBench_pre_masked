
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_request_hdr {int procedure; int xid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct rpc_request_hdr*) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rpc_request_hdr *VAR_3)
{
 switch (VAR_3->procedure) {
 case 128:
  FUNC_2(VAR_2,
          VAR_3->xid,
          VAR_1);
  break;
 case 129:
  FUNC_0(VAR_3);
  break;
 default:
  FUNC_1("adsp: unknowned proc %d\n", VAR_3->procedure);
  FUNC_2(
   VAR_2, VAR_3->xid,
   VAR_0);
  break;
 }
 return 0;
}
