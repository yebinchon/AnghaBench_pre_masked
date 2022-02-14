
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
typedef TYPE_1__ srm_env_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_1, char **VAR_2, off_t VAR_3, int VAR_4, int *VAR_5,
  void *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 srm_env_t *VAR_9;

 if (VAR_3 != 0) {
  *VAR_5 = 1;
  return 0;
 }

 VAR_9 = (srm_env_t *) VAR_6;
 VAR_8 = FUNC_0(VAR_9->id, VAR_1, VAR_4);

 if ((VAR_8 >> 61) == 0) {
  VAR_7 = (int) VAR_8;
  *VAR_5 = 1;
 } else
  VAR_7 = -VAR_0;

 return VAR_7;
}
