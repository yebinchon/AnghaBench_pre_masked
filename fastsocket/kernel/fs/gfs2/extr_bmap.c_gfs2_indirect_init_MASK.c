
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct metapath {TYPE_1__** mp_bh; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_glock {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
typedef int __be64 ;
struct TYPE_5__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (struct gfs2_glock*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (struct gfs2_glock*,TYPE_1__*) ;

__attribute__((used)) static inline __be64 *FUNC_6(struct metapath *VAR_2,
      struct gfs2_glock *VAR_3, unsigned int VAR_4,
      unsigned VAR_5, u64 VAR_6)
{
 __be64 *VAR_7 = (__be64 *)(VAR_2->mp_bh[VAR_4 - 1]->b_data +
         ((VAR_4 > 1) ? sizeof(struct gfs2_meta_header) :
     sizeof(struct gfs2_dinode)));
 FUNC_0(VAR_4 < 1);
 FUNC_0(VAR_2->mp_bh[VAR_4] != ((void*)0));
 VAR_2->mp_bh[VAR_4] = FUNC_3(VAR_3, VAR_6);
 FUNC_5(VAR_3, VAR_2->mp_bh[VAR_4]);
 FUNC_4(VAR_2->mp_bh[VAR_4], VAR_1, VAR_0);
 FUNC_2(VAR_2->mp_bh[VAR_4], sizeof(struct gfs2_meta_header));
 VAR_7 += VAR_5;
 *VAR_7 = FUNC_1(VAR_6);
 return VAR_7;
}
