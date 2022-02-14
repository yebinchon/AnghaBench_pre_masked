
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf2k {size_t id; int bads; int gameport; int reads; } ;
struct gameport {int dummy; } ;


 int VAR_0 ;
 struct gf2k* FUNC_0 (struct gameport*) ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (struct gf2k*,unsigned char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,unsigned char*) ;

__attribute__((used)) static void FUNC_3(struct gameport *VAR_2)
{
 struct gf2k *VAR_3 = FUNC_0(VAR_2);
 unsigned char VAR_4[VAR_0];

 VAR_3->reads++;

 if (FUNC_2(VAR_3->gameport, VAR_1[VAR_3->id], VAR_4) < VAR_1[VAR_3->id])
  VAR_3->bads++;
 else
  FUNC_1(VAR_3, VAR_4);
}
