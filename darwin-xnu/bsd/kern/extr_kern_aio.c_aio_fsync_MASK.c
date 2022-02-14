
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_fsync_args {int op; scalar_t__ aiocbp; } ;
typedef scalar_t__ proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int,int,int,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;

int
FUNC_3(proc_t VAR_9, struct aio_fsync_args *VAR_10, int *VAR_11 )
{
 int VAR_12;
 int VAR_13;

 FUNC_1( (FUNC_0(VAR_3, VAR_2)) | VAR_5,
          (int)VAR_9, (int)VAR_10->aiocbp, VAR_10->op, 0, 0 );

 *VAR_11 = 0;

 if (VAR_10->op == VAR_8 || VAR_10->op == 0)
  VAR_13 = VAR_1;
 else if ( VAR_10->op == VAR_7 )
  VAR_13 = VAR_0;
 else {
  *VAR_11 = -1;
  VAR_12 = VAR_6;
  goto ExitRoutine;
 }

 VAR_12 = FUNC_2( VAR_9, VAR_10->aiocbp, VAR_13 );
 if ( VAR_12 != 0 )
  *VAR_11 = -1;

ExitRoutine:
 FUNC_1( (FUNC_0(VAR_3, VAR_2)) | VAR_4,
          (int)VAR_9, (int)VAR_10->aiocbp, VAR_12, 0, 0 );

 return( VAR_12 );

}
