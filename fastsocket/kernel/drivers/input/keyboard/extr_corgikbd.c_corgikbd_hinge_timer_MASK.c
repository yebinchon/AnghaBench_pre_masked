
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct corgikbd {int htimer; int lock; int input; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned long FUNC_5 (int *,int ) ;
 unsigned long VAR_12 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_13)
{
 struct corgikbd *VAR_14 = (struct corgikbd *) VAR_13;
 unsigned long VAR_15;
 unsigned long VAR_16;

 VAR_15 = FUNC_5(&VAR_9.dev, VAR_5) & (VAR_1 | VAR_2);
 VAR_15 |= (FUNC_0(VAR_0) != 0);
 if (VAR_15 != VAR_12) {
  VAR_10 = 0;
  VAR_12 = VAR_15;
 } else if (VAR_10 < VAR_4) {
  VAR_10++;
  if (VAR_10 >= VAR_4) {
   FUNC_6(&VAR_14->lock, VAR_16);

   FUNC_1(VAR_14->input, VAR_7, ((VAR_12 & VAR_1) != 0));
   FUNC_1(VAR_14->input, VAR_8, ((VAR_12 & VAR_2) != 0));
   FUNC_1(VAR_14->input, VAR_6, (FUNC_0(VAR_0) != 0));
   FUNC_2(VAR_14->input);

   FUNC_7(&VAR_14->lock, VAR_16);
  }
 }
 FUNC_3(&VAR_14->htimer, VAR_11 + FUNC_4(VAR_3));
}
