
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int pci_fn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ,int) ;
 scalar_t__ FUNC_2 (struct tg3*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static inline u32 FUNC_5(struct tg3 *VAR_6, u32 VAR_7)
{
 u32 VAR_8, VAR_9;

 if (FUNC_2(VAR_6) == VAR_0 ||
     FUNC_2(VAR_6) == VAR_1)
  VAR_8 = FUNC_0(VAR_6, VAR_2);
 else
  VAR_8 = FUNC_3(VAR_4);

 VAR_9 = VAR_3 + 4 * VAR_6->pci_fn;
 VAR_8 &= ~(VAR_5 << VAR_9);
 VAR_8 |= (VAR_7 << VAR_9);

 if (FUNC_2(VAR_6) == VAR_0 ||
     FUNC_2(VAR_6) == VAR_1)
  FUNC_1(VAR_6, VAR_2, VAR_8);
 else
  FUNC_4(VAR_4, VAR_8);

 return VAR_8 >> VAR_3;
}
