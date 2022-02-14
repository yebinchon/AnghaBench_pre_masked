
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r592_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct r592_device*,int ) ;
 int FUNC_2 (struct r592_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct r592_device *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4, VAR_0);
 bool VAR_6 = VAR_5 & VAR_3;

 FUNC_0("update card detect. card state: %s", VAR_6 ?
  "present" : "absent");

 VAR_5 &= ~((VAR_2 | VAR_1) << 16);

 if (VAR_6)
  VAR_5 |= (VAR_2 << 16);
 else
  VAR_5 |= (VAR_1 << 16);

 FUNC_2(VAR_4, VAR_0, VAR_5);
}
