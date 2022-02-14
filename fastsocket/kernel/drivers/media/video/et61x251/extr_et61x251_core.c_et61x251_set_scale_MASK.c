
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct et61x251_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct et61x251_device*,int) ;
 scalar_t__ FUNC_2 (struct et61x251_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct et61x251_device* VAR_1, u8 VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_1, 0x12);
 if (VAR_3 < 0)
  VAR_4 += VAR_3;

 if (VAR_2 == 1)
  VAR_4 += FUNC_2(VAR_1, VAR_3 & ~0x01, 0x12);
 else if (VAR_2 == 2)
  VAR_4 += FUNC_2(VAR_1, VAR_3 | 0x01, 0x12);

 if (VAR_4)
  return -VAR_0;

 FUNC_0("Scaling factor: %u", VAR_2);

 return 0;
}
