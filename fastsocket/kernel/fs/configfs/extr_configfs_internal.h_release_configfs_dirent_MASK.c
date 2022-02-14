
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_dirent {int s_type; int s_iattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct configfs_dirent*) ;

__attribute__((used)) static inline void FUNC_2(struct configfs_dirent * VAR_2)
{
 if (!(VAR_2->s_type & VAR_0)) {
  FUNC_0(VAR_2->s_iattr);
  FUNC_1(VAR_1, VAR_2);
 }
}
