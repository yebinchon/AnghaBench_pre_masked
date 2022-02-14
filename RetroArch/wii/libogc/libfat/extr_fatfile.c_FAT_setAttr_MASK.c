
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int offset; scalar_t__ sector; int cluster; } ;
struct TYPE_10__ {TYPE_2__ dataEnd; } ;
struct TYPE_8__ {int lock; int cache; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY_POSITION ;
typedef TYPE_3__ DIR_ENTRY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,char const*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char const*,char) ;

int FUNC_8(const char *VAR_2, uint8_t VAR_3) {


 DIR_ENTRY_POSITION VAR_4;
 PARTITION *VAR_5 = ((void*)0);
 DIR_ENTRY VAR_6;


 VAR_5 = FUNC_5( VAR_2 );


 if( !VAR_5 )
  return -1;


 if (FUNC_7 (VAR_2, ':') != ((void*)0))
  VAR_2 = FUNC_7 (VAR_2, ':') + 1;
 if (FUNC_7 (VAR_2, ':') != ((void*)0))
  return -1;


 if( !FUNC_2 (VAR_5, &VAR_6, VAR_2, ((void*)0)) )
  return -1;


 VAR_4 = VAR_6.dataEnd;


 FUNC_4(&VAR_5->lock);


 FUNC_1 (
  VAR_5->cache
  , &VAR_3
  , FUNC_3( VAR_5 , VAR_4.cluster ) + VAR_4.sector
  , VAR_4.offset * VAR_0 + VAR_1
  , 1
 );


 if ( !FUNC_0( VAR_5->cache ) ) {
  FUNC_6(&VAR_5->lock);
  return -1;
 }


 FUNC_6(&VAR_5->lock);

 return 0;
}
