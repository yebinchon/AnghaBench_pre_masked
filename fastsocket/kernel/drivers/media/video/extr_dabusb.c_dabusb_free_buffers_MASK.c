
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pdabusb_t ;
struct TYPE_3__ {scalar_t__ got_mem; int lock; int rec_buff_list; int free_buff_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4 (pdabusb_t VAR_0)
{
 unsigned long VAR_1;
 FUNC_1("dabusb_free_buffers");

 FUNC_2(&VAR_0->lock, VAR_1);

 FUNC_0 (&VAR_0->free_buff_list);
 FUNC_0 (&VAR_0->rec_buff_list);

 FUNC_3(&VAR_0->lock, VAR_1);

 VAR_0->got_mem = 0;
 return 0;
}
