
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifnet {int dummy; } ;
struct if_protolistreq64 {int ifpl_list; int ifpl_count; int ifpl_reserved; } ;
struct if_protolistreq32 {int ifpl_list; int ifpl_count; int ifpl_reserved; } ;
typedef int ifpl ;
typedef struct if_protolistreq64* caddr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (struct if_protolistreq64*,struct if_protolistreq64*,int) ;
 int FUNC_3 (struct ifnet*,int *,int ) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(struct ifnet *VAR_1, u_long VAR_2, caddr_t VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2) {
 case 129: {
  struct if_protolistreq32 VAR_5;

  FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5));
  if (VAR_5.ifpl_reserved != 0) {
   VAR_4 = VAR_0;
   break;
  }
  VAR_4 = FUNC_3(VAR_1, &VAR_5.ifpl_count,
      FUNC_0(VAR_5.ifpl_list));
  FUNC_2(&VAR_5, VAR_3, sizeof(VAR_5));
  break;
 }
 case 128: {
  struct if_protolistreq64 VAR_6;

  FUNC_2(VAR_3, &VAR_6, sizeof(VAR_6));
  if (VAR_6.ifpl_reserved != 0) {
   VAR_4 = VAR_0;
   break;
  }
  VAR_4 = FUNC_3(VAR_1, &VAR_6.ifpl_count,
      VAR_6.ifpl_list);
  FUNC_2(&VAR_6, VAR_3, sizeof(VAR_6));
  break;
 }
 default:
  FUNC_1(0);

 }

 return (VAR_4);
}
