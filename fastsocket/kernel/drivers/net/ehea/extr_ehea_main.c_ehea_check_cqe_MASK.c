
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_cqe {int type; int status; scalar_t__ header_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct ehea_cqe *VAR_4, int *VAR_5)
{
 *VAR_5 = (VAR_4->type & VAR_2) >> 5;
 if ((VAR_4->status & VAR_0) == 0)
  return 0;
 if (((VAR_4->status & VAR_1) != 0) &&
     (VAR_4->header_length == 0))
  return 0;
 return -VAR_3;
}
