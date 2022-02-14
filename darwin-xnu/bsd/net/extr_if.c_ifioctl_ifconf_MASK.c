
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifconf64 {int ifc_len; int ifc_req; } ;
struct ifconf32 {int ifc_len; int ifc_req; } ;
typedef int ifc ;
typedef struct ifconf64* caddr_t ;


 int FUNC_0 (int ) ;




 int FUNC_1 (int ) ;
 int FUNC_2 (struct ifconf64*,struct ifconf64*,int) ;
 int FUNC_3 (int,int ,int *) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(u_long VAR_0, caddr_t VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_0) {
 case 131:
 case 129: {
  struct ifconf32 VAR_3;
  FUNC_2(VAR_1, &VAR_3, sizeof (VAR_3));
  VAR_2 = FUNC_3(VAR_0, FUNC_0(VAR_3.ifc_req),
      &VAR_3.ifc_len);
  FUNC_2(&VAR_3, VAR_1, sizeof (VAR_3));
  break;
 }

 case 128:
 case 130: {
  struct ifconf64 VAR_4;
  FUNC_2(VAR_1, &VAR_4, sizeof (VAR_4));
  VAR_2 = FUNC_3(VAR_0, VAR_4.ifc_req, &VAR_4.ifc_len);
  FUNC_2(&VAR_4, VAR_1, sizeof (VAR_4));
  break;
 }

 default:
  FUNC_1(0);

 }

 return (VAR_2);
}
