
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_field {unsigned int report_count; unsigned int report_offset; unsigned int report_size; scalar_t__ logical_minimum; scalar_t__ logical_maximum; int flags; scalar_t__* value; TYPE_1__* usage; } ;
struct hid_device {int dummy; } ;
typedef int __u8 ;
typedef scalar_t__ __s32 ;
struct TYPE_2__ {scalar_t__ hid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned int,unsigned int) ;
 int FUNC_1 (struct hid_device*,struct hid_field*,TYPE_1__*,int,int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,unsigned int) ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_6 (scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct hid_device *VAR_3, struct hid_field *VAR_4,
       __u8 *VAR_5, int VAR_6)
{
 unsigned VAR_7;
 unsigned VAR_8 = VAR_4->report_count;
 unsigned VAR_9 = VAR_4->report_offset;
 unsigned VAR_10 = VAR_4->report_size;
 __s32 VAR_11 = VAR_4->logical_minimum;
 __s32 VAR_12 = VAR_4->logical_maximum;
 __s32 *VAR_13;

 if (!(VAR_13 = FUNC_3(sizeof(__s32) * VAR_8, VAR_0)))
  return;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {

   VAR_13[VAR_7] = VAR_11 < 0 ? FUNC_6(FUNC_0(VAR_5, VAR_9 + VAR_7 * VAR_10, VAR_10), VAR_10) :
          FUNC_0(VAR_5, VAR_9 + VAR_7 * VAR_10, VAR_10);

   if (!(VAR_4->flags & VAR_1)
       && VAR_13[VAR_7] >= VAR_11 && VAR_13[VAR_7] <= VAR_12
       && VAR_4->usage[VAR_13[VAR_7] - VAR_11].hid == VAR_2 + 1)
    goto exit;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {

  if (VAR_1 & VAR_4->flags) {
   FUNC_1(VAR_3, VAR_4, &VAR_4->usage[VAR_7], VAR_13[VAR_7], VAR_6);
   continue;
  }

  if (VAR_4->value[VAR_7] >= VAR_11 && VAR_4->value[VAR_7] <= VAR_12
   && VAR_4->usage[VAR_4->value[VAR_7] - VAR_11].hid
   && FUNC_5(VAR_13, VAR_4->value[VAR_7], VAR_8))
    FUNC_1(VAR_3, VAR_4, &VAR_4->usage[VAR_4->value[VAR_7] - VAR_11], 0, VAR_6);

  if (VAR_13[VAR_7] >= VAR_11 && VAR_13[VAR_7] <= VAR_12
   && VAR_4->usage[VAR_13[VAR_7] - VAR_11].hid
   && FUNC_5(VAR_4->value, VAR_13[VAR_7], VAR_8))
    FUNC_1(VAR_3, VAR_4, &VAR_4->usage[VAR_13[VAR_7] - VAR_11], 1, VAR_6);
 }

 FUNC_4(VAR_4->value, VAR_13, VAR_8 * sizeof(__s32));
exit:
 FUNC_2(VAR_13);
}
