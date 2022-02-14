
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* vm_page_t ;
typedef int boolean_t ;
struct TYPE_13__ {scalar_t__ next; scalar_t__ prev; } ;
struct TYPE_12__ {scalar_t__ next; scalar_t__ prev; } ;
struct TYPE_11__ {scalar_t__ next; scalar_t__ prev; } ;
struct TYPE_14__ {scalar_t__ vmp_next_m; int vmp_lopage; TYPE_3__ vmp_backgroundq; TYPE_2__ vmp_listq; TYPE_1__ vmp_pageq; int vmp_fictitious; scalar_t__ vmp_private; scalar_t__ vmp_tabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;

void
FUNC_6(
 vm_page_t VAR_3,
 boolean_t VAR_4)
{
 if (VAR_3->vmp_tabled)
  FUNC_5(VAR_3, VAR_4);

 FUNC_0(VAR_3);

 if (VAR_3->vmp_private) {
  VAR_3->vmp_private = VAR_0;
  VAR_3->vmp_fictitious = VAR_1;
  FUNC_2(VAR_3, VAR_2);
 }
 if ( !VAR_3->vmp_fictitious) {
  FUNC_3(VAR_3->vmp_pageq.next == 0);
  FUNC_3(VAR_3->vmp_pageq.prev == 0);
  FUNC_3(VAR_3->vmp_listq.next == 0);
  FUNC_3(VAR_3->vmp_listq.prev == 0);




  FUNC_3(VAR_3->vmp_next_m == 0);
  FUNC_4(VAR_3, FUNC_1(VAR_3), VAR_3->vmp_lopage);
 }
}
