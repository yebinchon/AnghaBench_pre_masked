
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct address_space {int host; } ;
typedef int sector_t ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct address_space*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_inode*) ;

__attribute__((used)) static sector_t FUNC_5(struct address_space *VAR_3, sector_t VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_3->host);
 struct gfs2_holder VAR_6;
 sector_t VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5->i_gl, VAR_1, VAR_0, &VAR_6);
 if (VAR_8)
  return 0;

 if (!FUNC_4(VAR_5))
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_2);

 FUNC_2(&VAR_6);

 return VAR_7;
}
