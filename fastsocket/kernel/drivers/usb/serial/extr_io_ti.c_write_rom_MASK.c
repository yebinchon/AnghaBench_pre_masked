
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ TiMode; } ;
struct edgeport_serial {int TI_I2C_Type; TYPE_1__ product_info; } ;
typedef int __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct edgeport_serial*,int,int,int *) ;
 int FUNC_1 (struct edgeport_serial*,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct edgeport_serial *VAR_3, int VAR_4,
      int VAR_5, __u8 *VAR_6)
{
 if (VAR_3->product_info.TiMode == VAR_1)
  return FUNC_0(VAR_3, VAR_4, VAR_5,
        VAR_6);

 if (VAR_3->product_info.TiMode == VAR_2)
  return FUNC_1(VAR_3, VAR_4, VAR_5,
      VAR_3->TI_I2C_Type, VAR_6);
 return -VAR_0;
}
