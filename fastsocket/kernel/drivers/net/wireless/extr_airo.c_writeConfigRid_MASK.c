
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opmode; } ;
struct airo_info {int flags; TYPE_1__ config; } ;
typedef int cfgr ;
typedef TYPE_1__ ConfigRid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct airo_info*,int ,TYPE_1__*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct airo_info*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct airo_info *VAR_7, int VAR_8)
{
 ConfigRid VAR_9;

 if (!FUNC_4 (VAR_1, &VAR_7->flags))
  return VAR_6;

 FUNC_2 (VAR_1, &VAR_7->flags);
 FUNC_2 (VAR_2, &VAR_7->flags);
 FUNC_1(VAR_7);
 VAR_9 = VAR_7->config;

 if ((VAR_9.opmode & VAR_3) == VAR_4)
  FUNC_3(VAR_0, &VAR_7->flags);
 else
  FUNC_2(VAR_0, &VAR_7->flags);

 return FUNC_0( VAR_7, VAR_5, &VAR_9, sizeof(VAR_9), VAR_8);
}
