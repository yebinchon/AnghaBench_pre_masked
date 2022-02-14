
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dbg_match {int type; int addr; } ;




int FUNC_0(const struct v4l2_dbg_match *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
  return VAR_0->addr == 0;
 default:
  return 0;
 }
}
