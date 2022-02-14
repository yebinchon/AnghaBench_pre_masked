
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;
struct gfs2_inode {TYPE_1__ i_inode; } ;
struct file_ra_state {int dummy; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int VAR_2 ;
 void* FUNC_2 (struct page*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (char*,void*,unsigned int) ;
 int FUNC_6 (struct page*) ;
 struct page* FUNC_7 (struct address_space*,unsigned long,int ,int *) ;

int FUNC_8(struct gfs2_inode *VAR_3, struct file_ra_state *VAR_4,
                       char *VAR_5, loff_t *VAR_6, unsigned VAR_7)
{
 struct address_space *VAR_8 = VAR_3->i_inode.i_mapping;
 unsigned long VAR_9 = *VAR_6 / VAR_1;
 unsigned VAR_10 = *VAR_6 & (VAR_1 - 1);
 unsigned VAR_11 = 0;
 unsigned VAR_12;
 struct page *VAR_13;
 void *VAR_14;

 do {
  VAR_12 = VAR_7 - VAR_11;
  if (VAR_10 + VAR_7 > VAR_1)
   VAR_12 = VAR_1 - VAR_10;
  VAR_13 = FUNC_7(VAR_8, VAR_9, VAR_2, ((void*)0));
  if (FUNC_0(VAR_13))
   return FUNC_1(VAR_13);
  VAR_14 = FUNC_2(VAR_13, VAR_0);
  FUNC_5(VAR_5 + VAR_11, VAR_14 + VAR_10, VAR_12);
  FUNC_3(VAR_14, VAR_0);
  FUNC_4(VAR_13);
  FUNC_6(VAR_13);
  VAR_11 += VAR_12;
  VAR_9++;
  VAR_10 = 0;
 } while(VAR_11 < VAR_7);
 (*VAR_6) += VAR_7;
 return VAR_7;
}
