
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {unsigned int len; void* data; } ;
struct carlu {int dummy; } ;
struct ar9170_stream {scalar_t__ tag; void* payload; int length; } ;


 int VAR_0 ;
 int FUNC_0 (struct carlu*,void*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,void*,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (char*,void*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct carlu *VAR_1, struct frame *VAR_2)
{
 void *VAR_3 = VAR_2->data;
 unsigned int VAR_4 = VAR_2->len;

 while (VAR_4 >= 4) {
  struct ar9170_stream *VAR_5;
  unsigned int VAR_6, VAR_7;

  VAR_5 = (void *) VAR_3;
  VAR_6 = FUNC_2(VAR_5->length);
  VAR_7 = FUNC_4(VAR_6 + 4, 4);

  if (VAR_5->tag != FUNC_1(0x4e00)) {
   FUNC_5("frame has no tag %p %u %x.\n",
         VAR_3, (int) VAR_4, VAR_5->tag);
   FUNC_3(VAR_0, "FRAME:", VAR_2->data, VAR_2->len);

   FUNC_0(VAR_1, VAR_3, VAR_4);
   return;
  }

  FUNC_0(VAR_1, VAR_5->payload, VAR_6);

  VAR_4 -= VAR_7;
  VAR_3 += VAR_7;
 }
}
