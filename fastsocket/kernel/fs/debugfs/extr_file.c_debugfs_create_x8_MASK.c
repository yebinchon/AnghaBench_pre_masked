
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dentry {int dummy; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (char const*,int,struct dentry*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct dentry *FUNC_1(const char *VAR_5, mode_t VAR_6,
     struct dentry *VAR_7, u8 *VAR_8)
{

 if (!(VAR_6 & VAR_1))
  return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_3);

 if (!(VAR_6 & VAR_0))
  return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_4);

 return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_2);
}
