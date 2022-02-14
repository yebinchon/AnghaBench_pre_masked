
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int blake2b_state ;
struct TYPE_3__ {int fanout; int depth; void** reserved; void** salt; void** personal; scalar_t__ inner_length; scalar_t__ node_depth; int xof_length; int node_offset; int leaf_length; void* key_length; void* digest_length; } ;
typedef TYPE_1__ blake2b_param ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,void**,int) ;
 int FUNC_2 (void**,void const*,size_t) ;
 int FUNC_3 (void**,int ,int) ;
 int FUNC_4 (void**,int) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6( blake2b_state *VAR_3, size_t VAR_4, const void *VAR_5, size_t VAR_6 )
{
  blake2b_param VAR_7[1];

  if ( ( !VAR_4 ) || ( VAR_4 > VAR_2 ) ) return -1;

  if ( !VAR_5 || !VAR_6 || VAR_6 > VAR_1 ) return -1;

  VAR_7->digest_length = (uint8_t)VAR_4;
  VAR_7->key_length = (uint8_t)VAR_6;
  VAR_7->fanout = 1;
  VAR_7->depth = 1;
  FUNC_5( &VAR_7->leaf_length, 0 );
  FUNC_5( &VAR_7->node_offset, 0 );
  FUNC_5( &VAR_7->xof_length, 0 );
  VAR_7->node_depth = 0;
  VAR_7->inner_length = 0;
  FUNC_3( VAR_7->reserved, 0, sizeof( VAR_7->reserved ) );
  FUNC_3( VAR_7->salt, 0, sizeof( VAR_7->salt ) );
  FUNC_3( VAR_7->personal, 0, sizeof( VAR_7->personal ) );

  if( FUNC_0( VAR_3, VAR_7 ) < 0 ) return -1;

  {
    uint8_t VAR_8[VAR_0];
    FUNC_3( VAR_8, 0, VAR_0 );
    FUNC_2( VAR_8, VAR_5, VAR_6 );
    FUNC_1( VAR_3, VAR_8, VAR_0 );
    FUNC_4( VAR_8, VAR_0 );
  }
  return 0;
}
