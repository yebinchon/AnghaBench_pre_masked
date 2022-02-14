
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_timeout {unsigned long to_initval; unsigned long to_increment; unsigned long to_maxval; unsigned int to_retries; } ;
struct rpc_create_args {int flags; int saddress; int authflavor; int version; int * program; int servername; struct rpc_timeout* timeout; int addrsize; int address; int protocol; int * net; } ;
struct rpc_clnt {int dummy; } ;
struct nlm_host {int h_mutex; int h_name; struct rpc_clnt* h_rpcclnt; scalar_t__ h_srcaddrlen; scalar_t__ h_noresvport; int h_server; int h_version; int h_addrlen; int h_proto; scalar_t__ h_nextrebind; int h_addrbuf; } ;


 int FUNC_0 (struct rpc_clnt*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nlm_host*) ;
 int VAR_8 ;
 int FUNC_5 (struct nlm_host*) ;
 unsigned long VAR_9 ;
 int FUNC_6 (char*,int ) ;
 struct rpc_clnt* FUNC_7 (struct rpc_create_args*) ;
 int FUNC_8 (struct rpc_clnt*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

struct rpc_clnt *
FUNC_10(struct nlm_host *VAR_10)
{
 struct rpc_clnt *VAR_11;

 FUNC_1("lockd: nlm_bind_host %s (%s)\n",
   VAR_10->h_name, VAR_10->h_addrbuf);


 FUNC_2(&VAR_10->h_mutex);




 if ((VAR_11 = VAR_10->h_rpcclnt) != ((void*)0)) {
  if (FUNC_9(VAR_7, VAR_10->h_nextrebind)) {
   FUNC_8(VAR_11);
   VAR_10->h_nextrebind = VAR_7 + VAR_0;
   FUNC_1("lockd: next rebind in %lu jiffies\n",
     VAR_10->h_nextrebind - VAR_7);
  }
 } else {
  unsigned long VAR_12 = VAR_9;
  struct rpc_timeout VAR_13 = {
   .to_initval = VAR_12,
   .to_increment = VAR_12,
   .to_maxval = VAR_12 * 6UL,
   .to_retries = 5U,
  };
  struct rpc_create_args VAR_14 = {
   .net = &VAR_6,
   .protocol = VAR_10->h_proto,
   .address = FUNC_4(VAR_10),
   .addrsize = VAR_10->h_addrlen,
   .timeout = &VAR_13,
   .servername = VAR_10->h_name,
   .program = &VAR_8,
   .version = VAR_10->h_version,
   .authflavor = VAR_1,
   .flags = (VAR_5 |
        VAR_2),
  };






  if (!VAR_10->h_server)
   VAR_14.flags |= VAR_3;
  if (VAR_10->h_noresvport)
   VAR_14.flags |= VAR_4;
  if (VAR_10->h_srcaddrlen)
   VAR_14.saddress = FUNC_5(VAR_10);

  VAR_11 = FUNC_7(&VAR_14);
  if (!FUNC_0(VAR_11))
   VAR_10->h_rpcclnt = VAR_11;
  else {
   FUNC_6("lockd: couldn't create RPC handle for %s\n", VAR_10->h_name);
   VAR_11 = ((void*)0);
  }
 }

 FUNC_3(&VAR_10->h_mutex);
 return VAR_11;
}
