
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int tlbiel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int,int) ;
 int FUNC_1 (unsigned long,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(unsigned long VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 unsigned int VAR_8 = VAR_7 && FUNC_2(VAR_1);
 int VAR_9 = !FUNC_2(VAR_0);

 if (VAR_8)
  VAR_8 = VAR_2[VAR_5].tlbiel;
 if (VAR_9 && !VAR_8)
  FUNC_3(&VAR_3);
 asm volatile("ptesync": : :"memory");
 if (VAR_8) {
  FUNC_1(VAR_4, VAR_5, VAR_6);
  asm volatile("ptesync": : :"memory");
 } else {
  FUNC_0(VAR_4, VAR_5, VAR_6);
  asm volatile("eieio; tlbsync; ptesync": : :"memory");
 }
 if (VAR_9 && !VAR_8)
  FUNC_4(&VAR_3);
}
