
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int canon_head; int read_tail; scalar_t__* read_buf; int read_flags; int canon_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct tty_struct *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (!VAR_2->canon_data)
  return 0;
 VAR_4 = VAR_2->canon_head;
 VAR_5 = VAR_2->read_tail;
 VAR_3 = (VAR_4 - VAR_5) & (VAR_0-1);

 while (VAR_4 != VAR_5) {
  if (FUNC_0(VAR_5, VAR_2->read_flags) &&
      VAR_2->read_buf[VAR_5] == VAR_1)
   VAR_3--;
  VAR_5 = (VAR_5+1) & (VAR_0-1);
 }
 return VAR_3;
}
