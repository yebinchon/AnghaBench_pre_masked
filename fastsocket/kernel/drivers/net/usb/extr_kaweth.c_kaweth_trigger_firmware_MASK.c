
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaweth_device {int* firmware_buf; int dev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct kaweth_device*,int ,int ,int,int ,int ,void*,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kaweth_device *VAR_5,
       __u8 VAR_6)
{
 VAR_5->firmware_buf[0] = 0xB6;
 VAR_5->firmware_buf[1] = 0xC3;
 VAR_5->firmware_buf[2] = 0x01;
 VAR_5->firmware_buf[3] = 0x00;
 VAR_5->firmware_buf[4] = 0x06;
 VAR_5->firmware_buf[5] = VAR_6;
 VAR_5->firmware_buf[6] = 0x00;
 VAR_5->firmware_buf[7] = 0x00;

 FUNC_0("Triggering firmware");

 return FUNC_1(VAR_5,
         FUNC_2(VAR_5->dev, 0),
         VAR_0,
         VAR_4 | VAR_2 | VAR_3,
         0,
         0,
         (void *)VAR_5->firmware_buf,
         8,
         VAR_1);
}
