
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tv_sec; } ;
struct iattr {int ia_valid; int ia_uid; int ia_gid; int ia_mode; TYPE_1__ ia_mtime; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(__be32 **VAR_9, struct iattr *VAR_10)
{
 __be32 *VAR_11 = *VAR_9;
 u32 VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;

 VAR_12 = 0;
 if (VAR_10->ia_valid & VAR_6) {
  VAR_12 |= VAR_2;
  VAR_13 = VAR_10->ia_mtime.tv_sec;
 }

 if (VAR_10->ia_valid & VAR_7) {
  VAR_12 |= VAR_3;
  VAR_14 = VAR_10->ia_uid;
 }

 if (VAR_10->ia_valid & VAR_4) {
  VAR_12 |= VAR_0;
  VAR_15 = VAR_10->ia_gid;
 }

 if (VAR_10->ia_valid & VAR_5) {
  VAR_12 |= VAR_1;
  VAR_16 = VAR_10->ia_mode & VAR_8;
 }

 *VAR_11++ = FUNC_0(VAR_12);
 *VAR_11++ = FUNC_0(VAR_13);
 *VAR_11++ = FUNC_0(VAR_14);
 *VAR_11++ = FUNC_0(VAR_15);
 *VAR_11++ = FUNC_0(VAR_16);
 *VAR_11++ = 0;
 *VAR_9 = VAR_11;
}
