
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
typedef scalar_t__ mutex_t ;
struct TYPE_5__ {int id; } ;
struct TYPE_7__ {TYPE_1__ object; int mutex; } ;
typedef TYPE_3__ mutex_st ;
struct TYPE_6__ {int ret_code; } ;
struct TYPE_8__ {TYPE_2__ wait; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static s32 FUNC_4(mutex_t VAR_4,u32 VAR_5,u8 VAR_6)
{
 u32 VAR_7;
 mutex_st *VAR_8;

 if(VAR_4==VAR_0 || FUNC_1(VAR_4)!=VAR_1) return -1;

 VAR_8 = (mutex_st*)FUNC_3(&VAR_2,FUNC_0(VAR_4),&VAR_7);
 if(!VAR_8) return -1;

 FUNC_2(&VAR_8->mutex,VAR_8->object.id,VAR_6,VAR_5,VAR_7);
 return VAR_3->wait.ret_code;
}
