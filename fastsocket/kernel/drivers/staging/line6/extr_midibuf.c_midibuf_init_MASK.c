
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MidiBuffer {int size; int split; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (struct MidiBuffer*) ;

int FUNC_2(struct MidiBuffer *VAR_2, int VAR_3, int VAR_4)
{
 VAR_2->buf = FUNC_0(VAR_3, VAR_1);

 if (VAR_2->buf == ((void*)0))
  return -VAR_0;

 VAR_2->size = VAR_3;
 VAR_2->split = VAR_4;
 FUNC_1(VAR_2);
 return 0;
}
