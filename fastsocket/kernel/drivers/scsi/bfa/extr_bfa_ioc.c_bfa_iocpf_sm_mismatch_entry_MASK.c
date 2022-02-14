
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf_s {scalar_t__ fw_mismatch_notified; int ioc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_iocpf_s *VAR_2)
{



 if (VAR_2->fw_mismatch_notified == VAR_0)
  FUNC_0(VAR_2->ioc);

 VAR_2->fw_mismatch_notified = VAR_1;
 FUNC_1(VAR_2->ioc);
}
