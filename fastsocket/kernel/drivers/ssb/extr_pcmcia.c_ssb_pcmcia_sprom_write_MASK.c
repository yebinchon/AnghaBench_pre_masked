
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ssb_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ssb_bus*,int ,int) ;
 int FUNC_2 (struct ssb_bus*,int ) ;

__attribute__((used)) static int FUNC_3(struct ssb_bus *VAR_5, u16 VAR_6, u16 VAR_7)
{
 int VAR_8;

 VAR_6 *= 2;

 VAR_8 = FUNC_1(VAR_5, VAR_2,
       (VAR_6 & 0x00FF));
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_5, VAR_1,
       (VAR_6 & 0xFF00) >> 8);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_5, VAR_4,
       (VAR_7 & 0x00FF));
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_5, VAR_3,
       (VAR_7 & 0xFF00) >> 8);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_2(VAR_5, VAR_0);
 if (VAR_8)
  return VAR_8;
 FUNC_0(20);

 return 0;
}
