
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sig; int tsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int *,int ,int ,int *) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_5(int VAR_9, int VAR_10)
{
 int VAR_11;
 switch (VAR_9) {
  case 130: {
   return FUNC_2(VAR_10);
  }
  case 129: {
   return VAR_7;
  }
  case 128: {
   int VAR_12 = VAR_10 >> 8;
   int VAR_13 = VAR_10 & 255;
   if (!FUNC_0(VAR_1)) return -VAR_3;
   if (!((1 << VAR_12) & VAR_0)) return -VAR_3;
   if (FUNC_3(VAR_13)) return -VAR_3;
   if (VAR_8[VAR_13].tsk) return -VAR_3;
   VAR_11 = FUNC_4(VAR_13, &VAR_6, 0, VAR_4, ((void*)0));
   if (VAR_11) return VAR_11;
   VAR_8[VAR_13].sig = VAR_12;
   VAR_8[VAR_13].tsk = VAR_5;
   return VAR_13;
  }
  case 131: {
   if (FUNC_3(VAR_10)) return -VAR_3;
   if (!VAR_8[VAR_10].tsk) return 0;
   if (VAR_8[VAR_10].tsk != VAR_5) return -VAR_3;
   FUNC_1(VAR_10);
   return 0;
  }
 }
 return -VAR_2;
}
