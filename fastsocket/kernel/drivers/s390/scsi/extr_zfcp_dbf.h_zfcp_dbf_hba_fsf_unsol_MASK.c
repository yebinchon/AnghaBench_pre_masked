
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_dbf {TYPE_1__* hba; } ;
struct fsf_status_read_buffer {int dummy; } ;
struct TYPE_2__ {int level; } ;


 int FUNC_0 (char const*,int,struct zfcp_dbf*,struct fsf_status_read_buffer*) ;

__attribute__((used)) static inline
void FUNC_1(const char *VAR_0, struct zfcp_dbf *VAR_1,
       struct fsf_status_read_buffer *VAR_2)
{
 int VAR_3 = 2;

 if (VAR_3 <= VAR_1->hba->level)
  FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
}
