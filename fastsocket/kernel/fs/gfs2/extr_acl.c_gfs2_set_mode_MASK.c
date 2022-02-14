
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_mode; } ;
struct iattr {scalar_t__ ia_mode; int ia_valid; } ;
typedef scalar_t__ mode_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct iattr*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, mode_t VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 != VAR_1->i_mode) {
  struct iattr VAR_4;

  VAR_4.ia_valid = VAR_0;
  VAR_4.ia_mode = VAR_2;

  VAR_3 = FUNC_0(VAR_1, &VAR_4);
 }

 return VAR_3;
}
