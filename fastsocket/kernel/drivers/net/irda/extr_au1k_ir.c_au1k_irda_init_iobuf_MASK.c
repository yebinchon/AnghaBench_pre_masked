
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int truesize; int * head; int * data; int state; int in_frame; } ;
typedef TYPE_1__ iobuff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(iobuff_t *VAR_4, int VAR_5)
{
 VAR_4->head = FUNC_0(VAR_5, VAR_2);
 if (VAR_4->head != ((void*)0)) {
  VAR_4->truesize = VAR_5;
  VAR_4->in_frame = VAR_1;
  VAR_4->state = VAR_3;
  VAR_4->data = VAR_4->head;
 }
 return VAR_4->head ? 0 : -VAR_0;
}
