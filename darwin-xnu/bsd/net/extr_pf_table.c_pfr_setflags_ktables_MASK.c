
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktableworkq {int dummy; } ;
struct pfr_ktable {int pfrkt_nflags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct pfr_ktable* FUNC_1 (struct pfr_ktableworkq*) ;
 struct pfr_ktable* FUNC_2 (struct pfr_ktable*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct pfr_ktable*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct pfr_ktableworkq *VAR_3)
{
 struct pfr_ktable *VAR_4, *VAR_5;

 FUNC_0(VAR_1, VAR_0);

 for (VAR_4 = FUNC_1(VAR_3); VAR_4; VAR_4 = VAR_5) {
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  FUNC_3(VAR_4, VAR_4->pfrkt_nflags);
 }
}
