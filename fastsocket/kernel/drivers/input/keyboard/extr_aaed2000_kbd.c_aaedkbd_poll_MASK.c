
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {int input; struct aaedkbd* private; } ;
struct aaedkbd {unsigned int* kbdscan_state; scalar_t__* kbdscan_count; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct aaedkbd*,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct input_polled_dev *VAR_6)
{
 struct aaedkbd *VAR_7 = VAR_6->private;
 unsigned int VAR_8, VAR_9;

 VAR_8 = 0;
 do {
  VAR_0 = VAR_8 + 8;
  FUNC_2(VAR_4);
  VAR_9 = VAR_2 & VAR_1;

  if (VAR_9 != VAR_7->kbdscan_state[VAR_8]) {
   VAR_7->kbdscan_count[VAR_8] = 0;
   VAR_7->kbdscan_state[VAR_8] = VAR_9;
  } else if (++VAR_7->kbdscan_count[VAR_8] >= VAR_3) {
   FUNC_0(VAR_7, VAR_8, VAR_9);
   VAR_8++;
  }
 } while (VAR_8 < VAR_5);

 VAR_0 = 0x07;
 FUNC_1(VAR_6->input);
}
