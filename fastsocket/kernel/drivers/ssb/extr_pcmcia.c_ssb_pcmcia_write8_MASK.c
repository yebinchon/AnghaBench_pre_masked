
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ssb_device {struct ssb_bus* bus; } ;
struct ssb_bus {int bar_lock; scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ssb_device*,scalar_t__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ssb_device *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct ssb_bus *VAR_3 = VAR_0->bus;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_3(&VAR_3->bar_lock, VAR_4);
 VAR_5 = FUNC_2(VAR_0, &VAR_1);
 if (FUNC_0(!VAR_5))
  FUNC_5(VAR_2, VAR_3->mmio + VAR_1);
 FUNC_1();
 FUNC_4(&VAR_3->bar_lock, VAR_4);
}
