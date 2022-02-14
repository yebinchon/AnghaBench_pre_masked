
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ memory_object_size_t ;
typedef int memory_object_offset_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_6__ {TYPE_1__* v_ubcinfo; } ;
struct TYPE_5__ {int ui_control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__,int *,int*,int,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(vnode_t VAR_12, off_t VAR_13, off_t VAR_14, off_t *VAR_15, int VAR_16, int *VAR_17)
{
 memory_object_size_t VAR_18;
 kern_return_t VAR_19;
 int VAR_20 = 0;
 int VAR_21 = VAR_6;

 if ( !FUNC_0(VAR_12))
         return (0);
 if ((VAR_16 & (VAR_7 | VAR_9 | VAR_8)) == 0)
         return (0);
 if (VAR_14 <= VAR_13)
         return (1);

 if (VAR_16 & VAR_7)



  VAR_20 = (VAR_1 | VAR_2);

 if (VAR_16 & VAR_10)



         VAR_20 |= VAR_3;

 if (VAR_16 & VAR_9)



         VAR_21 = VAR_5;

 if (VAR_16 & VAR_8)




         VAR_21 = VAR_4;

 VAR_13 = FUNC_3(VAR_13);
 VAR_14 = FUNC_2(VAR_14);
 VAR_18 = (memory_object_size_t)VAR_14 - VAR_13;


 VAR_19 = FUNC_1(VAR_12->v_ubcinfo->ui_control,
       VAR_13, VAR_18,
       (memory_object_offset_t *)VAR_15,
       VAR_17, VAR_21, VAR_20,
       VAR_11);

 return ((VAR_19 == VAR_0) ? 1 : 0);
}
