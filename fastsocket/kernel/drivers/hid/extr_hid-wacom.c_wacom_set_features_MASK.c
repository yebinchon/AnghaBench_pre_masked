
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int (* hid_output_raw_report ) (struct hid_device*,int*,int,int ) ;} ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,int*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_1)
{
 int VAR_2;
 __u8 VAR_3[2];


 VAR_3[0] = 0x03;
 VAR_3[1] = 0x20;
 VAR_2 = VAR_1->hid_output_raw_report(VAR_1, VAR_3, 2,
    VAR_0);
 return;
}
