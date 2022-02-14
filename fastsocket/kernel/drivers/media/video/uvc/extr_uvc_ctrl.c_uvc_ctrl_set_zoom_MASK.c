
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_control_mapping {int dummy; } ;
typedef int __u8 ;
typedef scalar_t__ __s32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct uvc_control_mapping *VAR_0,
 __s32 VAR_1, __u8 *VAR_2)
{
 VAR_2[0] = VAR_1 == 0 ? 0 : (VAR_1 > 0) ? 1 : 0xff;
 VAR_2[2] = FUNC_1((int)FUNC_0(VAR_1), 0xff);
}
