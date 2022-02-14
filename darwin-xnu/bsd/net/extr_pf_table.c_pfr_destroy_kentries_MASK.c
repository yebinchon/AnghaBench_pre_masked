
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_kentryworkq {int dummy; } ;
struct pfr_kentry {int dummy; } ;


 struct pfr_kentry* FUNC_0 (struct pfr_kentryworkq*) ;
 struct pfr_kentry* FUNC_1 (struct pfr_kentry*,int ) ;
 int FUNC_2 (struct pfr_kentry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct pfr_kentryworkq *VAR_1)
{
 struct pfr_kentry *VAR_2, *VAR_3;

 for (VAR_2 = FUNC_0(VAR_1); VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
