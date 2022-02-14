
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int dummy; } ;
struct zd_ioreq16 {int member_1; int member_0; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;


 int FUNC_1 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;
 struct zd_chip* FUNC_2 (struct zd_rf*) ;

__attribute__((used)) static int FUNC_3(struct zd_rf *VAR_0)
{
 static const struct zd_ioreq16 VAR_1[] = {
  { 129, 0x15 },
  { 128, 0x81 },
 };
 struct zd_chip *VAR_2 = FUNC_2(VAR_0);

 return FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_1));
}
