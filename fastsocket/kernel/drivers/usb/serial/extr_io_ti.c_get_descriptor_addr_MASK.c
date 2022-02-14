
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_i2c_desc {int Type; int Size; } ;
struct edgeport_serial {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct edgeport_serial*,int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct edgeport_serial *VAR_1,
    int VAR_2, struct ti_i2c_desc *VAR_3)
{
 int VAR_4;
 int VAR_5;


 VAR_4 = 2;
 do {
  VAR_5 = FUNC_0(VAR_1,
       VAR_4,
       sizeof(struct ti_i2c_desc),
       (__u8 *)VAR_3);
  if (VAR_5)
   return 0;

  if (VAR_3->Type == VAR_2)
   return VAR_4;

  VAR_4 = VAR_4 + sizeof(struct ti_i2c_desc)
       + VAR_3->Size;

 } while ((VAR_4 < VAR_0) && VAR_3->Type);

 return 0;
}
