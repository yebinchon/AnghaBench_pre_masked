
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uio_t ;
typedef int off_t ;
struct TYPE_4__ {int uio_flags; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (size_t) ;
 TYPE_1__* FUNC_3 (int,int ,int,int,void*,size_t) ;
 int VAR_1 ;

uio_t FUNC_4( int VAR_2,
      off_t VAR_3,
      int VAR_4,
      int VAR_5 )
{
 void * VAR_6;
 size_t VAR_7;
 uio_t VAR_8;

 VAR_7 = FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_7);
 VAR_8 = FUNC_3( VAR_2,
          VAR_3,
          VAR_4,
          VAR_5,
          VAR_6,
          VAR_7 );
 if (VAR_8 != 0) {

  VAR_8->uio_flags |= VAR_0;



 }

 return( VAR_8 );
}
