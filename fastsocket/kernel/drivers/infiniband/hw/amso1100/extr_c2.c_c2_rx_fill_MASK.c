
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_ring {struct c2_element* start; struct c2_element* to_clean; } ;
struct c2_port {struct c2_ring rx_ring; } ;
struct c2_element {struct c2_element* next; } ;


 scalar_t__ FUNC_0 (struct c2_port*,struct c2_element*) ;

__attribute__((used)) static int FUNC_1(struct c2_port *VAR_0)
{
 struct c2_ring *VAR_1 = &VAR_0->rx_ring;
 struct c2_element *VAR_2;
 int VAR_3 = 0;

 VAR_2 = VAR_1->start;
 do {
  if (FUNC_0(VAR_0, VAR_2)) {
   VAR_3 = 1;
   break;
  }
 } while ((VAR_2 = VAR_2->next) != VAR_1->start);

 VAR_1->to_clean = VAR_1->start;
 return VAR_3;
}
