
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tg3*,int ,int *) ;
 int FUNC_1 (struct tg3*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tg3 *VAR_3, int VAR_4, u32 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_2,
      (VAR_4 << VAR_0) |
      VAR_1);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_3, VAR_2, VAR_5);

 return VAR_6;
}
