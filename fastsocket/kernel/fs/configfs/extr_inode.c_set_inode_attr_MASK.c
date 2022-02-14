
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_mode; } ;
struct iattr {int ia_ctime; int ia_mtime; int ia_atime; int ia_gid; int ia_uid; int ia_mode; } ;



__attribute__((used)) static inline void FUNC_0(struct inode * VAR_0, struct iattr * VAR_1)
{
 VAR_0->i_mode = VAR_1->ia_mode;
 VAR_0->i_uid = VAR_1->ia_uid;
 VAR_0->i_gid = VAR_1->ia_gid;
 VAR_0->i_atime = VAR_1->ia_atime;
 VAR_0->i_mtime = VAR_1->ia_mtime;
 VAR_0->i_ctime = VAR_1->ia_ctime;
}
