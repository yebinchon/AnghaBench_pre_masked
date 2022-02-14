
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {unsigned int line_pos; char* buffer; size_t head; int flags; int cdev; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct raw3215_info*,unsigned int) ;
 int FUNC_2 (struct raw3215_info*) ;
 int FUNC_3 (struct raw3215_info*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct raw3215_info *VAR_4, unsigned char VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7, VAR_8;

 FUNC_4(FUNC_0(VAR_4->cdev), VAR_6);
 if (VAR_5 == '\t') {
  VAR_7 = VAR_2 - (VAR_4->line_pos%VAR_2);
  VAR_4->line_pos += VAR_7;
  VAR_5 = ' ';
 } else if (VAR_5 == '\n') {
  VAR_7 = 1;
  VAR_4->line_pos = 0;
 } else {
  VAR_7 = 1;
  VAR_4->line_pos++;
 }
 FUNC_1(VAR_4, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_4->buffer[VAR_4->head] = (char) VAR_3[(int) VAR_5];
  VAR_4->head = (VAR_4->head + 1) & (VAR_0 - 1);
  VAR_4->count++;
 }
 if (!(VAR_4->flags & VAR_1)) {
  FUNC_2(VAR_4);

  FUNC_3(VAR_4);
 }
 FUNC_5(FUNC_0(VAR_4->cdev), VAR_6);
}
