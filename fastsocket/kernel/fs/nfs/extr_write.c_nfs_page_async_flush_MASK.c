
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_pageio_descriptor {int pg_error; } ;
struct nfs_page {int wb_flags; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nfs_page*) ;
 int VAR_0 ;
 int FUNC_2 (struct nfs_page*) ;
 struct nfs_page* FUNC_3 (struct page*,int) ;
 int FUNC_4 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct nfs_pageio_descriptor *VAR_1,
    struct page *VAR_2, bool VAR_3)
{
 struct nfs_page *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_4)
  goto out;
 VAR_5 = FUNC_2(VAR_4);
 if (FUNC_1(VAR_4))
  goto out;

 VAR_5 = FUNC_6(VAR_2);
 FUNC_0(VAR_5 != 0);
 FUNC_0(FUNC_7(VAR_0, &VAR_4->wb_flags));

 if (!FUNC_4(VAR_1, VAR_4)) {
  FUNC_5(VAR_4);
  VAR_5 = VAR_1->pg_error;
 }
out:
 return VAR_5;
}
