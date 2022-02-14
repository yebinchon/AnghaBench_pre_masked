
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct el3_private {scalar_t__ type; } ;
typedef int __be16 ;
struct TYPE_3__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int ) ;
 struct el3_private* FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(__be16 *VAR_8)
{
 short VAR_9 = 0xff;
 int VAR_10;






 FUNC_4(0x00, VAR_6);
 FUNC_4(0x00, VAR_6);
 for (VAR_10 = 0; VAR_10 < 255; VAR_10++) {
  FUNC_4(VAR_9, VAR_6);
  VAR_9 <<= 1;
  VAR_9 = VAR_9 & 0x100 ? VAR_9 ^ 0xcf : VAR_9;
 }

 if (VAR_2 == 0)
  FUNC_4(0xd0, VAR_6);
 else
  FUNC_4(0xd8, VAR_6);
 if (FUNC_1(7) != 0x6d50)
  return 1;



 for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
  VAR_8[VAR_10] = FUNC_0(FUNC_1(VAR_10));
 return 0;

}
