
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {char* packet; } ;
struct ncp_reply_header {int dummy; } ;



__attribute__((used)) static inline char *
FUNC_0(struct ncp_server *VAR_0, int VAR_1)
{
 return &(VAR_0->packet[sizeof(struct ncp_reply_header) + VAR_1]);
}
