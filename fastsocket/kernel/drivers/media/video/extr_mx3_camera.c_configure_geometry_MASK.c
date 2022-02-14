
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx3_camera_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mx3_camera_dev*,int ) ;
 int FUNC_1 (struct mx3_camera_dev*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct mx3_camera_dev *VAR_5,
          unsigned int VAR_6, unsigned int VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;


 VAR_9 = VAR_6 - 1;
 VAR_10 = VAR_7 - 1;
 FUNC_1(VAR_5, VAR_9 | (VAR_10 << 16), VAR_4);

 FUNC_1(VAR_5, VAR_9 << 16, VAR_1);
 FUNC_1(VAR_5, (VAR_10 << 16) | 0x22, VAR_2);

 FUNC_1(VAR_5, VAR_9 | (VAR_10 << 16), VAR_0);


 VAR_8 = FUNC_0(VAR_5, VAR_3) & 0xffff0000;

 FUNC_1(VAR_5, VAR_8 | 0 | (0 << 8), VAR_3);
}
