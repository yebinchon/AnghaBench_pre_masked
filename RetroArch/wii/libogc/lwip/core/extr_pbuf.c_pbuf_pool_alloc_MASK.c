
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pbuf {struct pbuf* next; } ;
struct TYPE_3__ {scalar_t__ used; scalar_t__ max; int alloc_locked; } ;
struct TYPE_4__ {TYPE_1__ pbuf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 struct pbuf* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static struct pbuf *
FUNC_3(void)
{
  struct pbuf *VAR_5 = ((void*)0);

  FUNC_0(VAR_1);
  FUNC_1(VAR_1);




  if (VAR_4) {



    return ((void*)0);
  }
  VAR_3 = 1;
  if (!VAR_4) {

    VAR_5 = VAR_2;
    if (VAR_5) {
      VAR_2 = VAR_5->next;
    }





  }
  VAR_3 = 0;
  FUNC_2(VAR_1);
  return VAR_5;
}
