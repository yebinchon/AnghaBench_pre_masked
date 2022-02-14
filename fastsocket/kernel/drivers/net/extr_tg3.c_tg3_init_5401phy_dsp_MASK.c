
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tg3*,int ,int) ;
 int FUNC_1 (struct tg3*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tg3 *VAR_1)
{
 int VAR_2;



 VAR_2 = FUNC_0(VAR_1, VAR_0, 0x4c20);

 VAR_2 |= FUNC_1(VAR_1, 0x0012, 0x1804);
 VAR_2 |= FUNC_1(VAR_1, 0x0013, 0x1204);
 VAR_2 |= FUNC_1(VAR_1, 0x8006, 0x0132);
 VAR_2 |= FUNC_1(VAR_1, 0x8006, 0x0232);
 VAR_2 |= FUNC_1(VAR_1, 0x201f, 0x0a20);

 FUNC_2(40);

 return VAR_2;
}
