
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct expansion_card {int slot_no; int loader; struct resource* resource; scalar_t__ easi; } ;
struct ecard_request {struct expansion_card* ec; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ecard_request *VAR_3)
{
 struct expansion_card *VAR_4 = VAR_3->ec;
 struct resource *VAR_5;

 VAR_5 = VAR_4->slot_no == 8
  ? &VAR_4->resource[VAR_2]
  : VAR_4->easi
    ? &VAR_4->resource[VAR_0]
    : &VAR_4->resource[VAR_1];

 FUNC_0(VAR_5->start, VAR_4->loader);
}
