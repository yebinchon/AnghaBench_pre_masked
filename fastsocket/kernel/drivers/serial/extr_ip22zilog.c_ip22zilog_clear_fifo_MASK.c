
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int control; int data; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct zilog_channel*) ;
 unsigned char FUNC_2 (struct zilog_channel*,int ) ;
 unsigned char FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct zilog_channel *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  unsigned char VAR_8;

  VAR_8 = FUNC_3(&VAR_6->control);
  FUNC_0();
  if (VAR_8 & VAR_4)
   break;

  VAR_8 = FUNC_2(VAR_6, VAR_3);
  FUNC_3(&VAR_6->data);
  FUNC_0();

  if (VAR_8 & (VAR_2 | VAR_5 | VAR_0)) {
   FUNC_4(VAR_1, &VAR_6->control);
   FUNC_0();
   FUNC_1(VAR_6);
  }
 }
}
