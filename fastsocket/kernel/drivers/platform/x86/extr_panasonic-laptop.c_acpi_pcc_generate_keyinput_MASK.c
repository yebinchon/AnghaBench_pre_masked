
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int* keymap; int device; int handle; struct input_dev* input_dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,unsigned long long) ;
 int FUNC_4 (int ,int ,int *,unsigned long long*) ;
 int FUNC_5 (struct input_dev*,int,int) ;
 int FUNC_6 (struct input_dev*) ;

__attribute__((used)) static void FUNC_7(struct pcc_acpi *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6->input_dev;
 int VAR_8;
 int VAR_9, VAR_10;
 unsigned long long VAR_11;

 VAR_8 = FUNC_4(VAR_6->handle, VAR_4,
       ((void*)0), &VAR_11);
 if (!FUNC_1(VAR_8)) {
  FUNC_0((VAR_0,
     "error getting hotkey status\n"));
  return;
 }

 FUNC_3(VAR_6->device, VAR_2, VAR_11);

 VAR_10 = VAR_11 & 0xf;

 if (VAR_10 < 0 || VAR_10 >= FUNC_2(VAR_6->keymap)) {
  FUNC_0((VAR_0,
      "hotkey number out of range: %d\n",
      VAR_10));
  return;
 }

 VAR_9 = VAR_6->keymap[VAR_10];

 if (VAR_9 != VAR_3) {
  int VAR_12 = (VAR_11 & 0x80) ? VAR_5 : VAR_1;

  FUNC_5(VAR_7, VAR_9, VAR_12);
  FUNC_6(VAR_7);
 }

 return;
}
