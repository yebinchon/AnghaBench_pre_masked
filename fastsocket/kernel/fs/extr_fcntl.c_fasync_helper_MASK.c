
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct fasync_struct {int dummy; } ;


 int FUNC_0 (int,struct file*,struct fasync_struct**) ;
 int FUNC_1 (struct file*,struct fasync_struct**) ;

int FUNC_2(int VAR_0, struct file * VAR_1, int VAR_2, struct fasync_struct **VAR_3)
{
 if (!VAR_2)
  return FUNC_1(VAR_1, VAR_3);
 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
