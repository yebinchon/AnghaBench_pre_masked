
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_fh {TYPE_1__* fh_export; int fh_dentry; } ;
struct TYPE_2__ {int h; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct svc_fh*) ;

__attribute__((used)) static inline void
FUNC_3(struct svc_fh *VAR_0, struct svc_fh *VAR_1)
{
 FUNC_2(VAR_0);
 FUNC_1(VAR_1->fh_dentry);
 if (VAR_1->fh_export)
  FUNC_0(&VAR_1->fh_export->h);
 *VAR_0 = *VAR_1;
}
