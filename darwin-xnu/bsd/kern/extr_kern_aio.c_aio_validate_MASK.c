
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fileproc {int f_flags; TYPE_5__* f_fglob; } ;
struct TYPE_6__ {int sigev_notify; int sigev_signo; } ;
struct TYPE_7__ {scalar_t__ aio_lio_opcode; scalar_t__ aio_nbytes; scalar_t__ aio_buf; scalar_t__ aio_offset; int aio_fildes; TYPE_1__ aio_sigevent; } ;
struct TYPE_8__ {int flags; int procp; TYPE_2__ aiocb; } ;
typedef TYPE_3__ aio_workq_entry ;
struct TYPE_9__ {int fg_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;



 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int ,int ,struct fileproc*,int) ;
 int FUNC_2 (int ,int ,struct fileproc**,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5( aio_workq_entry *VAR_20 )
{
 struct fileproc *VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_23 = 0;

 if ( (VAR_20->flags & VAR_2) != 0 ) {
  if ( VAR_20->aiocb.aio_lio_opcode == VAR_14 )
   VAR_20->flags |= VAR_3;
  else if ( VAR_20->aiocb.aio_lio_opcode == VAR_15 )
   VAR_20->flags |= VAR_4;
  else if ( VAR_20->aiocb.aio_lio_opcode == VAR_13 )
   return( 0 );
  else
   return( VAR_7 );
 }

 VAR_22 = VAR_10;
 if ( (VAR_20->flags & (VAR_4 | VAR_1 | VAR_0)) != 0 ) {
  VAR_22 = VAR_11;
 }

 if ( (VAR_20->flags & (VAR_3 | VAR_4)) != 0 ) {
  if ( VAR_20->aiocb.aio_nbytes > VAR_12 ||
    VAR_20->aiocb.aio_buf == VAR_19 ||
    VAR_20->aiocb.aio_offset < 0 )
   return( VAR_7 );
 }
 switch ( VAR_20->aiocb.aio_sigevent.sigev_notify ) {
 case 129:
     {
  int VAR_24;


  VAR_24 = VAR_20->aiocb.aio_sigevent.sigev_signo;
  if ( VAR_24 <= 0 || VAR_24 >= VAR_16 ||
    VAR_24 == VAR_17 || VAR_24 == VAR_18 )
   return (VAR_7);
     }
     break;

 case 130:
  break;

 case 128:


 default:
  return (VAR_7);
 }




 FUNC_3(VAR_20->procp);

 VAR_23 = FUNC_2( VAR_20->procp, VAR_20->aiocb.aio_fildes, &VAR_21 , 1);
 if ( VAR_23 == 0 ) {
  if ( (VAR_21->f_fglob->fg_flag & VAR_22) == 0 ) {

   VAR_23 = VAR_6;
  }
  else if ( FUNC_0(VAR_21->f_fglob) != VAR_5 ) {

   VAR_23 = VAR_8;
  } else
          VAR_21->f_flags |= VAR_9;

  FUNC_1(VAR_20->procp, VAR_20->aiocb.aio_fildes, VAR_21 , 1);
 }
 else {
  VAR_23 = VAR_6;
 }

 FUNC_4(VAR_20->procp);

 return( VAR_23 );

}
