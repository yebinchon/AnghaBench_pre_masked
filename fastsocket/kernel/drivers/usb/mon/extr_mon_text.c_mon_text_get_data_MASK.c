
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int * transfer_buffer; } ;
struct mon_event_text {int data; scalar_t__ is_in; } ;
struct mon_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static inline char FUNC_1(struct mon_event_text *VAR_1, struct urb *VAR_2,
    int VAR_3, char VAR_4, struct mon_bus *VAR_5)
{
 if (VAR_3 <= 0)
  return 'L';
 if (VAR_3 >= VAR_0)
  VAR_3 = VAR_0;

 if (VAR_1->is_in) {
  if (VAR_4 != 'C')
   return '<';
 } else {
  if (VAR_4 != 'S')
   return '>';
 }

 if (VAR_2->transfer_buffer == ((void*)0))
  return 'Z';

 FUNC_0(VAR_1->data, VAR_2->transfer_buffer, VAR_3);
 return 0;
}
