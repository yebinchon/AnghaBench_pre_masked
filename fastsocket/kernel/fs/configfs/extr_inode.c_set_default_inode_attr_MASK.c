
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; int i_atime; int i_mode; } ;
typedef int mode_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct inode * VAR_1, mode_t VAR_2)
{
 VAR_1->i_mode = VAR_2;
 VAR_1->i_atime = VAR_1->i_mtime = VAR_1->i_ctime = VAR_0;
}
