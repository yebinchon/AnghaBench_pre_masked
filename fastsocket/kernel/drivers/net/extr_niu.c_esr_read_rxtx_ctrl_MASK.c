
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct niu {int port; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (struct niu*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_1, unsigned long VAR_2, u32 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_1->port, VAR_0, FUNC_1(VAR_2));
 if (VAR_4 >= 0) {
  *VAR_3 = (VAR_4 & 0xffff);
  VAR_4 = FUNC_2(VAR_1, VAR_1->port, VAR_0,
    FUNC_0(VAR_2));
  if (VAR_4 >= 0)
   *VAR_3 |= ((VAR_4 & 0xffff) << 16);
  VAR_4 = 0;
 }
 return VAR_4;
}
