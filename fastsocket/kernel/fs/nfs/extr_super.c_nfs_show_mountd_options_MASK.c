
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct seq_file {int dummy; } ;
struct nfs_server {int * mountd_port; int * mountd_version; int mountd_address; } ;




 int FUNC_0 (struct seq_file*,struct nfs_server*,int) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct nfs_server *VAR_1,
        int VAR_2)
{
 struct sockaddr *VAR_3 = (struct sockaddr *)&VAR_1->mountd_address;

 switch (VAR_3->sa_family) {
 case 129: {
  struct sockaddr_in *VAR_4 = (struct sockaddr_in *)VAR_3;
  FUNC_1(VAR_0, ",mountaddr=%pI4", &VAR_4->sin_addr.s_addr);
  break;
 }
 case 128: {
  struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *)VAR_3;
  FUNC_1(VAR_0, ",mountaddr=%pI6", &VAR_5->sin6_addr);
  break;
 }
 default:
  if (VAR_2)
   FUNC_1(VAR_0, ",mountaddr=unspecified");
 }

 if (VAR_1->mountd_version || VAR_2)
  FUNC_1(VAR_0, ",mountvers=%u", VAR_1->mountd_version);
 if (VAR_1->mountd_port || VAR_2)
  FUNC_1(VAR_0, ",mountport=%u", VAR_1->mountd_port);

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
