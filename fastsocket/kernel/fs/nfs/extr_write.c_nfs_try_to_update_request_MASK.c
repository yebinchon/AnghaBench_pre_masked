
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {unsigned int wb_offset; unsigned int wb_bytes; unsigned int wb_pgbase; } ;
struct inode {int i_lock; } ;


 struct nfs_page* FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct nfs_page*) ;
 scalar_t__ FUNC_3 (struct nfs_page*) ;
 struct nfs_page* FUNC_4 (struct page*) ;
 int FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (struct nfs_page*) ;
 int FUNC_7 (struct inode*,struct page*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct nfs_page *FUNC_10(struct inode *VAR_0,
  struct page *VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3)
{
 struct nfs_page *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_1))
  return ((void*)0);

 VAR_6 = VAR_2 + VAR_3;
 FUNC_8(&VAR_0->i_lock);

 for (;;) {
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4 == ((void*)0))
   goto out_unlock;

  VAR_5 = VAR_4->wb_offset + VAR_4->wb_bytes;






  if (VAR_2 > VAR_5
      || VAR_6 < VAR_4->wb_offset)
   goto out_flushme;

  if (FUNC_3(VAR_4))
   break;


  FUNC_9(&VAR_0->i_lock);
  VAR_7 = FUNC_6(VAR_4);
  FUNC_5(VAR_4);
  if (VAR_7 != 0)
   goto out_err;
  FUNC_8(&VAR_0->i_lock);
 }


 if (VAR_2 < VAR_4->wb_offset) {
  VAR_4->wb_offset = VAR_2;
  VAR_4->wb_pgbase = VAR_2;
 }
 if (VAR_6 > VAR_5)
  VAR_4->wb_bytes = VAR_6 - VAR_4->wb_offset;
 else
  VAR_4->wb_bytes = VAR_5 - VAR_4->wb_offset;
out_unlock:
 FUNC_9(&VAR_0->i_lock);
 if (VAR_4)
  FUNC_2(VAR_4);
 return VAR_4;
out_flushme:
 FUNC_9(&VAR_0->i_lock);
 FUNC_5(VAR_4);
 VAR_7 = FUNC_7(VAR_0, VAR_1);
out_err:
 return FUNC_0(VAR_7);
}
