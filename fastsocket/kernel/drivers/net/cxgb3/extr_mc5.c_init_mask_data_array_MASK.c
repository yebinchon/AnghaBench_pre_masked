
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mc5 {unsigned int tcam_size; scalar_t__ mode; struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct adapter*,int,int,int) ;
 scalar_t__ FUNC_1 (struct adapter*,scalar_t__,scalar_t__) ;
 unsigned int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mc5 *VAR_3, u32 VAR_4,
    u32 VAR_5, u32 VAR_6,
    int VAR_7)
{
 unsigned int VAR_8;
 struct adapter *VAR_9 = VAR_3->adapter;





 unsigned int VAR_10 = VAR_3->tcam_size;
 unsigned int VAR_11 = FUNC_2(VAR_9, VAR_1);

 if (VAR_3->mode == VAR_2) {
  VAR_10 *= 2;
  VAR_11 *= 2;
 }


 FUNC_0(VAR_9, 0, 0, 0);
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
  if (FUNC_1(VAR_9, VAR_5 + (VAR_8 << VAR_7),
         VAR_6))
   return -1;


 FUNC_0(VAR_9, 0xffffffff, 0xffffffff, 0xff);
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  if (VAR_8 == VAR_11)
   FUNC_3(VAR_9, VAR_0,
         VAR_3->mode == VAR_2 ?
         0xfffffff9 : 0xfffffffd);
  if (FUNC_1(VAR_9, VAR_4 + (VAR_8 << VAR_7),
         VAR_6))
   return -1;
 }
 return 0;
}
