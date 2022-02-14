
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2;
 while (VAR_3) {

  struct sk_buff *VAR_4 = FUNC_2(VAR_1 + 128);
  if (FUNC_5(VAR_4 == ((void*)0))) {
   FUNC_3
       ("Failed to allocate skb for hardware pool %d\n",
        VAR_0);
   break;
  }

  FUNC_4(VAR_4, 128 - (((unsigned long)VAR_4->data) & 0x7f));
  *(struct sk_buff **)(VAR_4->data - sizeof(void *)) = VAR_4;
  FUNC_1(VAR_4->data, VAR_0, FUNC_0(VAR_1 / 128));
  VAR_3--;
 }
 return VAR_2 - VAR_3;
}
