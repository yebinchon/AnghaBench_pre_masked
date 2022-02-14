
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct metapath {int * mp_list; } ;
struct gfs2_sbd {int sd_inptrs; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct gfs2_sbd *VAR_0, u64 VAR_1,
     struct metapath *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = VAR_3; VAR_4--;)
  VAR_2->mp_list[VAR_4] = FUNC_0(VAR_1, VAR_0->sd_inptrs);

}
