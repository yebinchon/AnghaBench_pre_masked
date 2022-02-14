
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int sequence_len; int* sequence; int num_patterns; TYPE_1__* patterns; } ;
struct TYPE_2__ {int num_rows; } ;



__attribute__((used)) static int FUNC_0( struct module *VAR_0, char **VAR_1 ) {
 int VAR_2, VAR_3, VAR_4, VAR_5 = 0;
 for( VAR_2 = 0; VAR_2 < VAR_0->sequence_len; VAR_2++ ) {
  VAR_3 = VAR_0->sequence[ VAR_2 ];
  VAR_4 = ( VAR_3 < VAR_0->num_patterns ) ? VAR_0->patterns[ VAR_3 ].num_rows : 0;
  if( VAR_1 ) {
   VAR_1[ VAR_2 ] = VAR_1[ 0 ] ? &VAR_1[ 0 ][ VAR_5 ] : ((void*)0);
  }
  VAR_5 += VAR_4;
 }
 return VAR_5;
}
