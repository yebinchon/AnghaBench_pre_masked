
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline int FUNC_0(struct file_lock *VAR_7, int VAR_8)
{
 if ((VAR_7->fl_type & (VAR_0|VAR_2|VAR_1)) == VAR_0)
  return VAR_8 ? VAR_3 : VAR_4;
 return VAR_8 ? VAR_5 : VAR_6;
}
