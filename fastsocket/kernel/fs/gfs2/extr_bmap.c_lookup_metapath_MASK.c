
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct metapath {int * mp_bh; } ;
struct gfs2_inode {int i_height; } ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_inode*,unsigned int,int ,int *) ;
 int * FUNC_2 (unsigned int,struct metapath*) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_0, struct metapath *VAR_1)
{
 unsigned int VAR_2 = VAR_0->i_height - 1;
 unsigned int VAR_3;
 __be64 *VAR_4;
 u64 VAR_5;
 int VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_2(VAR_3, VAR_1);
  VAR_5 = FUNC_0(*VAR_4);
  if (!VAR_5)
   return VAR_3 + 1;

  VAR_6 = FUNC_1(VAR_0, VAR_3+1, VAR_5, &VAR_1->mp_bh[VAR_3+1]);
  if (VAR_6)
   return VAR_6;
 }

 return VAR_0->i_height;
}
