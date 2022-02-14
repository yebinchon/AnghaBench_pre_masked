
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_slot {int* abs; } ;
struct input_dev {int mtsize; int slot; int* abs; int * absfuzz; struct input_mt_slot* mt; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_6,
      unsigned int VAR_7, int *VAR_8)
{
 bool VAR_9;
 int *VAR_10;

 if (VAR_7 == VAR_2) {




  if (*VAR_8 >= 0 && *VAR_8 < VAR_6->mtsize)
   VAR_6->slot = *VAR_8;

  return VAR_4;
 }

 VAR_9 = VAR_7 >= VAR_0 && VAR_7 <= VAR_1;

 if (!VAR_9) {
  VAR_10 = &VAR_6->abs[VAR_7];
 } else if (VAR_6->mt) {
  struct input_mt_slot *VAR_11 = &VAR_6->mt[VAR_6->slot];
  VAR_10 = &VAR_11->abs[VAR_7 - VAR_0];
 } else {




  VAR_10 = ((void*)0);
 }

 if (VAR_10) {
  *VAR_8 = FUNC_0(*VAR_8, *VAR_10,
      VAR_6->absfuzz[VAR_7]);
  if (*VAR_10 == *VAR_8)
   return VAR_4;

  *VAR_10 = *VAR_8;
 }


 if (VAR_9 && VAR_6->slot != VAR_6->abs[VAR_2]) {
  VAR_6->abs[VAR_2] = VAR_6->slot;
  FUNC_1(VAR_6, VAR_3, VAR_2, VAR_6->slot);
 }

 return VAR_5;
}
