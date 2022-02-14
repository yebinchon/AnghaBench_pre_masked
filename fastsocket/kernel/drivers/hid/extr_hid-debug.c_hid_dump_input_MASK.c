
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_device {int debug_wait; } ;
typedef int __s32 ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,char*) ;
 char* FUNC_1 (int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct hid_device *VAR_1, struct hid_usage *VAR_2, __s32 VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2->hid, ((void*)0));
 if (!VAR_4)
  return;
 VAR_5 = FUNC_4(VAR_4);
 FUNC_3(VAR_4 + VAR_5, VAR_0 - VAR_5 - 1, " = %d\n", VAR_3);

 FUNC_0(VAR_1, VAR_4);

 FUNC_2(VAR_4);
        FUNC_5(&VAR_1->debug_wait);

}
