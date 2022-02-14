
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct iforce {int pkt; unsigned char id; unsigned char len; int idx; unsigned char* data; scalar_t__ csum; } ;
typedef int irqreturn_t ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iforce*,int,unsigned char*) ;
 struct iforce* FUNC_1 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct serio *VAR_2,
  unsigned char VAR_3, unsigned int VAR_4)
{
 struct iforce *VAR_5 = FUNC_1(VAR_2);

 if (!VAR_5->pkt) {
  if (VAR_3 == 0x2b)
   VAR_5->pkt = 1;
  goto out;
 }

 if (!VAR_5->id) {
  if (VAR_3 > 3 && VAR_3 != 0xff)
   VAR_5->pkt = 0;
  else
   VAR_5->id = VAR_3;
  goto out;
 }

 if (!VAR_5->len) {
  if (VAR_3 > VAR_0) {
   VAR_5->pkt = 0;
   VAR_5->id = 0;
  } else {
   VAR_5->len = VAR_3;
  }
  goto out;
 }

 if (VAR_5->idx < VAR_5->len) {
  VAR_5->csum += VAR_5->data[VAR_5->idx++] = VAR_3;
  goto out;
 }

 if (VAR_5->idx == VAR_5->len) {
  FUNC_0(VAR_5, (VAR_5->id << 8) | VAR_5->idx, VAR_5->data);
  VAR_5->pkt = 0;
  VAR_5->id = 0;
  VAR_5->len = 0;
  VAR_5->idx = 0;
  VAR_5->csum = 0;
 }
out:
 return VAR_1;
}
