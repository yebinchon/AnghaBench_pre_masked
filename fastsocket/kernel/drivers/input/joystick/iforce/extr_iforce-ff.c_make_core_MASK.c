
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct iforce {TYPE_1__* core_effects; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (size_t) ;
 unsigned char FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 unsigned char FUNC_3 (struct iforce*,size_t) ;
 int FUNC_4 (struct iforce*,size_t,int) ;
 int FUNC_5 (struct iforce*,int ,unsigned char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct iforce* VAR_2, u16 VAR_3, u16 VAR_4, u16 VAR_5,
 u8 VAR_6, u8 VAR_7, u16 VAR_8, u16 VAR_9, u16 VAR_10,
 u16 VAR_11, u16 VAR_12)
{
 unsigned char VAR_13[14];

 VAR_8 = FUNC_2(VAR_8);
 VAR_9 = FUNC_2(VAR_9);
 VAR_11 = FUNC_2(VAR_11);

 VAR_13[0] = FUNC_1(VAR_3);
 VAR_13[1] = VAR_6;
 VAR_13[2] = FUNC_1(VAR_7) | FUNC_3(VAR_2, VAR_10);

 VAR_13[3] = FUNC_1(VAR_8);
 VAR_13[4] = FUNC_0(VAR_8);

 VAR_13[5] = FUNC_0(VAR_12);

 VAR_13[6] = FUNC_1(VAR_11);
 VAR_13[7] = FUNC_0(VAR_11);

 VAR_13[8] = FUNC_1(VAR_4);
 VAR_13[9] = FUNC_0(VAR_4);
 VAR_13[10] = FUNC_1(VAR_5);
 VAR_13[11] = FUNC_0(VAR_5);

 VAR_13[12] = FUNC_1(VAR_9);
 VAR_13[13] = FUNC_0(VAR_9);




 FUNC_5(VAR_2, VAR_0, VAR_13);


 if (FUNC_6(VAR_1, VAR_2->core_effects[VAR_3].flags)) {

  FUNC_4(VAR_2, VAR_3, 1);
 }

 return 0;
}
