
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RingQueue {int ri; int wi; int length; scalar_t__ queue; } ;


 int FUNC_0 (struct RingQueue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,scalar_t__,int) ;

int FUNC_3(struct RingQueue *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(VAR_0 != ((void*)0));
 FUNC_1(VAR_1 != ((void*)0));

 VAR_3 = FUNC_0(VAR_0);
 if(!VAR_3)
  return 0;


 if(VAR_2 > VAR_3)
  VAR_2 = VAR_3;

 VAR_4 = VAR_2;
 if(VAR_0->ri > VAR_0->wi) {

  int VAR_5 = (VAR_4 < (VAR_0->length - VAR_0->ri)) ? VAR_4 : VAR_0->length - VAR_0->ri;
  FUNC_2(VAR_1, VAR_0->queue + VAR_0->ri, VAR_5);
  VAR_4 -= VAR_5;
  VAR_1 += VAR_5;
  VAR_0->ri = (VAR_0->ri + VAR_5) & (VAR_0->length-1);
 }
 if(VAR_4) {

  FUNC_2(VAR_1, VAR_0->queue + VAR_0->ri, VAR_4);
  VAR_0->ri = (VAR_0->ri + VAR_4) & (VAR_0->length-1);
 }
 return VAR_2;
}
