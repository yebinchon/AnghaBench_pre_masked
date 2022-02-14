
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* json; int env; void* ud; TYPE_2__ const* handlers; } ;
typedef TYPE_1__ state_t ;
struct TYPE_6__ {int (* end_document ) (void*) ;int (* start_document ) (void*) ;} ;
typedef TYPE_2__ jsonsax_handlers_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

int FUNC_4( const char* VAR_1, const jsonsax_handlers_t* VAR_2, void* VAR_3 )
{
  state_t VAR_4;
  int VAR_5;

  VAR_4.json = VAR_1;
  VAR_4.handlers = VAR_2;
  VAR_4.ud = VAR_3;

  if ( ( VAR_5 = FUNC_1( VAR_4.env ) ) == 0 )
  {
    if ( VAR_2->start_document )
      VAR_2->start_document( VAR_3 );

    FUNC_0(&VAR_4);

    if ( VAR_2->end_document )
      VAR_2->end_document( VAR_3 );

    VAR_5 = VAR_0;
  }

  return VAR_5;
}
