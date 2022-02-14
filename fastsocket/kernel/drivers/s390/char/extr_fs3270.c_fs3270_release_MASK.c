
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_view {int dummy; } ;
struct fs3270 {scalar_t__ fs_pid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct raw3270_view *VAR_1)
{
 struct fs3270 *VAR_2;

 VAR_2 = (struct fs3270 *) VAR_1;
 if (VAR_2->fs_pid)
  FUNC_0(VAR_2->fs_pid, VAR_0, 1);
}
