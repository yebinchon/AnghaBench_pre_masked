
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spitzkbd {int htimer; int lock; int input; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned long VAR_10 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_11)
{
 struct spitzkbd *VAR_12 = (struct spitzkbd *) VAR_11;
 unsigned long VAR_13;
 unsigned long VAR_14;

 VAR_13 = FUNC_1(VAR_3) & (FUNC_0(VAR_3)|FUNC_0(VAR_4));
 VAR_13 |= (FUNC_1(VAR_2) & FUNC_0(VAR_2));
 if (VAR_13 != VAR_10) {
  VAR_8 = 0;
  VAR_10 = VAR_13;
 } else if (VAR_8 < VAR_1) {
  VAR_8++;
 }

 if (VAR_8 >= VAR_1) {
  FUNC_6(&VAR_12->lock, VAR_14);

  FUNC_2(VAR_12->input, VAR_6, ((FUNC_1(VAR_3) & FUNC_0(VAR_3)) != 0));
  FUNC_2(VAR_12->input, VAR_7, ((FUNC_1(VAR_4) & FUNC_0(VAR_4)) != 0));
  FUNC_2(VAR_12->input, VAR_5, ((FUNC_1(VAR_2) & FUNC_0(VAR_2)) != 0));
  FUNC_3(VAR_12->input);

  FUNC_7(&VAR_12->lock, VAR_14);
 } else {
  FUNC_4(&VAR_12->htimer, VAR_9 + FUNC_5(VAR_0));
 }
}
