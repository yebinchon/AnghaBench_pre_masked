
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
 int VAR_4 ;
 int * FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(iobuff_t *VAR_5, int VAR_6)
{
 VAR_5->head = FUNC_0(VAR_6, VAR_3 | VAR_2);
 if (VAR_5->head != ((void*)0)) {
  VAR_5->truesize = VAR_6;
  VAR_5->in_frame = VAR_1;
  VAR_5->state = VAR_4;
  VAR_5->data = VAR_5->head;
 }
 return VAR_5->head ? 0 : -VAR_0;
}
