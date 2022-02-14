
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_2)
{
 VAR_2->i_mtime = VAR_2->i_ctime = VAR_0;

}
