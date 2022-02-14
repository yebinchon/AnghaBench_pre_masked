
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warrior {scalar_t__ idx; scalar_t__ len; unsigned char* data; } ;
struct serio {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct warrior* FUNC_0 (struct serio*) ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (struct warrior*) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct serio *VAR_2,
  unsigned char VAR_3, unsigned int VAR_4)
{
 struct warrior *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 & 0x80) {
  if (VAR_5->idx) FUNC_1(VAR_5);
  VAR_5->idx = 0;
  VAR_5->len = VAR_1[(VAR_3 >> 4) & 7];
 }

 if (VAR_5->idx < VAR_5->len)
  VAR_5->data[VAR_5->idx++] = VAR_3;

 if (VAR_5->idx == VAR_5->len) {
  if (VAR_5->idx) FUNC_1(VAR_5);
  VAR_5->idx = 0;
  VAR_5->len = 0;
 }
 return VAR_0;
}
