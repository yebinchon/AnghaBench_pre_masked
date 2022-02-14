
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tpm_chip {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct tpm_chip*,int,int *) ;
 int FUNC_1 (int ) ;
 struct tpm_chip* FUNC_2 (int ) ;

int FUNC_3(u32 VAR_1, int VAR_2, u8 *VAR_3)
{
 struct tpm_chip *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 FUNC_1(VAR_4->dev->driver->owner);
 return VAR_5;
}
