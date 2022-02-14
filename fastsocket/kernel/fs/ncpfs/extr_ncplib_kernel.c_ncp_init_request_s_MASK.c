
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int current_size; int has_subfunction; } ;
struct ncp_request_header {int dummy; } ;


 int FUNC_0 (struct ncp_server*,int) ;
 int FUNC_1 (struct ncp_server*) ;

__attribute__((used)) static inline void FUNC_2(struct ncp_server *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0);

 VAR_0->current_size = sizeof(struct ncp_request_header) + 2;
 FUNC_0(VAR_0, VAR_1);

 VAR_0->has_subfunction = 1;
}
