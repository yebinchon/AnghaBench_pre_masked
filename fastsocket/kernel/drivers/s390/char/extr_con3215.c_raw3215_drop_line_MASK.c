
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {scalar_t__ written; int head; int count; char* buffer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct raw3215_info *VAR_1)
{
 int VAR_2;
 char VAR_3;

 FUNC_0(VAR_1->written != 0);
 VAR_2 = (VAR_1->head - VAR_1->count) & (VAR_0 - 1);
 while (VAR_1->count > 0) {
  VAR_3 = VAR_1->buffer[VAR_2];
  VAR_2 = (VAR_2 + 1) & (VAR_0 - 1);
  VAR_1->count--;
  if (VAR_3 == 0x15)
   break;
 }
 VAR_1->head = VAR_2;
}
