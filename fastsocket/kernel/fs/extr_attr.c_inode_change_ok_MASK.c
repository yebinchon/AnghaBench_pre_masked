
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_uid; scalar_t__ i_gid; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_uid; scalar_t__ ia_gid; int ia_mode; int ia_size; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inode const*,int ) ;
 int FUNC_4 (struct inode const*) ;

int FUNC_5(const struct inode *VAR_12, struct iattr *VAR_13)
{
 unsigned int VAR_14 = VAR_13->ia_valid;





 if (VAR_14 & VAR_5) {
  int VAR_15 = FUNC_3(VAR_12, VAR_13->ia_size);
  if (VAR_15)
   return VAR_15;
 }


 if (VAR_14 & VAR_1)
  return 0;


 if ((VAR_14 & VAR_7) &&
     (FUNC_1() != VAR_12->i_uid ||
      VAR_13->ia_uid != VAR_12->i_uid) && !FUNC_0(VAR_8))
  return -VAR_10;


 if ((VAR_14 & VAR_2) &&
     (FUNC_1() != VAR_12->i_uid ||
     (!FUNC_2(VAR_13->ia_gid) && VAR_13->ia_gid != VAR_12->i_gid)) &&
     !FUNC_0(VAR_8))
  return -VAR_10;


 if (VAR_14 & VAR_3) {
  if (!FUNC_4(VAR_12))
   return -VAR_10;

  if (!FUNC_2((VAR_14 & VAR_2) ? VAR_13->ia_gid :
    VAR_12->i_gid) && !FUNC_0(VAR_9))
   VAR_13->ia_mode &= ~VAR_11;
 }


 if (VAR_14 & (VAR_4 | VAR_0 | VAR_6)) {
  if (!FUNC_4(VAR_12))
   return -VAR_10;
 }

 return 0;
}
