
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int (* read32 ) (struct tg3*,scalar_t__) ;int (* write32 ) (struct tg3*,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tg3*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tg3*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tg3 *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (FUNC_2(VAR_2, VAR_1) || FUNC_2(VAR_2, VAR_0))

  VAR_2->write32(VAR_2, VAR_3, VAR_4);
 else {

  FUNC_3(VAR_2, VAR_3, VAR_4);
  if (VAR_5)
   FUNC_4(VAR_5);
  VAR_2->read32(VAR_2, VAR_3);
 }



 if (VAR_5)
  FUNC_4(VAR_5);
}
