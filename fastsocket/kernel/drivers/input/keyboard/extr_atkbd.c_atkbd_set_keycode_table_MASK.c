
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct atkbd {int set; int force_release_mask; void** keycode; scalar_t__ scroll; scalar_t__ translated; } ;
struct TYPE_3__ {unsigned int set2; void* keycode; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (struct atkbd*,int ) ;
 int FUNC_3 (struct atkbd*,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 void** VAR_7 ;
 void** VAR_8 ;
 unsigned int* VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (void**,void**,int) ;
 int FUNC_6 (void**,int ,int) ;

__attribute__((used)) static void FUNC_7(struct atkbd *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12, VAR_13;

 FUNC_6(VAR_10->keycode, 0, sizeof(VAR_10->keycode));
 FUNC_4(VAR_10->force_release_mask, VAR_0);

 if (VAR_10->translated) {
  for (VAR_12 = 0; VAR_12 < 128; VAR_12++) {
   VAR_11 = VAR_9[VAR_12];
   VAR_10->keycode[VAR_12] = VAR_7[VAR_11];
   VAR_10->keycode[VAR_12 | 0x80] = VAR_7[VAR_11 | 0x80];
   if (VAR_10->scroll)
    for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++)
     if ((VAR_11 | 0x80) == VAR_6[VAR_13].set2)
      VAR_10->keycode[VAR_12 | 0x80] = VAR_6[VAR_13].keycode;
  }
 } else if (VAR_10->set == 3) {
  FUNC_5(VAR_10->keycode, VAR_8, sizeof(VAR_10->keycode));
 } else {
  FUNC_5(VAR_10->keycode, VAR_7, sizeof(VAR_10->keycode));

  if (VAR_10->scroll)
   for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++) {
    VAR_11 = VAR_6[VAR_12].set2;
    VAR_10->keycode[VAR_11] = VAR_6[VAR_12].keycode;
  }
 }





 VAR_11 = FUNC_2(VAR_10, VAR_1);
 VAR_10->keycode[VAR_11] = VAR_3;
 FUNC_1(VAR_11, VAR_10->force_release_mask);

 VAR_11 = FUNC_2(VAR_10, VAR_2);
 VAR_10->keycode[VAR_11] = VAR_4;
 FUNC_1(VAR_11, VAR_10->force_release_mask);




 if (&FUNC_3)
  FUNC_3(VAR_10, VAR_5);
}
