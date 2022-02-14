
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_msg {unsigned char* tlv; unsigned int size; } ;


 int FUNC_0 (void*,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct qmi_msg *VAR_0,
         unsigned VAR_1, unsigned VAR_2, void *VAR_3)
{
 unsigned char *VAR_4 = VAR_0->tlv;
 unsigned VAR_5 = VAR_0->size;
 unsigned VAR_6;

 while (VAR_5 >= 3) {
  VAR_5 -= 3;


  VAR_6 = VAR_4[1] | (VAR_4[2] << 8);
  if (VAR_6 > VAR_5)
   break;

  if (VAR_4[0] == VAR_1) {
   if (VAR_6 != VAR_2)
    return -1;
   FUNC_0(VAR_3, VAR_4 + 3, VAR_2);
   return 0;
  }

  VAR_4 += (VAR_6 + 3);
  VAR_5 -= VAR_6;
 }

 return -1;
}
