
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct airo_info {int flags; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int window; int rx; } ;
typedef TYPE_1__ miccntx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3 (struct airo_info *VAR_4,miccntx *VAR_5,int VAR_6,u32 VAR_7)
{
 u32 VAR_8,VAR_9;




 if (VAR_6) {
  if (FUNC_2(VAR_1, &VAR_4->flags)) {
   FUNC_1 (VAR_1, &VAR_4->flags);
   VAR_5->window = (VAR_7 > 33) ? VAR_7 : 33;
   VAR_5->rx = 0;
  }
 } else if (FUNC_2(VAR_2, &VAR_4->flags)) {
  FUNC_1 (VAR_2, &VAR_4->flags);
  VAR_5->window = (VAR_7 > 33) ? VAR_7 : 33;
  VAR_5->rx = 0;
 }


 VAR_8 = VAR_7 - (VAR_5->window - 33);


 if ((s32)VAR_8 < 0)
  return VAR_0;

 if ( VAR_8 > 64 ) {

  FUNC_0(VAR_5,VAR_7);
  return VAR_3;
 }


 VAR_8 >>= 1;
 VAR_9 = 1 << VAR_8;

 if (!(VAR_5->rx & VAR_9)) {


  VAR_5->rx |= VAR_9;

  FUNC_0(VAR_5,VAR_7);

  return VAR_3;
 }
 return VAR_0;
}
