
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_ea_header {int ea_flags; void* ea_rec_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_ea_header*) ;
 int FUNC_1 (struct gfs2_ea_header*) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static struct gfs2_ea_header *FUNC_3(struct gfs2_ea_header *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1);
 struct gfs2_ea_header *VAR_3 = (struct gfs2_ea_header *)((char *)VAR_1 +
         VAR_2);
 u32 VAR_4 = FUNC_0(VAR_1) - VAR_2;
 int VAR_5 = VAR_1->ea_flags & VAR_0;

 VAR_1->ea_rec_len = FUNC_2(VAR_2);
 VAR_1->ea_flags ^= VAR_5;

 VAR_3->ea_rec_len = FUNC_2(VAR_4);
 VAR_3->ea_flags = VAR_5;

 return VAR_3;
}
