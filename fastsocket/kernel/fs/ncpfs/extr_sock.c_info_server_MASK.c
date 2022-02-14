
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {scalar_t__ info_sock; } ;
struct kvec {int iov_len; int * iov_base; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,struct kvec*,int,size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct ncp_server *VAR_1, unsigned int VAR_2, const void * VAR_3, size_t VAR_4)
{
 if (VAR_1->info_sock) {
  struct kvec VAR_5[2];
  __be32 VAR_6[2];

  VAR_6[0] = FUNC_0(VAR_4 + 8);
  VAR_6[1] = FUNC_0(VAR_2);

  VAR_5[0].iov_base = VAR_6;
  VAR_5[0].iov_len = 8;
  VAR_5[1].iov_base = (void *) VAR_3;
  VAR_5[1].iov_len = VAR_4;

  FUNC_1(VAR_1->info_sock, VAR_5, 2, VAR_4 + 8, VAR_0);
 }
}
