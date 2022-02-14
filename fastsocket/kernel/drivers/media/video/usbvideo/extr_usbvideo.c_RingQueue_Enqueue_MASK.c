
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RingQueue {scalar_t__ length; int wi; int queue; } ;


 int FUNC_0 (struct RingQueue*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned char const*,int) ;
 int VAR_0 ;

int FUNC_3(struct RingQueue *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(VAR_1 != ((void*)0));
 FUNC_1(VAR_2 != ((void*)0));
 FUNC_1(VAR_1->length > 0);
 while (VAR_3 > 0) {
  int VAR_5, VAR_6;


  VAR_6 = VAR_1->length - VAR_1->wi;
  if (VAR_6 <= 0) {
   VAR_1->wi = 0;
   VAR_6 = VAR_1->length;
  }
  VAR_5 = VAR_3;
  FUNC_1(VAR_6 > 0);
  if (VAR_5 > VAR_6)
   VAR_5 = VAR_6;

  FUNC_2(VAR_1->queue + VAR_1->wi, VAR_2, VAR_5);
  FUNC_0(VAR_1, VAR_0, VAR_5);
  VAR_2 += VAR_5;
  VAR_4 += VAR_5;
  VAR_3 -= VAR_5;
 }
 return VAR_4;
}
