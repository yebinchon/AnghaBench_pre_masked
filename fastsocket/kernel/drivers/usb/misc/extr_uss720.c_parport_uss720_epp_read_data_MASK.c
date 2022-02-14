
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_uss720_private {int* reg; } ;
struct parport {struct parport_uss720_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct parport*,int ) ;
 int FUNC_1 (struct parport*) ;
 scalar_t__ FUNC_2 (struct parport*,int,char*,int ) ;

__attribute__((used)) static size_t FUNC_3(struct parport *VAR_3, void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct parport_uss720_private *VAR_7 = VAR_3->private_data;
 size_t VAR_8 = 0;

 if (FUNC_0(VAR_3, VAR_0))
  return 0;
 for (; VAR_8 < VAR_5; VAR_8++) {
  if (FUNC_2(VAR_3, 4, (char *)VAR_4, VAR_2))
   break;
  VAR_4++;
  if (VAR_7->reg[0] & 0x01) {
   FUNC_1(VAR_3);
   break;
  }
 }
 FUNC_0(VAR_3, VAR_1);
 return VAR_8;
}
