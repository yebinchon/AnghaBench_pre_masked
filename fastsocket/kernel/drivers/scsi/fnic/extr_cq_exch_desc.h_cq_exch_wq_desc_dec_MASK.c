
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cq_exch_wq_desc {int exch_status; } ;
struct cq_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cq_desc*,int*,int*,int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct cq_exch_wq_desc *VAR_1,
           u8 *VAR_2,
           u8 *VAR_3,
           u16 *VAR_4,
           u16 *VAR_5,
           u8 *VAR_6)
{
 FUNC_0((struct cq_desc *)VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5);
 *VAR_6 = VAR_1->exch_status & VAR_0;
}
