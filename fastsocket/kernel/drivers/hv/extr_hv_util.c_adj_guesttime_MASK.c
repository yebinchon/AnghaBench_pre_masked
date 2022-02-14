
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct adj_time_work {int work; int host_time; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct adj_time_work*) ;
 struct adj_time_work* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(u64 VAR_4, u8 VAR_5)
{
 struct adj_time_work *VAR_6;
 static s32 VAR_7 = 50;

 VAR_6 = FUNC_2(sizeof(struct adj_time_work), VAR_0);
 if (VAR_6 == ((void*)0))
  return;

 VAR_6->host_time = VAR_4;
 if ((VAR_5 & VAR_2) != 0) {
  FUNC_0(&VAR_6->work, VAR_3);
  FUNC_3(&VAR_6->work);
  return;
 }

 if ((VAR_5 & VAR_1) != 0 && VAR_7 > 0) {
  VAR_7--;
  FUNC_0(&VAR_6->work, VAR_3);
  FUNC_3(&VAR_6->work);
 } else
  FUNC_1(VAR_6);
}
