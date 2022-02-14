
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {size_t current_size; int * packet; } ;


 int FUNC_0 (struct ncp_server*) ;
 int FUNC_1 (int *,void const*,int) ;

__attribute__((used)) static void FUNC_2(struct ncp_server *VAR_0, const void *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0);
 FUNC_1(&(VAR_0->packet[VAR_0->current_size]), VAR_1, VAR_2);
 VAR_0->current_size += VAR_2;
 return;
}
