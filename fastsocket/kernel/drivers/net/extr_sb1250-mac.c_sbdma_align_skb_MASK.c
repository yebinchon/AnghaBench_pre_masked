
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;


 unsigned char* FUNC_0 (unsigned char*,unsigned int) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned char *VAR_3 = VAR_0->data;
 unsigned char *VAR_4 = FUNC_0(VAR_3, VAR_1);

 FUNC_1(VAR_0, VAR_4 - VAR_3 + VAR_2);
}
