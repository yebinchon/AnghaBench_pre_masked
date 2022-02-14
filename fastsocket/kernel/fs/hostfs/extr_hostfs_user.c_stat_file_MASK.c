
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct stat64 {unsigned long long st_ino; int st_mode; int st_nlink; int st_uid; int st_gid; unsigned long long st_size; int st_blksize; unsigned long long st_blocks; int st_ctime; int st_mtime; int st_atime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct stat64*) ;
 scalar_t__ FUNC_1 (char const*,struct stat64*) ;

int FUNC_2(const char *VAR_1, unsigned long long *VAR_2, int *VAR_3,
       int *VAR_4, int *VAR_5, int *VAR_6,
       unsigned long long *VAR_7, struct timespec *VAR_8,
       struct timespec *VAR_9, struct timespec *VAR_10,
       int *VAR_11, unsigned long long *VAR_12, int VAR_13)
{
 struct stat64 VAR_14;

 if (VAR_13 >= 0) {
  if (FUNC_0(VAR_13, &VAR_14) < 0)
   return -VAR_0;
 } else if (FUNC_1(VAR_1, &VAR_14) < 0) {
  return -VAR_0;
 }

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_14.st_ino;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_14.st_mode;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_14.st_nlink;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_14.st_uid;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_14.st_gid;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_14.st_size;
 if (VAR_8 != ((void*)0)) {
  VAR_8->tv_sec = VAR_14.st_atime;
  VAR_8->tv_nsec = 0;
 }
 if (VAR_9 != ((void*)0)) {
  VAR_9->tv_sec = VAR_14.st_mtime;
  VAR_9->tv_nsec = 0;
 }
 if (VAR_10 != ((void*)0)) {
  VAR_10->tv_sec = VAR_14.st_ctime;
  VAR_10->tv_nsec = 0;
 }
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_14.st_blksize;
 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_14.st_blocks;
 return 0;
}
