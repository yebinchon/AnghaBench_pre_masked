
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_4__ {int i; } ;
struct TYPE_5__ {int flags; double r; TYPE_1__ u; int n; int z; int enc; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,double*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(Mem *VAR_3){
  if( (VAR_3->flags & (VAR_1|VAR_0))==0 ){
    double VAR_4;
    i64 VAR_5;
    u8 VAR_6 = VAR_3->enc;
    if( (VAR_3->flags&VAR_2)==0 ) return;
    if( FUNC_0(VAR_3->z, &VAR_4, VAR_3->n, VAR_6)==0 ) return;
    if( 0==FUNC_1(VAR_3->z, &VAR_5, VAR_3->n, VAR_6) ){
      VAR_3->u.i = VAR_5;
      VAR_3->flags |= VAR_0;
    }else{
      VAR_3->r = VAR_4;
      VAR_3->flags |= VAR_1;
    }
  }
}
