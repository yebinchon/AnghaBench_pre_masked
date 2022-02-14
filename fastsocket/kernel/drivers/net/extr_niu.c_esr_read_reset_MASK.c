
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct niu {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct niu*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_3, u32 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_3->port, VAR_2,
   VAR_1);
 if (VAR_5 >= 0) {
  *VAR_4 = (VAR_5 & 0xffff);
  VAR_5 = FUNC_0(VAR_3, VAR_3->port, VAR_2,
    VAR_0);
  if (VAR_5 >= 0) {
   *VAR_4 |= ((VAR_5 & 0xffff) << 16);
   VAR_5 = 0;
  }
 }
 return VAR_5;
}
