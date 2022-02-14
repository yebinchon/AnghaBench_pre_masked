
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct cas {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct cas*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct cas *VAR_4,
        u32 VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_4->regs + VAR_2);
 u16 VAR_7;


 if (FUNC_0(VAR_1, VAR_6) == 0)
  return 0;

 VAR_7 = FUNC_0(VAR_0, VAR_6);
 return FUNC_1(VAR_4, VAR_7);
}
