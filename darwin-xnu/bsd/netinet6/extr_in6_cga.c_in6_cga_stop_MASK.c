
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ iov_len; int * iov_base; } ;
struct TYPE_4__ {scalar_t__ iov_len; int * iov_base; } ;
struct TYPE_6__ {TYPE_2__ cga_pubkey; TYPE_1__ cga_privkey; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ) ;

int
FUNC_2(void)
{
 FUNC_1(VAR_0);

 if (VAR_2.cga_privkey.iov_base != ((void*)0)) {
  FUNC_0(VAR_2.cga_privkey.iov_base, VAR_1);
  VAR_2.cga_privkey.iov_base = ((void*)0);
  VAR_2.cga_privkey.iov_len = 0;
 }

 if (VAR_2.cga_pubkey.iov_base != ((void*)0)) {
  FUNC_0(VAR_2.cga_pubkey.iov_base, VAR_1);
  VAR_2.cga_pubkey.iov_base = ((void*)0);
  VAR_2.cga_pubkey.iov_len = 0;
 }

 return (0);
}
