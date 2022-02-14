
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs64 {long f_bsize; long long f_blocks; long long f_bfree; long long f_bavail; long long f_files; long long f_ffree; long f_namelen; long* f_spare; int f_fsid; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int *,int) ;
 int FUNC_1 (char*,struct statfs64*) ;

int FUNC_2(char *VAR_1, long *VAR_2, long long *VAR_3,
       long long *VAR_4, long long *VAR_5,
       long long *VAR_6, long long *VAR_7,
       void *VAR_8, int VAR_9, long *VAR_10,
       long *VAR_11)
{
 struct statfs64 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_1, &VAR_12);
 if (VAR_13 < 0)
  return -VAR_0;

 *VAR_2 = VAR_12.f_bsize;
 *VAR_3 = VAR_12.f_blocks;
 *VAR_4 = VAR_12.f_bfree;
 *VAR_5 = VAR_12.f_bavail;
 *VAR_6 = VAR_12.f_files;
 *VAR_7 = VAR_12.f_ffree;
 FUNC_0(VAR_8, &VAR_12.f_fsid,
        sizeof(VAR_12.f_fsid) > VAR_9 ? VAR_9 :
        sizeof(VAR_12.f_fsid));
 *VAR_10 = VAR_12.f_namelen;
 VAR_11[0] = VAR_12.f_spare[0];
 VAR_11[1] = VAR_12.f_spare[1];
 VAR_11[2] = VAR_12.f_spare[2];
 VAR_11[3] = VAR_12.f_spare[3];
 VAR_11[4] = VAR_12.f_spare[4];
 return 0;
}
