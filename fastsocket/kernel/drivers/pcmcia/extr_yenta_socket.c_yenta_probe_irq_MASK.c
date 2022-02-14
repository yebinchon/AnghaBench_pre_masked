
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct yenta_socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct yenta_socket*,int ,int) ;
 int FUNC_1 (struct yenta_socket*,int ,int) ;
 int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned int FUNC_5(struct yenta_socket *VAR_7, u32 VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;





 FUNC_0(VAR_7, VAR_2, -1);
 FUNC_0(VAR_7, VAR_4, VAR_0);
 FUNC_1(VAR_7, VAR_5, 0);
 VAR_10 = FUNC_3() & VAR_8;
 for (VAR_9 = 1; VAR_9 < 16; VAR_9++) {
  if (!((VAR_10 >> VAR_9) & 1))
   continue;
  FUNC_1(VAR_7, VAR_5, VAR_6 | (VAR_9 << 4));
  FUNC_0(VAR_7, VAR_3, VAR_1);
  FUNC_4(100);
  FUNC_0(VAR_7, VAR_2, -1);
 }
 FUNC_0(VAR_7, VAR_4, 0);
 FUNC_1(VAR_7, VAR_5, 0);

 VAR_11 = FUNC_2(VAR_10) & 0xffff;

 return VAR_11;
}
