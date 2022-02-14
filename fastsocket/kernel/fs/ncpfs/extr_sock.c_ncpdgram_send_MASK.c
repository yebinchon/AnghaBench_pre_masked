
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec ;
struct socket {int dummy; } ;
struct ncp_request_reply {int tx_iovlen; int tx_totallen; int tx_ciov; } ;
struct kvec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,struct kvec*,int,int ,int ) ;
 int FUNC_1 (struct kvec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_1, struct ncp_request_reply *VAR_2)
{
 struct kvec VAR_3[3];

 FUNC_1(VAR_3, VAR_2->tx_ciov, VAR_2->tx_iovlen * sizeof(VAR_3[0]));
 return FUNC_0(VAR_1, VAR_3, VAR_2->tx_iovlen,
         VAR_2->tx_totallen, VAR_0);
}
