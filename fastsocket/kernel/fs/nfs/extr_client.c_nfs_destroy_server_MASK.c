
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int flags; int nlm_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nfs_server *VAR_2)
{
 if (!(VAR_2->flags & VAR_1) ||
   !(VAR_2->flags & VAR_0))
  FUNC_0(VAR_2->nlm_host);
}
