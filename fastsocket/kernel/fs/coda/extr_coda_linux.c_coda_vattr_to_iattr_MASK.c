
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u_short ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_5__ {int tv_sec; } ;
struct TYPE_4__ {int tv_sec; } ;
struct inode {int i_mode; int i_nlink; int i_size; int i_blocks; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; scalar_t__ i_gid; scalar_t__ i_uid; } ;
struct coda_vattr {int va_type; int va_mode; int va_uid; int va_gid; int va_nlink; int va_size; TYPE_3__ va_ctime; TYPE_2__ va_mtime; TYPE_1__ va_atime; } ;
typedef scalar_t__ gid_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct inode *VAR_3, struct coda_vattr *VAR_4)
{
        int VAR_5;



        switch (VAR_4->va_type) {
        case 129:
                VAR_5 = 0;
                break;
        case 128:
                VAR_5 = VAR_2;
                break;
        case 131:
                VAR_5 = VAR_0;
                break;
        case 130:
                VAR_5 = VAR_1;
                break;
        default:
                VAR_5 = 0;
        }
 VAR_3->i_mode |= VAR_5;

 if (VAR_4->va_mode != (u_short) -1)
         VAR_3->i_mode = VAR_4->va_mode | VAR_5;
        if (VAR_4->va_uid != -1)
         VAR_3->i_uid = (uid_t) VAR_4->va_uid;
        if (VAR_4->va_gid != -1)
         VAR_3->i_gid = (gid_t) VAR_4->va_gid;
 if (VAR_4->va_nlink != -1)
         VAR_3->i_nlink = VAR_4->va_nlink;
 if (VAR_4->va_size != -1)
         VAR_3->i_size = VAR_4->va_size;
 if (VAR_4->va_size != -1)
  VAR_3->i_blocks = (VAR_4->va_size + 511) >> 9;
 if (VAR_4->va_atime.tv_sec != -1)
         VAR_3->i_atime = VAR_4->va_atime;
 if (VAR_4->va_mtime.tv_sec != -1)
         VAR_3->i_mtime = VAR_4->va_mtime;
        if (VAR_4->va_ctime.tv_sec != -1)
         VAR_3->i_ctime = VAR_4->va_ctime;
}
