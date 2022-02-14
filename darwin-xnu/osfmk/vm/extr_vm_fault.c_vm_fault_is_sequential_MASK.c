
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int vm_behavior_t ;
typedef int UInt32 ;
struct TYPE_3__ {int sequential; scalar_t__ last_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





__attribute__((used)) static
void
FUNC_1(
 vm_object_t VAR_3,
 vm_object_offset_t VAR_4,
 vm_behavior_t VAR_5)
{
        vm_object_offset_t VAR_6;
 int VAR_7;
 int VAR_8;

        VAR_6 = VAR_3->last_alloc;
 VAR_7 = VAR_3->sequential;
 VAR_8 = VAR_7;

 switch (VAR_5) {
 case 130:



         VAR_7 = 0;
         break;

 case 128:
         if (VAR_4 && VAR_6 == VAR_4 - VAR_2) {



          if (VAR_7 < VAR_0)
           VAR_7 += VAR_1;
  } else {



          VAR_7 = 0;
  }
         break;

 case 129:
         if (VAR_6 && VAR_6 == VAR_4 + VAR_2) {



          if (VAR_7 > -VAR_0)
           VAR_7 -= VAR_1;
  } else {



          VAR_7 = 0;
  }
         break;

 case 131:
 default:
         if (VAR_4 && VAR_6 == (VAR_4 - VAR_2)) {



          if (VAR_7 < 0)
           VAR_7 = 0;
          if (VAR_7 < VAR_0)
           VAR_7 += VAR_1;

  } else if (VAR_6 && VAR_6 == (VAR_4 + VAR_2)) {



          if (VAR_7 > 0)
           VAR_7 = 0;
          if (VAR_7 > -VAR_0)
           VAR_7 -= VAR_1;
  } else {



          VAR_7 = 0;
  }
         break;
 }
 if (VAR_7 != VAR_8) {
         if (!FUNC_0(VAR_8, VAR_7, (UInt32 *)&VAR_3->sequential)) {




          return;
  }
 }
 VAR_3->last_alloc = VAR_4;
}
