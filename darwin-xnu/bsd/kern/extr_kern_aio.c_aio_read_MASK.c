
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_read_args {scalar_t__ aiocbp; } ;
typedef scalar_t__ proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int,int,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;

int
FUNC_3(proc_t VAR_5, struct aio_read_args *VAR_6, int *VAR_7 )
{
 int VAR_8;

 FUNC_1( (FUNC_0(VAR_2, VAR_1)) | VAR_4,
          (int)VAR_5, (int)VAR_6->aiocbp, 0, 0, 0 );

 *VAR_7 = 0;

 VAR_8 = FUNC_2( VAR_5, VAR_6->aiocbp, VAR_0 );
 if ( VAR_8 != 0 )
  *VAR_7 = -1;

 FUNC_1( (FUNC_0(VAR_2, VAR_1)) | VAR_3,
          (int)VAR_5, (int)VAR_6->aiocbp, VAR_8, 0, 0 );

 return( VAR_8 );

}
