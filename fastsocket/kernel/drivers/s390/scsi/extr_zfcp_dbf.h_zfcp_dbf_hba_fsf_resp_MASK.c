
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {int dummy; } ;
struct zfcp_dbf {TYPE_1__* hba; } ;
struct TYPE_2__ {int level; } ;


 int FUNC_0 (char const*,int,struct zfcp_fsf_req*,struct zfcp_dbf*) ;

__attribute__((used)) static inline
void FUNC_1(const char *VAR_0, int VAR_1,
      struct zfcp_fsf_req *VAR_2, struct zfcp_dbf *VAR_3)
{
 if (VAR_1 <= VAR_3->hba->level)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
