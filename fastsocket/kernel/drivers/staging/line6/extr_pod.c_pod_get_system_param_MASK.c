
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* control; } ;
struct usb_line6_pod {int line6; TYPE_1__ prog_data; } ;
struct ValueWait {scalar_t__ value; int wait; } ;
typedef int ssize_t ;
struct TYPE_6__ {int state; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int const) ;
 char* FUNC_4 (struct usb_line6_pod*,int ,int const) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_9 ;

__attribute__((used)) static ssize_t FUNC_9(struct usb_line6_pod *VAR_10, char *VAR_11, int VAR_12, struct ValueWait *VAR_13, int VAR_14, int VAR_15)
{
 char *VAR_16;
 int VAR_17;
 static const int VAR_18 = 1;
 int VAR_19 = 0;
 FUNC_0(VAR_9, VAR_8);

 if (((VAR_10->prog_data.control[VAR_4] & 0x40) == 0) && VAR_14)
  return -VAR_0;


 VAR_13->value = VAR_3;
 VAR_16 = FUNC_4(VAR_10, VAR_2, VAR_18);
 if (!VAR_16)
  return 0;
 VAR_16[VAR_5] = VAR_12;
 FUNC_3(&VAR_10->line6, VAR_16, VAR_18);
 FUNC_2(VAR_16);


 FUNC_1(&VAR_13->wait, &VAR_9);
 VAR_8->state = VAR_6;

 while (VAR_13->value == VAR_3) {
  if (FUNC_7(VAR_8)) {
   VAR_19 = -VAR_1;
   break;
  } else
   FUNC_6();
 }

 VAR_8->state = VAR_7;
 FUNC_5(&VAR_13->wait, &VAR_9);

 if (VAR_19 < 0)
  return VAR_19;

 VAR_17 = VAR_15 ? (int)(signed short)VAR_13->value : (int)(unsigned short)VAR_13->value;
 return FUNC_8(VAR_11, "%d\n", VAR_17);
}
