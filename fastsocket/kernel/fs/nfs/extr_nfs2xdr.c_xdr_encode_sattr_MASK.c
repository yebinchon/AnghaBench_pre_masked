
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int ia_valid; int ia_mtime; int ia_atime; int ia_size; int ia_gid; int ia_uid; int ia_mode; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int const FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static inline __be32 *
FUNC_4(__be32 *VAR_8, struct iattr *VAR_9)
{
 const __be32 VAR_10 = FUNC_0(0xFFFFFFFF);

 *VAR_8++ = (VAR_9->ia_valid & VAR_3) ? FUNC_1(VAR_9->ia_mode) : VAR_10;
 *VAR_8++ = (VAR_9->ia_valid & VAR_7) ? FUNC_1(VAR_9->ia_uid) : VAR_10;
 *VAR_8++ = (VAR_9->ia_valid & VAR_2) ? FUNC_1(VAR_9->ia_gid) : VAR_10;
 *VAR_8++ = (VAR_9->ia_valid & VAR_6) ? FUNC_1(VAR_9->ia_size) : VAR_10;

 if (VAR_9->ia_valid & VAR_1) {
  VAR_8 = FUNC_3(VAR_8, &VAR_9->ia_atime);
 } else if (VAR_9->ia_valid & VAR_0) {
  VAR_8 = FUNC_2(VAR_8, &VAR_9->ia_atime);
 } else {
  *VAR_8++ = VAR_10;
  *VAR_8++ = VAR_10;
 }

 if (VAR_9->ia_valid & VAR_5) {
  VAR_8 = FUNC_3(VAR_8, &VAR_9->ia_mtime);
 } else if (VAR_9->ia_valid & VAR_4) {
  VAR_8 = FUNC_2(VAR_8, &VAR_9->ia_mtime);
 } else {
  *VAR_8++ = VAR_10;
  *VAR_8++ = VAR_10;
 }
   return VAR_8;
}
