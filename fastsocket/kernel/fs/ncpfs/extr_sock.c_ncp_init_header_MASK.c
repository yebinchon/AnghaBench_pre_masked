
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int connection; scalar_t__ sequence; } ;
struct ncp_request_reply {int status; } ;
struct ncp_request_header {int conn_low; int conn_high; scalar_t__ sequence; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ncp_server *VAR_1, struct ncp_request_reply *VAR_2, struct ncp_request_header *VAR_3)
{
 VAR_2->status = VAR_0;
 VAR_3->conn_low = VAR_1->connection;
 VAR_3->conn_high = VAR_1->connection >> 8;
 VAR_3->sequence = ++VAR_1->sequence;
}
