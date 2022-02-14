
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct input_handle*,int ,int ,int) ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct input_handle *VAR_8)
{
 unsigned char VAR_9 = VAR_7;

 FUNC_1(&VAR_6);
 if (VAR_9 != 0xff) {
  FUNC_0(VAR_8, VAR_0, VAR_4, !!(VAR_9 & 0x01));
  FUNC_0(VAR_8, VAR_0, VAR_3, !!(VAR_9 & 0x02));
  FUNC_0(VAR_8, VAR_0, VAR_2, !!(VAR_9 & 0x04));
  FUNC_0(VAR_8, VAR_1, VAR_5, 0);
 }
 FUNC_2(&VAR_6);
}
