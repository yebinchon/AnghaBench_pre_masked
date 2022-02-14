
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int qboolean ;
typedef int fd_set ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static qboolean FUNC_8(void) {

  FUNC_6(VAR_1 != ((void*)0));



  FUNC_4( VAR_1 );
  if ( FUNC_3( VAR_1, VAR_0) )
  {
    return VAR_3;
  }


  {
    static struct timeval VAR_4;
    int VAR_5;
    fd_set VAR_6;

    VAR_5 = FUNC_0( VAR_1 );
    FUNC_2(&VAR_6);
    FUNC_1(VAR_5, &VAR_6);
    if ( FUNC_7(VAR_5+1, &VAR_6, ((void*)0), ((void*)0), &VAR_4) == 1 )
    {
      return(FUNC_5(VAR_1));
    }
  }


  return VAR_2;
}
