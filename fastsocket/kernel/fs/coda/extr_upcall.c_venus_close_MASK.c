
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vuid_t ;
typedef union outputArgs {int dummy; } outputArgs ;
struct CodaFid {int dummy; } ;
struct TYPE_4__ {int flags; struct CodaFid VFid; } ;
struct TYPE_3__ {int uid; } ;
union inputArgs {TYPE_2__ coda_close; TYPE_1__ ih; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (union inputArgs*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int*,union inputArgs*) ;
 int FUNC_4 (struct super_block*) ;
 int VAR_1 ;

int FUNC_5(struct super_block *VAR_2, struct CodaFid *VAR_3, int VAR_4,
  vuid_t VAR_5)
{
 union inputArgs *VAR_6;
 union outputArgs *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_1);
 FUNC_2(VAR_0);

 VAR_6->ih.uid = VAR_5;
        VAR_6->coda_close.VFid = *VAR_3;
        VAR_6->coda_close.flags = VAR_4;

 VAR_10 = FUNC_3(FUNC_4(VAR_2), VAR_8, &VAR_9, VAR_6);

 FUNC_0(VAR_6, VAR_8);
        return VAR_10;
}
