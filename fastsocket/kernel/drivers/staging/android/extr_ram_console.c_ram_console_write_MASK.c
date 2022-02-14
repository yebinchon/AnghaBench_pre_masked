
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ram_console_buffer {unsigned int start; unsigned int size; } ;
struct console {int dummy; } ;


 struct ram_console_buffer* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char const*,unsigned int) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct console *VAR_2, const char *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct ram_console_buffer *VAR_6 = VAR_0;

 if (VAR_4 > VAR_1) {
  VAR_3 += VAR_4 - VAR_1;
  VAR_4 = VAR_1;
 }
 VAR_5 = VAR_1 - VAR_6->start;
 if (VAR_5 < VAR_4) {
  FUNC_0(VAR_3, VAR_5);
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
  VAR_6->start = 0;
  VAR_6->size = VAR_1;
 }
 FUNC_0(VAR_3, VAR_4);

 VAR_6->start += VAR_4;
 if (VAR_6->size < VAR_1)
  VAR_6->size += VAR_4;
 FUNC_1();
}
