
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int connection; int sequence; int packet_size; scalar_t__ packet; } ;
struct ncp_request_header {int task; int conn_low; int conn_high; scalar_t__ function; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncp_server*,int,scalar_t__,int ) ;

int FUNC_1(struct ncp_server *VAR_1)
{
 struct ncp_request_header *VAR_2;
 int VAR_3;

 VAR_1->connection = 0xFFFF;
 VAR_1->sequence = 255;

 VAR_2 = (struct ncp_request_header *) (VAR_1->packet);
 VAR_2->type = VAR_0;
 VAR_2->task = 2;
 VAR_2->function = 0;

 VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_2), VAR_1->packet, VAR_1->packet_size);
 if (VAR_3 < 0)
  goto out;
 VAR_1->connection = VAR_2->conn_low + (VAR_2->conn_high * 256);
 VAR_3 = 0;
out:
 return VAR_3;
}
