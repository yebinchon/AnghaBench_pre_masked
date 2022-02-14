
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_info {int dummy; } ;
struct Host {int HostLock; } ;


 scalar_t__ FUNC_0 (struct Host*,unsigned int) ;
 int FUNC_1 (struct rio_info*,struct Host*,unsigned int) ;
 int FUNC_2 (struct rio_info*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct rio_info *VAR_1, struct Host *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;
 FUNC_4(&VAR_2->HostLock, VAR_4);

 if (FUNC_0(VAR_2, VAR_3)) {
  FUNC_3(VAR_0, "Unit %d is NOT isolated\n", VAR_3);
  FUNC_5(&VAR_2->HostLock, VAR_4);
  return (0);
 }

 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_1);
 FUNC_5(&VAR_2->HostLock, VAR_4);
 return 1;
}
