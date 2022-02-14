
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int symbol; } ;
typedef TYPE_1__ keyboard_event ;
struct TYPE_5__ {int tail; int head; int * buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void * FUNC_2(void *VAR_4) {
 keyboard_event VAR_5;
 while (!VAR_2) {
  if (((VAR_3.tail+1)&255) != VAR_3.head) {
   if ( FUNC_0(&VAR_5)) {
    if (VAR_5.type == VAR_1) {
     VAR_3.buf[VAR_3.tail] = VAR_5.symbol;
     VAR_3.tail++;
    }
   }
  }
  FUNC_1(VAR_0);
 }
 return ((void*)0);
}
