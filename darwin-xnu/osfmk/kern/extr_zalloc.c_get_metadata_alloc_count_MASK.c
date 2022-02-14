
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct zone_page_metadata {int page_count; } ;
struct zone {int elem_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct zone_page_metadata*) ;
 struct zone* FUNC_1 (struct zone_page_metadata*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline uint16_t
FUNC_3(struct zone_page_metadata *VAR_2)
{
  FUNC_2(FUNC_0(VAR_2) != VAR_0);
  struct zone *VAR_3 = FUNC_1(VAR_2);
  return ((VAR_2->page_count * VAR_1) / VAR_3->elem_size);
}
