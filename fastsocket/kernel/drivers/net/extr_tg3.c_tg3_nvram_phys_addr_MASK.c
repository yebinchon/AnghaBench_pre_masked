
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {scalar_t__ nvram_jedecnum; int nvram_pagesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct tg3 *VAR_6, u32 VAR_7)
{
 if (FUNC_0(VAR_6, VAR_4) &&
     FUNC_0(VAR_6, VAR_5) &&
     FUNC_0(VAR_6, VAR_1) &&
     !FUNC_0(VAR_6, VAR_3) &&
     (VAR_6->nvram_jedecnum == VAR_2))

  VAR_7 = ((VAR_7 / VAR_6->nvram_pagesize) <<
   VAR_0) +
         (VAR_7 % VAR_6->nvram_pagesize);

 return VAR_7;
}
