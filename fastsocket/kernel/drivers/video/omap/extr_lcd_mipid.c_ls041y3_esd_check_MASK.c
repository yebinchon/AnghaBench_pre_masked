
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipid_device {int revision; } ;


 int FUNC_0 (struct mipid_device*) ;
 int FUNC_1 (struct mipid_device*) ;

__attribute__((used)) static void FUNC_2(struct mipid_device *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->revision >= 0x88)
  FUNC_1(VAR_0);
}
