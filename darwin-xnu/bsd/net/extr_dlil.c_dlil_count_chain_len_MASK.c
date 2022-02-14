
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct chain_len_stats {int cls_five_or_more; int cls_four; int cls_three; int cls_two; int cls_one; } ;
typedef TYPE_1__* mbuf_t ;
struct TYPE_3__ {struct TYPE_3__* m_next; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(mbuf_t VAR_0, struct chain_len_stats *VAR_1)
{
 mbuf_t VAR_2 = VAR_0;
 int VAR_3 = 0;

 while (VAR_2 != ((void*)0)) {
  VAR_3++;
  VAR_2 = VAR_2->m_next;
 }
 switch (VAR_3) {
  case 0:
   break;
  case 1:
   FUNC_0(&VAR_1->cls_one, 1);
   break;
  case 2:
   FUNC_0(&VAR_1->cls_two, 1);
   break;
  case 3:
   FUNC_0(&VAR_1->cls_three, 1);
   break;
  case 4:
   FUNC_0(&VAR_1->cls_four, 1);
   break;
  case 5:
  default:
   FUNC_0(&VAR_1->cls_five_or_more, 1);
   break;
 }
}
