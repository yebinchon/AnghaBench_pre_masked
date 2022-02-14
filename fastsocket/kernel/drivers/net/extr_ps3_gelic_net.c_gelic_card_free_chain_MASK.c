
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_descr {scalar_t__ bus_addr; struct gelic_descr* next; } ;
struct gelic_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gelic_card*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gelic_card *VAR_2,
      struct gelic_descr *VAR_3)
{
 struct gelic_descr *VAR_4;

 for (VAR_4 = VAR_3; VAR_4 && VAR_4->bus_addr; VAR_4 = VAR_4->next) {
  FUNC_1(FUNC_0(VAR_2), VAR_4->bus_addr,
     VAR_1, VAR_0);
  VAR_4->bus_addr = 0;
 }
}
