
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int queue; int * complete_routine; scalar_t__ no_waiter; } ;


 int FUNC_0 (struct hpsb_packet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct hpsb_packet *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->no_waiter) {
  FUNC_0(VAR_3);
  return;
 }
 if (VAR_3->complete_routine != ((void*)0)) {
  FUNC_2(&VAR_2, VAR_4);
  FUNC_1(&VAR_3->queue, &VAR_0);
  FUNC_3(&VAR_2, VAR_4);
  FUNC_4(VAR_1);
 }
 return;
}
