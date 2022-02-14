
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_meta_header {int mh_magic; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,struct buffer_head*,char*,char const*,char*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct gfs2_sbd *VAR_1,
        struct buffer_head *VAR_2,
        const char *VAR_3,
        char *VAR_4, unsigned int VAR_5)
{
 struct gfs2_meta_header *VAR_6 = (struct gfs2_meta_header *)VAR_2->b_data;
 u32 VAR_7 = FUNC_0(VAR_6->mh_magic);
 if (FUNC_2(VAR_7 != VAR_0))
  return FUNC_1(VAR_1, VAR_2, "magic number", VAR_3,
       VAR_4, VAR_5);
 return 0;
}
