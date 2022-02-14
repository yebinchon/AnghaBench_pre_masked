
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int packet_size; scalar_t__ packet; } ;
struct ncp_request_header {int task; scalar_t__ function; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncp_server*,int,scalar_t__,int ) ;

int FUNC_1(struct ncp_server *VAR_1)
{
 struct ncp_request_header *VAR_2;

 VAR_2 = (struct ncp_request_header *) (VAR_1->packet);
 VAR_2->type = VAR_0;
 VAR_2->task = 2;
 VAR_2->function = 0;

 return FUNC_0(VAR_1, sizeof(*VAR_2), VAR_1->packet, VAR_1->packet_size);
}
