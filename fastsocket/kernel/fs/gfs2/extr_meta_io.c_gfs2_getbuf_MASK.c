
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct page {int dummy; } ;
struct TYPE_2__ {unsigned int sb_bsize_shift; int sb_bsize; } ;
struct gfs2_sbd {int sd_vfs; TYPE_1__ sd_sb; } ;
struct gfs2_glock {struct gfs2_sbd* gl_sbd; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct page*,int ,int ) ;
 struct page* FUNC_2 (struct address_space*,unsigned long) ;
 int FUNC_3 (struct buffer_head*) ;
 struct address_space* FUNC_4 (struct gfs2_glock*) ;
 struct page* FUNC_5 (struct address_space*,unsigned long) ;
 int FUNC_6 (struct buffer_head*,int ,unsigned int) ;
 int FUNC_7 (struct page*) ;
 struct buffer_head* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 () ;

struct buffer_head *FUNC_13(struct gfs2_glock *VAR_1, u64 VAR_2, int VAR_3)
{
 struct address_space *VAR_4 = FUNC_4(VAR_1);
 struct gfs2_sbd *VAR_5 = VAR_1->gl_sbd;
 struct page *VAR_6;
 struct buffer_head *VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;

 VAR_8 = VAR_0 - VAR_5->sd_sb.sb_bsize_shift;
 VAR_9 = VAR_2 >> VAR_8;
 VAR_10 = VAR_2 - (VAR_9 << VAR_8);

 if (VAR_3) {
  for (;;) {
   VAR_6 = FUNC_5(VAR_4, VAR_9);
   if (VAR_6)
    break;
   FUNC_12();
  }
 } else {
  VAR_6 = FUNC_2(VAR_4, VAR_9);
  if (!VAR_6)
   return ((void*)0);
 }

 if (!FUNC_10(VAR_6))
  FUNC_1(VAR_6, VAR_5->sd_sb.sb_bsize, 0);


 for (VAR_7 = FUNC_8(VAR_6); VAR_10--; VAR_7 = VAR_7->b_this_page)
                  ;
 FUNC_3(VAR_7);

 if (!FUNC_0(VAR_7))
  FUNC_6(VAR_7, VAR_5->sd_vfs, VAR_2);

 FUNC_11(VAR_6);
 FUNC_7(VAR_6);
 FUNC_9(VAR_6);

 return VAR_7;
}
