
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nfs_page* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nfs_page*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static inline struct nfs_page *
FUNC_3(void)
{
 struct nfs_page *VAR_2;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2) {
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));
  FUNC_0(&VAR_2->wb_list);
 }
 return VAR_2;
}
