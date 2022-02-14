
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int tid; int class_version; int mgmt_class; int base_version; } ;
struct ib_sa_mad {TYPE_1__ mad_hdr; } ;
struct ib_mad_agent {scalar_t__ hi_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_sa_mad*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct ib_sa_mad *VAR_5, struct ib_mad_agent *VAR_6)
{
 unsigned long VAR_7;

 FUNC_1(VAR_5, 0, sizeof *VAR_5);

 VAR_5->mad_hdr.base_version = VAR_0;
 VAR_5->mad_hdr.mgmt_class = VAR_1;
 VAR_5->mad_hdr.class_version = VAR_2;

 FUNC_2(&VAR_4, VAR_7);
 VAR_5->mad_hdr.tid =
  FUNC_0(((u64) VAR_6->hi_tid) << 32 | VAR_3++);
 FUNC_3(&VAR_4, VAR_7);
}
