
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_1__ FDFSStorageBrief ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_3(const FDFSStorageBrief *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_2->id, VAR_1) == 0)
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == 0)
 {
  if (VAR_0)
  {
   VAR_3 = FUNC_2(VAR_2);
  }
 }

 return VAR_3;
}
