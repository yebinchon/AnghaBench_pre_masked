
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {int * buffer_storage; int mutex; int * stream; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pvr2_ioread *VAR_4)
{
 unsigned int VAR_5;

 VAR_4->stream = ((void*)0);
 FUNC_2(&VAR_4->mutex);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->buffer_storage[VAR_5] = FUNC_1(VAR_1,VAR_3);
  if (!(VAR_4->buffer_storage[VAR_5])) break;
 }

 if (VAR_5 < VAR_0) {

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (!(VAR_4->buffer_storage[VAR_5])) continue;
   FUNC_0(VAR_4->buffer_storage[VAR_5]);
  }
  return -VAR_2;
 }
 return 0;
}
