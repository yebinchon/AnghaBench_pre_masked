
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* add_to_buf ) (int ,int ) ;int data; } ;
struct irctl {int task; int buf; TYPE_1__ d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct irctl *VAR_2)
{
 if (VAR_2->d.add_to_buf) {
  int VAR_3 = -VAR_0;
  int VAR_4 = 0;





get_data:
  VAR_3 = VAR_2->d.add_to_buf(VAR_2->d.data, VAR_2->buf);
  if (VAR_3 == 0) {
   VAR_4++;
   goto get_data;
  }

  if (VAR_3 == -VAR_1)
   FUNC_0(VAR_2->task);

  return VAR_4 ? 0 : VAR_3;
 }

 return 0;
}
