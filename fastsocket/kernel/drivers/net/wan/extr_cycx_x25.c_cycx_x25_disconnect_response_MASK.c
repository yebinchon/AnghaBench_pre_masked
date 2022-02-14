
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct cycx_device {int dummy; } ;
typedef int d ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct cycx_device*,int ,char,char**,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct cycx_device *VAR_1, u8 VAR_2,
     u8 VAR_3)
{
 char VAR_4[5];

 FUNC_0(VAR_4, 0, sizeof(VAR_4));
 VAR_4[0] = VAR_4[3] = VAR_3;
 VAR_4[2] = 0x10;
 VAR_4[4] = 0x17;

 return FUNC_1(VAR_1, VAR_0, VAR_2, &VAR_4, 5, ((void*)0), 0);
}
