
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int ia_valid; int ia_mode; int ia_uid; int ia_gid; int ia_mtime; int ia_atime; scalar_t__ ia_size; } ;
typedef int __u64 ;
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
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int *) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static inline __be32 *
FUNC_3(__be32 *VAR_12, struct iattr *VAR_13)
{
 if (VAR_13->ia_valid & VAR_3) {
  *VAR_12++ = VAR_9;
  *VAR_12++ = FUNC_0(VAR_13->ia_mode & VAR_8);
 } else {
  *VAR_12++ = VAR_11;
 }
 if (VAR_13->ia_valid & VAR_7) {
  *VAR_12++ = VAR_9;
  *VAR_12++ = FUNC_0(VAR_13->ia_uid);
 } else {
  *VAR_12++ = VAR_11;
 }
 if (VAR_13->ia_valid & VAR_2) {
  *VAR_12++ = VAR_9;
  *VAR_12++ = FUNC_0(VAR_13->ia_gid);
 } else {
  *VAR_12++ = VAR_11;
 }
 if (VAR_13->ia_valid & VAR_6) {
  *VAR_12++ = VAR_9;
  VAR_12 = FUNC_1(VAR_12, (__u64) VAR_13->ia_size);
 } else {
  *VAR_12++ = VAR_11;
 }
 if (VAR_13->ia_valid & VAR_1) {
  *VAR_12++ = VAR_10;
  VAR_12 = FUNC_2(VAR_12, &VAR_13->ia_atime);
 } else if (VAR_13->ia_valid & VAR_0) {
  *VAR_12++ = VAR_9;
 } else {
  *VAR_12++ = VAR_11;
 }
 if (VAR_13->ia_valid & VAR_5) {
  *VAR_12++ = VAR_10;
  VAR_12 = FUNC_2(VAR_12, &VAR_13->ia_mtime);
 } else if (VAR_13->ia_valid & VAR_4) {
  *VAR_12++ = VAR_9;
 } else {
  *VAR_12++ = VAR_11;
 }
 return VAR_12;
}
