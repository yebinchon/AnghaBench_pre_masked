
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vuid_t ;
typedef void* vgid_t ;
typedef void* time_t ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_4__ {void* tv_nsec; void* tv_sec; } ;
struct iattr {int ia_mode; unsigned int ia_valid; TYPE_3__ ia_ctime; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; scalar_t__ ia_size; scalar_t__ ia_gid; scalar_t__ ia_uid; } ;
struct coda_vattr {int va_mode; int va_fileid; int va_gen; int va_bytes; int va_nlink; int va_blocksize; int va_rdev; TYPE_3__ va_ctime; TYPE_2__ va_mtime; TYPE_1__ va_atime; scalar_t__ va_size; void* va_gid; void* va_uid; void* va_type; scalar_t__ va_flags; } ;
typedef scalar_t__ off_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_11 ;

void FUNC_3(struct iattr *VAR_12, struct coda_vattr *VAR_13)
{
        unsigned int VAR_14;


 VAR_13->va_mode = -1;
        VAR_13->va_uid = (vuid_t) -1;
        VAR_13->va_gid = (vgid_t) -1;
        VAR_13->va_size = (off_t) -1;
 VAR_13->va_atime.tv_sec = (time_t) -1;
 VAR_13->va_atime.tv_nsec = (time_t) -1;
        VAR_13->va_mtime.tv_sec = (time_t) -1;
        VAR_13->va_mtime.tv_nsec = (time_t) -1;
 VAR_13->va_ctime.tv_sec = (time_t) -1;
 VAR_13->va_ctime.tv_nsec = (time_t) -1;
        VAR_13->va_type = VAR_9;
 VAR_13->va_fileid = -1;
 VAR_13->va_gen = -1;
 VAR_13->va_bytes = -1;
 VAR_13->va_nlink = -1;
 VAR_13->va_blocksize = -1;
 VAR_13->va_rdev = -1;
        VAR_13->va_flags = 0;
        VAR_14 = VAR_12->ia_valid;
        if ( VAR_14 & VAR_3 ) {
                VAR_13->va_mode = VAR_12->ia_mode;
 }
        if ( VAR_14 & VAR_6 ) {
                VAR_13->va_uid = (vuid_t) VAR_12->ia_uid;
 }
        if ( VAR_14 & VAR_2 ) {
                VAR_13->va_gid = (vgid_t) VAR_12->ia_gid;
 }
        if ( VAR_14 & VAR_5 ) {
                VAR_13->va_size = VAR_12->ia_size;
 }
        if ( VAR_14 & VAR_0 ) {
                VAR_13->va_atime = VAR_12->ia_atime;
 }
        if ( VAR_14 & VAR_4 ) {
                VAR_13->va_mtime = VAR_12->ia_mtime;
 }
        if ( VAR_14 & VAR_1 ) {
                VAR_13->va_ctime = VAR_12->ia_ctime;
 }
}
