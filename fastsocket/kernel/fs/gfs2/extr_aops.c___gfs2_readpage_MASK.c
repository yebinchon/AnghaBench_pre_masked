
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct gfs2_sbd {int sd_flags; } ;
struct gfs2_inode {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct gfs2_inode*,struct page*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(void *VAR_3, struct page *VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_4->mapping->host);
 struct gfs2_sbd *VAR_6 = FUNC_1(VAR_4->mapping->host);
 int VAR_7;

 if (FUNC_2(VAR_5)) {
  VAR_7 = FUNC_4(VAR_5, VAR_4);
  FUNC_7(VAR_4);
 } else {
  VAR_7 = FUNC_3(VAR_4, VAR_2);
 }

 if (FUNC_6(FUNC_5(VAR_1, &VAR_6->sd_flags)))
  return -VAR_0;

 return VAR_7;
}
