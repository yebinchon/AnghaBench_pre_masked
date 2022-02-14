
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {scalar_t__ type; int code; } ;
struct hid_input {int dummy; } ;
struct hid_field {int flags; } ;
struct hid_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int ,unsigned long*) ;
 scalar_t__ FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_6, struct hid_input *VAR_7,
  struct hid_field *VAR_8, struct hid_usage *VAR_9,
  unsigned long **VAR_10, int *VAR_11)
{
 unsigned long VAR_12 = (unsigned long)FUNC_1(VAR_6);

 if ((VAR_12 & VAR_4) && VAR_9->type == VAR_1 &&
   (VAR_8->flags & VAR_3))
  VAR_8->flags &= ~VAR_3;

 if ((VAR_12 & VAR_5) && (VAR_9->type == VAR_1 ||
    VAR_9->type == VAR_2 || VAR_9->type == VAR_0))
  FUNC_0(VAR_9->code, *VAR_10);

 return 0;
}
