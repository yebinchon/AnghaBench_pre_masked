
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_msg {unsigned char* tlv; int size; } ;


 int FUNC_0 (unsigned char*,void const*,unsigned int) ;

int FUNC_1(struct qmi_msg *VAR_0,
  unsigned VAR_1, unsigned VAR_2, const void *VAR_3)
{
 unsigned char *VAR_4 = VAR_0->tlv + VAR_0->size;

 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_2;
 VAR_4[2] = VAR_2 >> 8;

 FUNC_0(VAR_4 + 3, VAR_3, VAR_2);

 VAR_0->size += (VAR_2 + 3);

 return 0;
}
