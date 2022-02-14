
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int current_size; scalar_t__ has_subfunction; } ;
struct ncp_request_header {int dummy; } ;


 int FUNC_0 (struct ncp_server*) ;

__attribute__((used)) static inline void FUNC_1(struct ncp_server *VAR_0)
{
 FUNC_0(VAR_0);

 VAR_0->current_size = sizeof(struct ncp_request_header);
 VAR_0->has_subfunction = 0;
}
