
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int bs_persist_segment; scalar_t__ bs_persist_busnum; } ;
struct pcibus_info {TYPE_1__ pbi_buscommon; } ;
struct ia64_sal_retval {scalar_t__ v0; scalar_t__ status; } ;


 int FUNC_0 (struct ia64_sal_retval,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pcibus_info *VAR_1)
{
 struct ia64_sal_retval VAR_2;
 u64 VAR_3;
 int VAR_4;
 VAR_2.status = 0;
 VAR_2.v0 = 0;

 VAR_4 = VAR_1->pbi_buscommon.bs_persist_segment;
 VAR_3 = VAR_1->pbi_buscommon.bs_persist_busnum;
 FUNC_0(VAR_2,
   (u64) VAR_0,
   (u64) VAR_4, (u64) VAR_3, 0, 0, 0, 0, 0);

 return (int)VAR_2.v0;
}
