
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ display; scalar_t__ current; scalar_t__ totallines; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0( void ) {
 VAR_0.display -= 2;
 if ( VAR_0.current - VAR_0.display >= VAR_0.totallines ) {
  VAR_0.display = VAR_0.current - VAR_0.totallines + 1;
 }
}
