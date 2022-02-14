
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_cam_entry {scalar_t__ open_count; int pdev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct pp_cam_entry *VAR_1 = VAR_0;
 if (--VAR_1->open_count == 0) {
  FUNC_0(VAR_1->pdev);
 }
 return 0;
}
