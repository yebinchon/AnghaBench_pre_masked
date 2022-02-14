
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct if_clonereq64 {int ifcru_buffer; int ifcr_total; int ifcr_count; } ;
struct if_clonereq32 {int ifcru_buffer; int ifcr_total; int ifcr_count; } ;
typedef int ifcr ;
typedef struct if_clonereq64* caddr_t ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct if_clonereq64*,struct if_clonereq64*,int) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(u_long VAR_0, caddr_t VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_0) {
 case 129: {
  struct if_clonereq32 VAR_3;
  FUNC_2(VAR_1, &VAR_3, sizeof (VAR_3));
  VAR_2 = FUNC_3(VAR_3.ifcr_count, &VAR_3.ifcr_total,
      FUNC_0(VAR_3.ifcru_buffer));
  FUNC_2(&VAR_3, VAR_1, sizeof (VAR_3));
  break;
 }

 case 128: {
  struct if_clonereq64 VAR_4;
  FUNC_2(VAR_1, &VAR_4, sizeof (VAR_4));
  VAR_2 = FUNC_3(VAR_4.ifcr_count, &VAR_4.ifcr_total,
      VAR_4.ifcru_buffer);
  FUNC_2(&VAR_4, VAR_1, sizeof (VAR_4));
  break;
 }

 default:
  FUNC_1(0);

 }

 return (VAR_2);
}
