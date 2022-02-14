
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fnic {int * intr; int legacy_pba; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fnic*) ;
 int FUNC_1 (struct fnic*) ;
 scalar_t__ FUNC_2 (struct fnic*,int) ;
 scalar_t__ FUNC_3 (struct fnic*,int) ;
 scalar_t__ FUNC_4 (struct fnic*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 struct fnic *VAR_7 = VAR_6;
 u32 VAR_8;
 unsigned long VAR_9 = 0;

 VAR_8 = FUNC_5(VAR_7->legacy_pba);
 if (!VAR_8)
  return VAR_4;

 if (VAR_8 & (1 << VAR_1)) {
  FUNC_6(&VAR_7->intr[VAR_1]);
  FUNC_0(VAR_7);
 }

 if (VAR_8 & (1 << VAR_0)) {
  FUNC_6(&VAR_7->intr[VAR_0]);
  FUNC_1(VAR_7);
 }

 if (VAR_8 & (1 << VAR_2)) {
  VAR_9 += FUNC_4(VAR_7, -1);
  VAR_9 += FUNC_3(VAR_7, -1);
  VAR_9 += FUNC_2(VAR_7, -1);

  FUNC_7(&VAR_7->intr[VAR_2],
      VAR_9,
      1 ,
      1 );
 }

 return VAR_3;
}
