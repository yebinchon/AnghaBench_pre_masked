
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* pdabusb_t ;
struct TYPE_5__ {scalar_t__ counter; } ;
struct TYPE_6__ {TYPE_1__ pending_io; int rec_buff_list; int state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2 (pdabusb_t VAR_1)
{
 FUNC_1("dabusb_stop");

 VAR_1->state = VAR_0;
 FUNC_0 (VAR_1, &VAR_1->rec_buff_list);

 FUNC_1("pending_io: %d", VAR_1->pending_io.counter);

 VAR_1->pending_io.counter = 0;
 return 0;
}
