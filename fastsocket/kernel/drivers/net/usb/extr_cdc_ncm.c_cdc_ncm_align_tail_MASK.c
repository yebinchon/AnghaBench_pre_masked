
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {size_t len; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (struct sk_buff*,size_t) ;
 size_t FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4 = FUNC_0(VAR_0->len, VAR_1) - VAR_0->len + VAR_2;

 if (VAR_0->len + VAR_4 > VAR_3)
  VAR_4 = VAR_3 - VAR_0->len;
 if (VAR_4 && FUNC_3(VAR_0) >= VAR_4)
  FUNC_1(FUNC_2(VAR_0, VAR_4), 0, VAR_4);
}
