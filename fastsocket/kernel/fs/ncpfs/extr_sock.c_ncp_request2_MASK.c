
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {scalar_t__ has_subfunction; int current_size; int completion; int reply_size; int ncp_reply_size; int conn_status; scalar_t__ packet; } ;
struct ncp_request_header {int task; int function; int type; int * data; } ;
struct ncp_reply_header {int completion_code; int connection_state; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ncp_server*,int,struct ncp_reply_header*,int) ;

int FUNC_4(struct ncp_server *VAR_1, int VAR_2,
  void* VAR_3, int VAR_4)
{
 struct ncp_request_header *VAR_5;
 struct ncp_reply_header* VAR_6 = VAR_3;
 int VAR_7;

 VAR_5 = (struct ncp_request_header *) (VAR_1->packet);
 if (VAR_1->has_subfunction != 0) {
  *(__u16 *) & (VAR_5->data[0]) = FUNC_2(VAR_1->current_size - sizeof(*VAR_5) - 2);
 }
 VAR_5->type = VAR_0;




 VAR_5->task = 2;
 VAR_5->function = VAR_2;

 VAR_7 = FUNC_3(VAR_1, VAR_1->current_size, VAR_6, VAR_4);
 if (VAR_7 < 0) {
  FUNC_0("ncp_request_error: %d\n", VAR_7);
  goto out;
 }
 VAR_1->completion = VAR_6->completion_code;
 VAR_1->conn_status = VAR_6->connection_state;
 VAR_1->reply_size = VAR_7;
 VAR_1->ncp_reply_size = VAR_7 - sizeof(struct ncp_reply_header);

 VAR_7 = VAR_6->completion_code;

 if (VAR_7 != 0)
  FUNC_1("ncp_request: completion code=%x\n", VAR_7);
out:
 return VAR_7;
}
