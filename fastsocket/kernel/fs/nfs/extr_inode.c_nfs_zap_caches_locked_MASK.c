
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int cache_validity; int attrtimeo_timestamp; int attrtimeo; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_7)
{
 struct nfs_inode *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = VAR_7->i_mode;

 FUNC_8(VAR_7, VAR_0);

 VAR_8->attrtimeo = FUNC_2(VAR_7);
 VAR_8->attrtimeo_timestamp = VAR_6;

 FUNC_6(FUNC_0(VAR_7), 0, sizeof(FUNC_0(VAR_7)));
 if (FUNC_5(VAR_9) || FUNC_3(VAR_9) || FUNC_4(VAR_9)) {
  VAR_8->cache_validity |= VAR_3|VAR_4|VAR_1|VAR_2|VAR_5;
  FUNC_7(VAR_7);
 } else {
  VAR_8->cache_validity |= VAR_3|VAR_1|VAR_2|VAR_5;
 }
}
