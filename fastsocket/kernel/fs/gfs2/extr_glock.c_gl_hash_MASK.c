
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lm_lockname {struct gfs2_sbd const* ln_type; struct gfs2_sbd const* ln_number; } ;
struct gfs2_sbd {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct gfs2_sbd const**,int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct gfs2_sbd *VAR_1,
       const struct lm_lockname *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->ln_number, sizeof(u64), 0);
 VAR_3 = FUNC_0(&VAR_2->ln_type, sizeof(unsigned int), VAR_3);
 VAR_3 = FUNC_0(&VAR_1, sizeof(struct gfs2_sbd *), VAR_3);
 VAR_3 &= VAR_0;

 return VAR_3;
}
