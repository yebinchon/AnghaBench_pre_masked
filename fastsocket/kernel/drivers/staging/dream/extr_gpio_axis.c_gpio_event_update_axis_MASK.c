
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct gpio_event_axis_info {int count; int (* map ) (struct gpio_event_axis_info*,int) ;int flags; scalar_t__ type; int decoded_size; int code; int * gpio; } ;
struct gpio_axis_state {int pos; int input_dev; struct gpio_event_axis_info* info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__,int ,int,...) ;
 int FUNC_5 (struct gpio_event_axis_info*,int) ;

__attribute__((used)) static void FUNC_6(struct gpio_axis_state *VAR_3, int VAR_4)
{
 struct gpio_event_axis_info *VAR_5 = VAR_3->info;
 int VAR_6;
 int VAR_7;
 uint16_t VAR_8 = 0;
 uint16_t VAR_9;
 uint16_t VAR_10 = VAR_3->pos;
 for (VAR_6 = VAR_5->count - 1; VAR_6 >= 0; VAR_6--)
  VAR_8 = (VAR_8 << 1) | FUNC_0(VAR_5->gpio[VAR_6]);
 VAR_9 = VAR_5->map(VAR_5, VAR_8);
 if (VAR_5->flags & VAR_2)
  FUNC_4("axis %d-%d raw %x, pos %d -> %d\n",
   VAR_5->type, VAR_5->code, VAR_8, VAR_10, VAR_9);
 if (VAR_4 && VAR_9 != VAR_10) {
  if (VAR_5->type == VAR_0) {
   VAR_7 = (VAR_5->decoded_size + VAR_9 - VAR_10) %
      VAR_5->decoded_size;
   if (VAR_7 > VAR_5->decoded_size / 2)
    VAR_7 -= VAR_5->decoded_size;
   if (VAR_7 == VAR_5->decoded_size / 2) {
    if (VAR_5->flags & VAR_1)
     FUNC_4("axis %d-%d unknown direction, "
      "pos %d -> %d\n", VAR_5->type,
      VAR_5->code, VAR_10, VAR_9);
    VAR_7 = 0;
   }
   if (VAR_5->flags & VAR_1)
    FUNC_4("axis %d-%d change %d\n",
     VAR_5->type, VAR_5->code, VAR_7);
   FUNC_2(VAR_3->input_dev, VAR_5->code, VAR_7);
  } else {
   if (VAR_5->flags & VAR_1)
    FUNC_4("axis %d-%d now %d\n",
     VAR_5->type, VAR_5->code, VAR_9);
   FUNC_1(VAR_3->input_dev, VAR_5->type, VAR_5->code, VAR_9);
  }
  FUNC_3(VAR_3->input_dev);
 }
 VAR_3->pos = VAR_9;
}
