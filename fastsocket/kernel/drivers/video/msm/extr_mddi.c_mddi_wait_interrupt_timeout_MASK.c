
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mddi_info {int got_int; int int_enable; int int_wait; int int_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 long FUNC_3 (int ,int,int) ;

__attribute__((used)) static long FUNC_4(struct mddi_info *VAR_1,
     uint32_t VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1->int_lock, VAR_4);
 VAR_1->got_int &= ~VAR_2;
 VAR_1->int_enable |= VAR_2;
 FUNC_0(VAR_1->int_enable, VAR_0);
 FUNC_2(&VAR_1->int_lock, VAR_4);
 return FUNC_3(VAR_1->int_wait, VAR_1->got_int & VAR_2,
      VAR_3);
}
