
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {int (* lo_before_commit ) (struct gfs2_sbd*) ;} ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*) ;

__attribute__((used)) static inline void FUNC_1(struct gfs2_sbd *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
  if (VAR_0[VAR_2]->lo_before_commit)
   VAR_0[VAR_2]->lo_before_commit(VAR_1);
}
