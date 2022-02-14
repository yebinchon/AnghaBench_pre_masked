
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct inode {scalar_t__ i_size; int i_mapping; } ;


 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

void FUNC_5(struct inode *VAR_2)
{
 FUNC_2("jfs_truncate: size = 0x%lx", (ulong) VAR_2->i_size);

 FUNC_4(VAR_2->i_mapping, VAR_2->i_size, VAR_1);

 FUNC_0(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_2->i_size);
 FUNC_1(VAR_2);
}
