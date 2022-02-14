
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int fscache; int cachetag; } ;
struct TYPE_2__ {int primary_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct v9fs_session_info*,int ) ;
 int FUNC_1 (int ,int *,struct v9fs_session_info*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct v9fs_session_info*) ;

void FUNC_3(struct v9fs_session_info *VAR_3)
{

 if (!VAR_3->cachetag)
  FUNC_2(VAR_3);

 VAR_3->fscache = FUNC_1(VAR_1.primary_index,
      &VAR_2,
      VAR_3);
 FUNC_0(VAR_0, "session %p get cookie %p", VAR_3,
     VAR_3->fscache);
}
