
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_ioc_s {int iocpf; TYPE_1__* bfa; } ;
struct TYPE_2__ {scalar_t__ bfad; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bfa_ioc_s*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc_s *VAR_4)
{
 struct bfad_s *VAR_5 = (struct bfad_s *)VAR_4->bfa->bfad;
 FUNC_1(&VAR_4->iocpf, VAR_1);
 FUNC_0(VAR_2, VAR_5, VAR_3, "IOC disabled\n");
 FUNC_2(VAR_4, VAR_0);
}
