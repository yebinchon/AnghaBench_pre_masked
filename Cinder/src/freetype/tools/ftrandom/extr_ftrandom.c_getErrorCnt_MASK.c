
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fontlist {double len; } ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;

__attribute__((used)) static unsigned int
  FUNC_0( struct fontlist* VAR_2 )
  {
    if ( VAR_0 == 0 && VAR_1 == 0.0 )
      return 0;

    return VAR_0 + (unsigned int)( VAR_1 * VAR_2->len );
  }
