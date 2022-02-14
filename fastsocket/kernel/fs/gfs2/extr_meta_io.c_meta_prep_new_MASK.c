
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_meta_header {int mh_magic; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_5(struct buffer_head *VAR_1)
{
 struct gfs2_meta_header *VAR_2 = (struct gfs2_meta_header *)VAR_1->b_data;

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);

 VAR_2->mh_magic = FUNC_1(VAR_0);
}
