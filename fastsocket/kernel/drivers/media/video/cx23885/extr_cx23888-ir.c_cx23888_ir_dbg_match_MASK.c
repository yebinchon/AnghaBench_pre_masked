
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dbg_match {scalar_t__ type; int addr; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct v4l2_dbg_match *VAR_1)
{
 return VAR_1->type == VAR_0 && VAR_1->addr == 2;
}
