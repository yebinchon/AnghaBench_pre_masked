
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
typedef TYPE_1__* pbuff_t ;
struct TYPE_7__ {TYPE_1__* transfer_buffer; } ;
struct TYPE_6__ {TYPE_2__* purb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct list_head*) ;
 TYPE_1__* FUNC_4 (struct list_head*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6 (struct list_head *VAR_2)
{
 struct list_head *VAR_3;
 struct list_head *VAR_4;
 pbuff_t VAR_5;

 FUNC_0("dabusb_free_queue");
 for (VAR_4 = VAR_2->next; VAR_4 != VAR_2;) {
  VAR_5 = FUNC_4 (VAR_4, VAR_1, VAR_0);




  FUNC_2(VAR_5->purb->transfer_buffer);
  FUNC_5(VAR_5->purb);
  VAR_3 = VAR_4->next;
  FUNC_3 (VAR_4);
  FUNC_2 (VAR_5);
  VAR_4 = VAR_3;
 }

 return 0;
}
