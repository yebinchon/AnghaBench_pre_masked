
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bcm3510_state {int hab_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm3510_state*,int*,int) ;
 int FUNC_1 (struct bcm3510_state*,int*,int) ;
 int FUNC_2 (int*,int,int (*) (char*)) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,int*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct bcm3510_state *VAR_1, u8 VAR_2, u8 VAR_3, u8 *VAR_4, u8 VAR_5, u8 *VAR_6, u8 VAR_7)
{
 u8 VAR_8[VAR_5+2],VAR_9[VAR_7+2];
 int VAR_10 = 0;

 VAR_8[0] = VAR_2;
 VAR_8[1] = VAR_3;
 FUNC_4(&VAR_8[2],VAR_4,VAR_5);

 FUNC_3("hab snd: ");
 FUNC_2(VAR_8,VAR_5+2,FUNC_3);
 FUNC_3("\n");

 if (FUNC_5(&VAR_1->hab_mutex) < 0)
  return -VAR_0;

 if ((VAR_10 = FUNC_1(VAR_1, VAR_8, VAR_5+2)) < 0 ||
  (VAR_10 = FUNC_0(VAR_1, VAR_9, VAR_7+2)) < 0)
  goto error;

 FUNC_3("hab get: ");
 FUNC_2(VAR_9,VAR_7+2,FUNC_3);
 FUNC_3("\n");

 FUNC_4(VAR_6,&VAR_9[2],VAR_7);
error:
 FUNC_6(&VAR_1->hab_mutex);
 return VAR_10;
}
