
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {scalar_t__ lock; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(struct ncp_server *VAR_0)
{
 if (VAR_0->lock == 0) {
  FUNC_0("ncpfs: server not locked!\n");
 }
}
