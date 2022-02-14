
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmclnt_initdata {int nfs_version; int noresvport; int hostname; int protocol; int addrlen; int address; } ;
struct nlm_host {int dummy; } ;


 int VAR_0 ;
 struct nlm_host* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct nlm_host* FUNC_3 (int ,int ,int ,int,int ,int ) ;

struct nlm_host *FUNC_4(const struct nlmclnt_initdata *VAR_1)
{
 struct nlm_host *VAR_2;
 u32 VAR_3 = (VAR_1->nfs_version == 2) ? 1 : 4;
 int VAR_4;

 VAR_4 = FUNC_2();
 if (VAR_4 < 0)
  return FUNC_0(VAR_4);

 VAR_2 = FUNC_3(VAR_1->address, VAR_1->addrlen,
       VAR_1->protocol, VAR_3,
       VAR_1->hostname, VAR_1->noresvport);
 if (VAR_2 == ((void*)0)) {
  FUNC_1();
  return FUNC_0(-VAR_0);
 }

 return VAR_2;
}
