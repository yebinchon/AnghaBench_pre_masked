
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_request_hdr {scalar_t__ type; scalar_t__ xid; scalar_t__ rpc_vers; scalar_t__ prog; scalar_t__ vers; scalar_t__ procedure; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_request_hdr*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,void**,int,int) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(void *VAR_3)
{
 void *VAR_4;
 struct rpc_request_hdr *VAR_5;
 int VAR_6;

 do {
  VAR_6 = FUNC_4(VAR_2, &VAR_4, -1, -1);
  if (VAR_6 < 0) {
   FUNC_5("adsp: could not read rpc: %d\n", VAR_6);
   break;
  }
  VAR_5 = (struct rpc_request_hdr *)VAR_4;

  VAR_5->type = FUNC_0(VAR_5->type);
  VAR_5->xid = FUNC_0(VAR_5->xid);
  VAR_5->rpc_vers = FUNC_0(VAR_5->rpc_vers);
  VAR_5->prog = FUNC_0(VAR_5->prog);
  VAR_5->vers = FUNC_0(VAR_5->vers);
  VAR_5->procedure = FUNC_0(VAR_5->procedure);

  if (VAR_5->type != 0)
   goto bad_rpc;
  if (VAR_5->rpc_vers != 2)
   goto bad_rpc;
  if (VAR_5->prog != VAR_0)
   goto bad_rpc;
  if (VAR_5->vers != VAR_1)
   goto bad_rpc;

  FUNC_2(VAR_5);
  FUNC_3(VAR_4);
  continue;

bad_rpc:
  FUNC_5("adsp: bogus rpc from modem\n");
  FUNC_3(VAR_4);
 } while (1);

 FUNC_1(0);
}
