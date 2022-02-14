
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ip_addr; int id; } ;
typedef TYPE_1__ FDFSStorageBrief ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool FUNC_2(const FDFSStorageBrief *VAR_2)
{
 if (VAR_1)
 {
  return FUNC_1(VAR_2->id, VAR_0) == 0;
 }
 else
 {
  return FUNC_0(VAR_2->ip_addr);
 }
}
