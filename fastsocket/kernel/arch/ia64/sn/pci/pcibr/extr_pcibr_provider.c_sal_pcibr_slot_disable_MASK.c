
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int bs_persist_busnum; int bs_persist_segment; } ;
struct pcibus_info {TYPE_1__ pbi_buscommon; } ;
struct ia64_sal_retval {scalar_t__ v0; scalar_t__ status; } ;


 int FUNC_0 (struct ia64_sal_retval,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_1(struct pcibus_info *VAR_1, int VAR_2, int VAR_3,
         void *VAR_4)
{
 struct ia64_sal_retval VAR_5;
 u64 VAR_6;
 u64 VAR_7;

 VAR_5.status = 0;
 VAR_5.v0 = 0;

 VAR_7 = VAR_1->pbi_buscommon.bs_persist_segment;
 VAR_6 = VAR_1->pbi_buscommon.bs_persist_busnum;
 FUNC_0(VAR_5, (u64) VAR_0,
   VAR_7, VAR_6, (u64) VAR_2, (u64) VAR_3,
   (u64) VAR_4, 0, 0);

 return (int)VAR_5.v0;
}
