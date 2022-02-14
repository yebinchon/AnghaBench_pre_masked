
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3_ocir {scalar_t__ signature; int version_flags; } ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tg3_ocir*,int ,int) ;
 int FUNC_1 (struct tg3*,int*,int,int) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_4, struct tg3_ocir *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_5++) {
  u32 VAR_7 = VAR_6 * VAR_1, VAR_8 = VAR_1;

  FUNC_1(VAR_4, (u32 *) VAR_5, VAR_7, VAR_8);
  VAR_7 += VAR_8;

  if (VAR_5->signature != VAR_2 ||
      !(VAR_5->version_flags & VAR_0))
   FUNC_0(VAR_5, 0, VAR_1);
 }
}
