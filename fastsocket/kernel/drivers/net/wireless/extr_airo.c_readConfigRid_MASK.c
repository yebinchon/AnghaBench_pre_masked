
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
struct airo_info {TYPE_1__ config; } ;
typedef int cfg ;
typedef TYPE_1__ ConfigRid ;


 int FUNC_0 (struct airo_info*,int ,TYPE_1__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct airo_info *VAR_2, int VAR_3)
{
 int VAR_4;
 ConfigRid VAR_5;

 if (VAR_2->config.len)
  return VAR_1;

 VAR_4 = FUNC_0(VAR_2, VAR_0, &VAR_5, sizeof(VAR_5), VAR_3);
 if (VAR_4 != VAR_1)
  return VAR_4;

 VAR_2->config = VAR_5;
 return VAR_1;
}
