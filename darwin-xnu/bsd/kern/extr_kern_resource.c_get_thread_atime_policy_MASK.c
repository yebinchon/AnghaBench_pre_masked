
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {int uu_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int
FUNC_0(struct uthread *VAR_3)
{
 return (VAR_3->uu_flag & VAR_2)? VAR_1: VAR_0;
}
