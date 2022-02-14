
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int i64 ;
typedef int Vdbe ;
struct TYPE_7__ {int iValue; char* zToken; } ;
struct TYPE_9__ {int flags; TYPE_1__ u; } ;
struct TYPE_8__ {int * pVdbe; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,int,int) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (char const*,int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*,char*,char*,char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int *,int ,int ,int,int ,char*,int ) ;

__attribute__((used)) static void FUNC_8(Parse *VAR_6, Expr *VAR_7, int VAR_8, int VAR_9){
  Vdbe *VAR_10 = VAR_6->pVdbe;
  if( VAR_7->flags & VAR_0 ){
    int VAR_11 = VAR_7->u.iValue;
    FUNC_0( VAR_11>=0 );
    if( VAR_8 ) VAR_11 = -VAR_11;
    FUNC_6(VAR_10, VAR_2, VAR_11, VAR_9);
  }else{
    int VAR_12;
    i64 VAR_13;
    const char *VAR_14 = VAR_7->u.zToken;
    FUNC_0( VAR_14!=0 );
    VAR_12 = FUNC_3(VAR_14, &VAR_13, FUNC_5(VAR_14), VAR_5);
    if( VAR_12==0 || (VAR_12==2 && VAR_8) ){
      char *VAR_15;
      if( VAR_8 ){ VAR_13 = VAR_12==2 ? VAR_4 : -VAR_13; }
      VAR_15 = FUNC_2(VAR_10, (char*)&VAR_13);
      FUNC_7(VAR_10, VAR_1, 0, VAR_9, 0, VAR_15, VAR_3);
    }else{



      FUNC_1(VAR_10, VAR_14, VAR_8, VAR_9);

    }
  }
}
