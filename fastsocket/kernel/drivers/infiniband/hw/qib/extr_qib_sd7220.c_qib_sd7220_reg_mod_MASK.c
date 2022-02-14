
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {int sdepb_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct qib_devdata*,int,int) ;
 int FUNC_1 (struct qib_devdata*,int ,int,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct qib_devdata*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct qib_devdata *VAR_6, int VAR_7, u32 VAR_8,
         u32 VAR_9, u32 VAR_10)
{
 u16 VAR_11;
 u64 VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 unsigned long VAR_16;

 switch (VAR_7) {
 case 130:
  VAR_11 = VAR_4;
  break;

 case 129:
 case 128:
  VAR_11 = VAR_5;
  break;

 default:
  return -1;
 }





 FUNC_3(&VAR_6->cspec->sdepb_lock, VAR_16);

 VAR_13 = FUNC_0(VAR_6, VAR_7, 1);
 if (VAR_13 < 0) {
  FUNC_4(&VAR_6->cspec->sdepb_lock, VAR_16);
  return -1;
 }
 VAR_15 = 0;
 for (VAR_14 = VAR_3; VAR_14; --VAR_14) {
  VAR_12 = FUNC_2(VAR_6, VAR_11);
  if (VAR_12 & VAR_2)
   break;
  FUNC_5(5);
 }

 if (VAR_14 > 0) {
  VAR_14 = 1;
  if (VAR_10 != 0xFF) {




   VAR_12 = VAR_8 | VAR_1;
   VAR_14 = FUNC_1(VAR_6, VAR_11, VAR_12, &VAR_12);
  }
  if (VAR_14 > 0 && VAR_10 != 0) {



   VAR_9 = (VAR_9 & VAR_10) | (VAR_12 & ~VAR_10);
   VAR_12 = VAR_8 | (VAR_9 & VAR_0);
   VAR_14 = FUNC_1(VAR_6, VAR_11, VAR_12, &VAR_12);
  }
 }





 if (FUNC_0(VAR_6, VAR_7, -1) < 0)
  VAR_15 = -1;
 else
  VAR_15 = VAR_12 & VAR_0;

 FUNC_4(&VAR_6->cspec->sdepb_lock, VAR_16);
 if (VAR_14 <= 0)
  VAR_15 = -1;
 return VAR_15;
}
