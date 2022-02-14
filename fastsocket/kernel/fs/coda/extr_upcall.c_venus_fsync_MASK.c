
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union outputArgs {int dummy; } outputArgs ;
struct CodaFid {int dummy; } ;
struct TYPE_2__ {struct CodaFid VFid; } ;
union inputArgs {TYPE_1__ coda_fsync; } ;
struct super_block {int dummy; } ;


 int FUNC_0 (union inputArgs*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int*,union inputArgs*) ;
 int FUNC_4 (struct super_block*) ;
 int VAR_1 ;

int FUNC_5(struct super_block *VAR_2, struct CodaFid *VAR_3)
{
        union inputArgs *VAR_4;
        union outputArgs *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_6=FUNC_1(VAR_1);
 FUNC_2(VAR_0);

 VAR_4->coda_fsync.VFid = *VAR_3;
 VAR_8 = FUNC_3(FUNC_4(VAR_2), sizeof(union inputArgs),
       &VAR_7, VAR_4);

 FUNC_0(VAR_4, VAR_6);
 return VAR_8;
}
