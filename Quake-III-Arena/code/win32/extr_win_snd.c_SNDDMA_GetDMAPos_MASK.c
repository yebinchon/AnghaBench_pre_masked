
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int samples; } ;
struct TYPE_10__ {TYPE_1__* lpVtbl; } ;
struct TYPE_8__ {int sample; } ;
struct TYPE_9__ {TYPE_2__ u; int wType; } ;
struct TYPE_7__ {int (* GetCurrentPosition ) (TYPE_4__*,int*,int *) ;} ;
typedef TYPE_3__ MMTIME ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int*,int *) ;

int FUNC_1( void ) {
 MMTIME VAR_5;
 int VAR_6;
 DWORD VAR_7;

 if ( !VAR_2 ) {
  return 0;
 }

 VAR_5.wType = VAR_0;
 VAR_3->lpVtbl->GetCurrentPosition(VAR_3, &VAR_5.u.sample, &VAR_7);

 VAR_6 = VAR_5.u.sample;

 VAR_6 >>= VAR_4;

 VAR_6 &= (VAR_1.samples-1);

 return VAR_6;
}
