
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_list; int lo_disk; int lo_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct loop_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct loop_device *VAR_0)
{
 FUNC_0(VAR_0->lo_queue);
 FUNC_3(VAR_0->lo_disk);
 FUNC_2(&VAR_0->lo_list);
 FUNC_1(VAR_0);
}
