
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ipath_hwerror_msgs {int mask; int msg; } ;
struct TYPE_3__ {int mask; int msg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,size_t,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(u64 VAR_1,
      const struct ipath_hwerror_msgs *VAR_2,
      size_t VAR_3,
      char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 const int VAR_7 =
     FUNC_0(VAR_0);

 for (VAR_6=0; VAR_6<VAR_7; VAR_6++) {
  if (VAR_1 & VAR_0[VAR_6].mask) {
   FUNC_1(VAR_4, VAR_5,
        VAR_0[VAR_6].msg);
  }
 }

 for (VAR_6=0; VAR_6<VAR_3; VAR_6++) {
  if (VAR_1 & VAR_2[VAR_6].mask) {
   FUNC_1(VAR_4, VAR_5, VAR_2[VAR_6].msg);
  }
 }
}
