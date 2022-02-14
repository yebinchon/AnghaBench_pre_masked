
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct work_interval {int wi_ref_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct work_interval*,int) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_3(struct work_interval *VAR_1)
{
 uint32_t VAR_2;
 VAR_2 = FUNC_1(&VAR_1->wi_ref_count,
                                       1, VAR_0);
 FUNC_0(VAR_2 > 0);

 if (VAR_2 == 1) {


  FUNC_2(VAR_1, sizeof(struct work_interval));
 }
}
